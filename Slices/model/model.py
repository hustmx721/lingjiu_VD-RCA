import torch
import torch.nn as nn
import torch.nn.functional as F
from  torch_geometric.nn.conv import GatedGraphConv,SAGEConv
from torch_geometric.datasets import TUDataset
from torch_geometric.loader import DataLoader
# from torch_geometric.nn import GNNExplainer
from torch_geometric.nn import GraphConv,GCNConv
from torch_geometric.nn import global_mean_pool
import math
import copy
from einops import rearrange
from einops import rearrange, reduce, repeat
# device =torch.device('cuda' if torch.cuda.is_available() else 'cpu')
from torch.nn import Linear



# Bert模型构建
def get_attn_pad_mask(seq_q):
    # print('seq_q',seq_q)
    batch_size, seq_len = seq_q.size()
    # eq(zero) is PAD token
    pad_attn_mask = seq_q.data.eq(0).unsqueeze(1)  # [batch_size, 1, seq_len]
    return pad_attn_mask.expand(batch_size, seq_len, seq_len)  # [batch_size, seq_len, seq_len]

class PositionEncoding(nn.Module):
    def __init__(self, d_model, dropout=0.1, max_len=61):
        super(PositionEncoding, self).__init__()
        self.dropout = nn.Dropout(p=dropout)
        pe = torch.zeros(max_len, d_model)
        position = torch.arange(0, max_len, dtype=torch.float).unsqueeze(1)
        div_term = torch.exp(torch.arange(0, d_model, 2).float() * (-math.log(10000.0) / d_model))
        pe[:, 0::2] = torch.sin(position * div_term)
        pe[:, 1::2] = torch.cos(position * div_term)

        pe = pe.unsqueeze(0)
        self.register_buffer('pe', pe)

    def forward(self, x):
        x = x + self.pe[:, :x.size(1), :]
        return self.dropout(x)


class PreNorm(nn.Module):
    def __init__(self, dim, fn):
        super().__init__()
        self.norm = nn.LayerNorm(dim)
        self.fn = fn

    def forward(self, x, **kwargs):
        return self.fn(self.norm(x), **kwargs)

# class FeedForward(nn.Module):
#     def __init__(self, dim, hidden_dim, dropout=0.):
#         super().__init__()
#         self.net = nn.Sequential(
#             nn.Linear(dim, hidden_dim),
#             nn.GELU(),
#             nn.Dropout(dropout),
#             nn.Linear(hidden_dim, dim),
#             nn.Dropout(dropout)
#         )
#
#     def forward(self, x):
#         return self.net(x)

class FeedForward(nn.Module):
    def __init__(self, d_model, ff_dim, dropout=0.):
        super().__init__()
        self.fc_1 = nn.Linear(d_model, ff_dim)
        self.fc_2 = nn.Linear(ff_dim, d_model)
        self.dropout = nn.Dropout(dropout)

    def forward(self, x):
        # print('x',x.shape) #(64,2,64)
        x = self.dropout(torch.relu(self.fc_1(x)))
        x = self.fc_2(x)
        return x


def clone_module(module, n):
    return nn.ModuleList([copy.deepcopy(module) for _ in range(n)])


class SwitchFeedForward(nn.Module):
    def __init__(self, capacity_factor, drop_tokens, n_experts, d_model):
        super().__init__()
        self.capacity_factor = capacity_factor #
        self.n_experts = n_experts #4
        # self.drop_tokens = drop_tokens

        # make copies of the FFNs
        self.experts = clone_module(FeedForward(d_model=d_model,ff_dim=d_model), n_experts)
        self.switch = nn.Linear(d_model, n_experts)
        self.switch_pre = nn.Linear(d_model, d_model)

    def forward(self, x):
        batch_size, seq_len, d_model = x.shape
        x = x.view(-1, d_model)  # Flatten the sequence and batch dimensions
        # print('x',x.shape)  #149,64
        # print('switch',self.switch(x).shape)  #149,8
        # print('x',x.shape)
        route_prob = torch.softmax(self.switch(x), dim=-1)
        # print('route_prob',route_prob.shape)
        # x
        # torch.Size([1472, 64])
        # route_prob
        # torch.Size([1472, 4])
        # route_prob_max
        # torch.Size([1472])

        # Get the maximum routing probabilities and the routes.
        # We route to the expert with highest probability
        route_prob_max, routes = torch.max(route_prob, dim=-1)
        # print('route_prob_max',route_prob_max.shape)  #1472,4
        # print('route_prob_max',route_prob_max) # 1472,1  0.3713
        factor = route_prob_max
        x = x * factor.view(-1, 1)
        # print('x_new',x.shape)
        # Get indexes of tokens going to each expert
        indexes_list = [torch.eq(routes, i).nonzero(as_tuple=True)[0] for i in range(self.n_experts)]
        capacity = int(self.capacity_factor * len(x) / self.n_experts)
        # print('indexes_list', indexes_list)
        # Number of tokens routed to each expert.
        # counts = x.new_tensor([len(indexes_list[i]) for i in range(self.n_experts)])

        # Get outputs of the expert FFNs
        route_outputs = [self.experts[i](x[indexes_list[i], :]) for i in range(self.n_experts)]
        # print('route_outputs',len(route_outputs))

        # Assign to final output
        final_output = torch.cat(route_outputs, dim=0).view(batch_size, seq_len, d_model)
        # print('final_output',final_output.shape)
        return final_output




class MultiHeadSelfAttention(nn.Module): #自注意力机制
    def __init__(self, embed_dim, num_heads, dropout=0.):
        super(MultiHeadSelfAttention, self).__init__()
        self.embed_dim = embed_dim
        self.heads = num_heads
        self.head_dim = embed_dim // num_heads
        self.scale = self.head_dim ** -0.5
        self.proj_qkv = nn.Linear(embed_dim, embed_dim*3, bias=True)
        self.proj_out = nn.Sequential(
                            nn.Linear(embed_dim, embed_dim, bias=False),
                            nn.Dropout(dropout))
        self.dropout = nn.Dropout(dropout)

    def forward(self, x, attn_mask):
        # print('x',x.shape)
        qkv = self.proj_qkv(x).chunk(3, dim=-1)
        q, k, v = map(lambda t: rearrange(t, 'b n (h d) -> b h n d', h=self.heads), qkv)
        attn_mask = attn_mask.unsqueeze(1).repeat(1, self.heads, 1,
                                                  1)  # attn_mask : [batch_size, n_heads, seq_len, seq_len]
        # print('q',q.shape)
        # print('k', k.shape)
        # print('v', v.shape)
        # q torch.Size([35, 4, 144, 32])
        # k torch.Size([35, 4, 144, 32])
        # v torch.Size([35, 4, 144, 32])
        product = torch.matmul(q, k.transpose(-2, -1)) * self.scale
        # product.masked_fill_(attn_mask.cuda(), -1e9)
        # print(product)
        # print('product',product.shape) # 35,4,48,48 可以加attention mask
        weights = F.softmax(product, dim=-1)
        weights_o = weights
        # weights = self.dropout(weights)

        out = torch.matmul(weights, v)
        # print('out',out.shape)  #64, 4, 99, 16]
        # combine heads
        out = rearrange(out, 'b h n d -> b n (h d)')

        # x
        # torch.Size([64, 98, 64])
        # q
        # torch.Size([64, 4, 98, 16])
        # k
        # torch.Size([64, 4, 98, 16])
        # v
        # torch.Size([64, 4, 98, 16])
        # product
        # torch.Size([64, 4, 98, 98])
        # out
        # torch.Size([64, 4, 98, 16])

        return self.proj_out(out),weights_o


class SelfEncoderLayer(nn.Module): #重点看一看，很重要
    def __init__(self, embed_dim=64, hidden_dim=64, num_heads=4):
        super().__init__()
        self.Attention = MultiHeadSelfAttention(embed_dim, num_heads)
        self.LayerNorm = nn.LayerNorm(embed_dim)
        self.LayerNorm_attn = nn.LayerNorm(embed_dim)
        #self.FeedForward = SwitchFeedForward(capacity_factor=1.0, drop_tokens=False, n_experts=4, d_model=embed_dim)#FeedForward(embed_dim, hidden_dim)
        self.FeedForward = FeedForward(embed_dim, hidden_dim)
    def forward(self, x,attn_mask):
        norm_x = self.LayerNorm(x)
        attention,qk = self.Attention(norm_x,attn_mask)
        attn = attention + norm_x
        #f0 = attn
        norm_attn = self.LayerNorm_attn(attn)
        #f1 = norm_attn
        # print('norm_attn',norm_attn.shape)
        output = self.FeedForward(norm_attn) + norm_attn
        # print('output', output.shape)
        # norm_attn
        # torch.Size([1, 99, 64])
        # output
        # torch.Size([1, 99, 64])
        #f2 = output
        return output
#



class MLP(nn.Module):
    def __init__(self):
        super(MLP, self).__init__()
        self.model = nn.Sequential(  # 定义网络的每一层，nn.ReLU可以换成其他激活函数，比如nn.LeakyReLU()
            nn.Linear(100, 100),
            nn.ReLU(inplace=True),
            nn.Linear(100, 100),
            nn.ReLU(inplace=True),
            nn.Linear(100, 100),
            nn.ReLU(inplace=True),

        )
        self.linear = Linear(100, 2)

    def forward(self, x, edge_index, batch):
        # print(edge_index)
        x = self.model(x)
        x = global_mean_pool(x, batch)
        x = F.dropout(x, p=0.5)
        x = self.linear(x)

        return x


class GNN(torch.nn.Module):
    def __init__(self, hidden_channels):
        super(GNN, self).__init__()
        torch.manual_seed(12345)
        self.conv1 = GraphConv(100, hidden_channels)  #GatedGraphConv GraphConv
        self.conv2 = GraphConv(hidden_channels, hidden_channels)

        self.conv3 = GraphConv(hidden_channels, hidden_channels)
        self.linear = Linear(hidden_channels, 2)

    def forward(self, x, edge_index, batch):
        # print('x',x.shape)
        x = self.conv1(x, edge_index)
        x = x.relu()
        x = self.conv2(x, edge_index)
        x = x.relu()
        x = self.conv3(x, edge_index)
        # print('x_middle',x.shape)
        x = global_mean_pool(x, batch)
        x = F.dropout(x, p=0.5)
        x = self.linear(x)
        # print('x_final',x.shape)
        return x



class VuldetexpModel(nn.Module):
    def __init__(self,batch,input_dim,output_dim,layers=6):
        super(VuldetexpModel,self).__init__() # super()方法，初始化父类nn.Module中的属性
        self.batch = batch

        self.ggnn = GatedGraphConv(out_channels=output_dim,num_layers=layers)  # out_channels代表输出节点的维度，num_layers代表更新消息的次数
        self.classify_1 = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim,  # 输入通道等于结点特征维度
                      out_channels = output_dim,  # 输出通道数等于卷积核的个数
                      kernel_size = 3) ,          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim),  # 正则化
            nn.ReLU() , # 激活函数
            nn.MaxPool1d(kernel_size=3,stride=2)  # 最大化池化
        )

        self.classify_1_ = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim,  # 输入通道等于结点特征维度
                      out_channels = output_dim,  # 输出通道数等于卷积核的个数
                      kernel_size = 1) ,          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim),  # 正则化
            nn.ReLU() , # 激活函数
            nn.MaxPool1d(kernel_size=2,stride=2)  # 最大化池化
        )

        self.classify_2 = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim+input_dim,  # 输入通道等于结点特征维度
                      out_channels = output_dim+input_dim,  # 输出通道数等于卷积核的个数
                      kernel_size = 3),          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim+input_dim),  # 正则化
            nn.ReLU() , # 激活函数
            nn.MaxPool1d(kernel_size=3,stride=2)  # 最大化池化
        )

        self.classify_2_ = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim+input_dim,  # 输入通道等于结点特征维度
                      out_channels = output_dim+input_dim,  # 输出通道数等于卷积核的个数
                      kernel_size = 1),          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim+input_dim),  # 正则化
            nn.ReLU() , # 激活函数
            nn.MaxPool1d(kernel_size=2,stride=2)  # 最大化池化
        )

        self.linear_1 = nn.Linear(in_features=output_dim,out_features=2)
        self.linear_2 = nn.Linear(in_features=output_dim+input_dim,out_features=2)
        self.sigmoid = nn.Sigmoid()
        self.SelfEncoder = SelfEncoderLayer(embed_dim=100, hidden_dim=100, num_heads=4)

    def forward(self,feature,topology):
        # print(feature.shape)  #2000,100
        output = self.ggnn(feature,topology)  # 聚合结点信息

        feature_ = feature.reshape(self.batch,200,-1) # 转换成批数据
        # print('feature_',feature_.shape)  # 10,200,100

        feature_ = self.SelfEncoder(feature_, get_attn_pad_mask(torch.ones(feature_.shape[0], feature_.shape[1])))

        output_1 = output.reshape(self.batch,200,-1)  
        concat = torch.cat((output_1,feature_),dim=-1)  # 拼接原特征矩阵和聚合后的特征矩阵

        class_1 = self.classify_1(output_1.permute(0,2,1))
        class_1_ = self.classify_1_(class_1)
        linear_1 = self.linear_1(class_1_.permute(0,2,1))

        class_2 = self.classify_2(concat.permute(0,2,1))
        class_2_ = self.classify_2_(class_2)
        linear_2 = self.linear_2(class_2_.permute(0,2,1))

        # print(linear_1)
        before_avg = torch.mul(linear_1,linear_2)
        avg = before_avg.mean(dim=1)
        result = self.sigmoid(avg).squeeze(dim=-1)

        return result
    

class slice_model(nn.Module):
    def __init__(self, batch,node_num, input_dim,output_dim, dropout):
        super(slice_model,self).__init__()
        self.batch = batch # batch个数
        self.node_num = node_num  # 结点个数
        self.input_dim = input_dim

        self.sage = SAGEConv(in_channels=input_dim,out_channels=input_dim,aggr='max',normalize=True)  # 源模型

        self.classify_1 = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim,  # 输入通道等于结点特征维度
                      out_channels = output_dim,  # 输出通道数等于卷积核的个数
                      kernel_size = 3) ,          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim),  # 正则化
            nn.ReLU() , # 激活函数
        )
        self.pool = nn.Sequential(
            nn.AdaptiveMaxPool1d(output_size=1),  # 最大化池化
            nn.Dropout(dropout),
            nn.Flatten(1)
        )

        self.classify_2 = nn.Sequential(
            # conv_output:<batch,卷积核个数（输出通道数），结点个数-kernel_size+1>  
            nn.Conv1d(in_channels = output_dim*2,  # 输入通道等于结点特征维度
                      out_channels = output_dim*2,  # 输出通道数等于卷积核的个数
                      kernel_size = 3) ,          # 卷积核的kernel_Size，卷积核尺寸（输入通道，kernel_size）
            nn.BatchNorm1d(num_features=output_dim*2),  # 正则化
            nn.ReLU() , # 激活函数
        )

        self.linear_1 = nn.Linear(in_features=input_dim,out_features=2)
        self.linear_2 = nn.Linear(in_features=2*input_dim,out_features=2)
        self.sigmoid = nn.Sigmoid()

        self.mlp = nn.Sequential(
            nn.Linear(in_features=output_dim*2,out_features=64),
            nn.Dropout(0.5),
            nn.ReLU(),
            nn.Linear(in_features=64,out_features=2),
            nn.Sigmoid()
        )

    def forward(self, feature, topo,batch):
        sage = self.sage(feature,topo)  # 聚合结点信息

        feature_ = feature.reshape(self.batch,self.node_num,-1) # 原始信息转换成批数据
        output_1 = sage.reshape(self.batch,self.node_num,-1)   # 更新后的信息转换成批数局
        concat = torch.cat((output_1,feature_),dim=-1)  # 拼接原特征矩阵和聚合后的特征矩阵

        class_1 = self.classify_1(output_1.permute(0,2,1))
        pool_1 = self.pool(class_1)
        linear_1 = self.linear_1(pool_1)

        class_2 = self.classify_2(concat.permute(0,2,1))
        pool_2 = self.pool(class_2)
        linear_2 = self.linear_2(pool_2)

        result = torch.mul(linear_1,linear_2)

        return result