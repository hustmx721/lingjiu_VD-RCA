import os
import torch
import tqdm
import numpy as np
from scipy import sparse
from torch_geometric.data import Data
from torch.utils.data import Dataset
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score, confusion_matrix

import warnings
warnings.filterwarnings("ignore")  # 忽视警告

# 优先使用GPU
# ! 注意指定GPU编号
device = torch.device('cuda:9' if torch.cuda.is_available() else 'cpu')

# 自定义程序依赖图子图切片的数据集
# info: 表示切片信息,类似于Dataset中的样本x
class SliceData(Dataset):
    def __init__(self,info,label):
        self.info = info
        self.label = label
    
    def __len__(self):
        return len(self.info)
    
    def __getitem__(self, index):
        return self.info[index],self.label[index]

def collate_info(slice_dir):
    # 每个切片的拓扑结构和节点信息均已被向量化，只是保存在不同的文件中
    # 本函数的目的是收集切片信息和对应的标签，用于切分数据
    print('slice_dir',slice_dir)  #../preprocess/dataset/slices

    slice_1_info = []  # 收集有漏洞的切片代码
    slice_1_label = [] # 收集有漏洞的代码标签
    slice_0_info = []  # 收集无漏洞的切片代码
    slice_0_label = [] # 收集无漏洞的代码标签

    for dir in os.listdir(slice_dir):
        code_label_path = os.path.join(slice_dir,dir,'code/codes_label.txt')  # 打完标签的切片路径

        with open(code_label_path,'r') as f:  # 读取文件
            slices_info = f.read()
        
        slice_list = slices_info.strip().split('---------------------------------------')  # 切割成单个切片
        for slice in slice_list:
            if slice == '':
                continue
            info = slice.strip().split('\n')[0]    # 
            label = slice.strip().split('\n')[-1]  # 切片标签

            # 将有漏洞切片和无漏洞切片分别保存
            if label == '0':
                slice_0_info.append(info)
                slice_0_label.append(int(label)) 
            if label == '1':
                slice_1_info.append(info)
                slice_1_label.append(int(label)) 

    return slice_0_info,slice_0_label,slice_1_info,slice_1_label

def read_dataset(train_0_path,train_1_path,valid_0_path,valid_1_path):
    # 读取训练集和验证集信息

    with open(train_0_path,'r') as f:
        train_0_data = f.readlines()

    with open(train_1_path,'r') as f:
        train_1_data = f.readlines()

    with open(valid_0_path,'r') as f:
        valid_0_data = f.readlines()

    with open(valid_1_path,'r') as f:
        valid_1_data = f.readlines()

    return train_0_data,train_1_data,valid_0_data,valid_1_data

# def is_npy_file_empty(file_path):
#     try:
#         array = np.load(file_path,allow_pickle=True)
#         return array.size == 0  # 如果数组为空，size属性会返回0
#     except IOError:
#         # 文件不存在或其他读取错误
#         return False

def is_file_empty(file_path):
    if os.path.isfile(file_path):  # 检查文件是否存在
        return os.path.getsize(file_path) == 0  # 检查文件大小是否为0
    else:
        return False

import pickle

def is_pkl_file_empty(file_path):
    if not os.path.isfile(file_path):
        return True  # 文件不存在，视为空
    try:
        with open(file_path, 'rb') as file:
            pickle.load(file)
            return False  # 能加载内容，文件非空
    except EOFError:
        return True  # 文件为空或者只有头部信息
    except Exception as e:
        print(f"加载.pkl文件时发生错误: {e}")
        return True  # 其他错误，视为文件为空或者文件损坏


# 使用示例
# file_path = 'example.pkl'
# print(is_pkl_file_empty(file_path))


def graph_data(slice_dir,dataset_0,dataset_1,max_num):  
    # 创建图专属数据集

    data_list = []
    # 无漏洞切片
    for info in dataset_0:
        file_name = info.split()[0].split('/')[-4] # 文件名
        # print('file_name',file_name)
        func_name = info.split()[0].split('/')[-3] # 函数名
        # print('func_name', func_name)
        fun_type = func_name.split('_')[0]  # # 切片来源函数（有漏洞：1 or 无漏洞：0）
        # print('fun_type', fun_type)
        slice_num = info.split()[1] # 切片编号
        # print('slice_num', slice_num)
        code_path = slice_dir + '/' + file_name + '/code/' + fun_type  + '_' + slice_num + '.npy'  # 切片信息保存地址
        # print('code_path',code_path)
        topo_path = slice_dir + '/' + file_name + '/topo/' + fun_type  + '_' + slice_num + '.npy'  # 切片拓扑保存地址
        # print('topo',topo_path)

        file_path = slice_dir + '/' + file_name + '/code/codes.txt'
        if os.path.isfile(file_path):
            file = open(file_path, 'r')
            content = file.read()
            if len(content) == 0:
                print(file_name)
                print("文件为空")
                continue
            else:
                # print("文件不为空")
                pass
        else:
            # print("文件不存在")
            continue
        # if is_npy_file_empty(code_path):
        #     print("!!!!!!!", code_path)
        #     continue
        # else:
        #     pass

        code = np.load(code_path)
        topo = np.load(topo_path,allow_pickle=True)

        # 统一拓扑结构的维度
        if len(topo) < max_num:  # 结点太少，补零
            new_topo = np.pad(topo,((0,max_num-len(topo)),((0,max_num-len(topo)))))
        if len(topo) > max_num:   # 结点太多，截断
            new_topo = topo[:max_num,:max_num]
        if len(topo) == max_num:   
            new_topo = topo

        x = torch.tensor(code,dtype=torch.float)  # 结点特征
        coo_a = sparse.coo_matrix(new_topo)  # 密集矩阵转化为稀疏矩阵
        edge_index = torch.tensor(np.array([coo_a.row,coo_a.col]),dtype=torch.long)  # 拓扑结构
        y = torch.tensor(int(info.split()[-1]))
        data = Data(x=x,edge_index=edge_index,y=y)  # 构建数据
        data_list.append(data)
    
    novul_num = len(data_list)    

    # 有漏洞切片
    for info in dataset_1:
        file_name = info.split()[0].split('/')[-4] # 文件名
        func_name = info.split()[0].split('/')[-3] # 函数名
        fun_type = func_name.split('_')[0]  # # 切片来源函数（有漏洞：1 or 无漏洞：0）
        slice_num = info.split()[1] # 切片编号

        code_path = slice_dir + '/' + file_name + '/code/' + fun_type  + '_' + slice_num + '.npy'  # 切片信息保存地址
        topo_path = slice_dir + '/' + file_name + '/topo/' + fun_type  + '_' + slice_num + '.npy'  # 切片拓扑保存地址

        # print('topo_path',topo_path)
        # print('------------------------')
        file_path = slice_dir + '/' + file_name + '/code/codes.txt'
        if os.path.isfile(file_path):
            file = open(file_path, 'r')
            content = file.read()
            if len(content) == 0:
                # print("文件为空")
                continue
            else:
                # print("文件不为空")
                pass
        else:
            # print("文件不存在")
            continue

        # print('.pkl文件空不空',is_pkl_file_empty(topo_path))
        # if is_pkl_file_empty(topo_path):
        #     continue
        # else:
        #     pass
        # print('++++++++++++++++++++++')

        # 替换成你的.pkl文件路径
        file_path = topo_path

        # 判断文件是否存在
        if os.path.exists(file_path):
            pass
            #print("topo文件存在")
        else:
            # print("topo文件不存在")
            continue

        code = np.load(code_path)
        topo = np.load(topo_path,allow_pickle=True)

        # 统一拓扑结构的维度
        if len(topo) < max_num:  # 结点太少，补零
            new_topo = np.pad(topo,((0,max_num-len(topo)),((0,max_num-len(topo)))))
        if len(topo) > max_num:   # 结点太多，截断
            new_topo = topo[:max_num,:max_num]
        if len(topo) == max_num:   
            new_topo = topo

        x = torch.tensor(code,dtype=torch.float)  # 结点特征
        coo_a = sparse.coo_matrix(new_topo)  # 密集矩阵转化为稀疏矩阵
        edge_index = torch.tensor(np.array([coo_a.row,coo_a.col]),dtype=torch.long)  # 拓扑结构
        y = torch.tensor(int(info.split()[-1]))
        data = Data(x=x,edge_index=edge_index,y=y)  # 构建数据
        data_list.append(data)
    
    vul_num = len(data_list) - novul_num
    print("Total number of vulnerable slices:", vul_num)
    print("Total number of non-vulnerable slices:", novul_num)

    return data_list


def train_model(train_loader,model,loss_fn,optimizer):
    model.train() # 启用batch normalization和dropout
    train_loss = 0
    train_acc = 0

    for data in train_loader: # 以batch为单位取数据
        # print(data)
        data.x = data.x.to(device)
        data.edge_index = data.edge_index.to(device)
        data.batch = data.batch.to(device)
        # print(data.x.shape,data.edge_index.shape)

        pre_outputs = model(data.x,data.edge_index)  # 前向传播
        loss = loss_fn(pre_outputs.cpu(),data.y)  # 求loss

        optimizer.zero_grad() # 清空梯度
        loss.backward()  # 反向传播求梯度
        optimizer.step() # 更新所有参数

        predict_labels = torch.argmax(pre_outputs, dim=1).cpu()  # 返回每一行最大的元素的下标，作为模型预测结果

        # 使用sklearn中的评价函数的时候，参数需要在cpu中
        acc = accuracy_score(data.y.cpu(), predict_labels)  # 计算每一次训练的准确度

        train_loss += loss.item()  # 对每一此训练的loss进行求和
        train_acc += acc


    return train_loss / len(train_loader), train_acc / len(train_loader)  # 返回一轮epoch的平均损失和准确率
 

def valid_model(valid_loader, model, loss_fn):

    model.eval()   # 不启用 batch normalization 和 dropout
    valid_loss = 0
    valid_acc = 0
    valid_pre = 0
    valid_recall = 0
    valid_f1 = 0
    y_true, y_pred = [], []

    with torch.no_grad():
        for data in valid_loader:
            data.x = data.x.to(device)
            data.edge_index = data.edge_index.to(device)
            data.batch = data.batch.to(device)
            pre_outputs = model(data.x,data.edge_index)  # 前向传播
            loss = loss_fn(pre_outputs.cpu(),data.y)           # 求loss

            predict_labels = torch.argmax(pre_outputs, dim=1).cpu()  # 返回每一行最大的元素的下标，作为模型预测结果
            acc = accuracy_score(data.y.cpu(), predict_labels)    # 计算准确度
            pre = precision_score(data.y.cpu(),predict_labels)    # 计算精度
            recall = recall_score(data.y.cpu(), predict_labels)   # 计算召回率
            f1 = f1_score(data.y.cpu(), predict_labels)  # 计算F1值

            y_true.extend(data.y.cpu().numpy().tolist())
            y_pred.extend(predict_labels.numpy().tolist())

            valid_loss += loss.item()  # 对每一此训练的loss进行求和
            valid_acc += acc
            valid_pre += pre
            valid_recall += recall
            valid_f1 += f1
    
    conf_mat = confusion_matrix(y_true, y_pred, labels=[0,1])  # 计算混淆矩阵
    R, P, F1 = cal_index(conf_mat, type=1)  # 计算各类别的指标

    return valid_loss / len(valid_loader), valid_acc / len(valid_loader), \
           R, P, F1

def test_model(test_loader, model, loss_fn):

    print("begin testing...")
    model.eval()  # 不启用 batch normalization 和 dropout
    test_loss = 0
    test_acc = 0

    with torch.no_grad():
        for data in test_loader:
            data.x = data.x.to(device)
            data.edge_index = data.edge_index.to(device)
            data.batch = data.batch.to(device)
            pre_outputs = model(data.x,data.edge_index)  # 前向传播
            loss = loss_fn(pre_outputs.cpu(),data.y)           # 求loss

            predict_labels = torch.argmax(pre_outputs, dim=1).cpu()          # 返回每一行最大的元素的下标，作为模型预测结果
            acc = accuracy_score(data.y.cpu(), predict_labels)  # 计算准确度

            test_loss += loss.item()  # 对每一此训练的loss进行求和
            test_acc += acc

    return test_loss / len(test_loader), test_acc / len(test_loader)  # 返回一轮epoch的平均损失和准确率

# 每轮运行时间函数
def epoch_time(start_time, end_time):
    elapsed_time = end_time - start_time
    elapsed_mins = int(elapsed_time / 60)
    elapsed_secs = int(elapsed_time - (elapsed_mins * 60))
    return elapsed_mins, elapsed_secs


def cal_index(conf_mat,type=None) -> float:
    """
    计算指标 accuracy, precision, recall, F1
    #### 要求: conf_mat 标签对应的序号为顺序,如[0,1,2,...]
    :param conf_mat:  confusion matrix
    :param type:  int or str, 0 or 1, 计算指定类别的指标;
                    若为None,则计算所有类别的平均指标
    """
    if type is not None:
        assert isinstance(type, (int,str))
        type = int(type)
        R = conf_mat[type][type] / (sum(conf_mat[type,:]) + 1e-10)
        P = conf_mat[type][type] / (sum(conf_mat[:,type]) + 1e-10)
        F1 = 2 * P * R / (P + R + 1e-10)
        return R, P, F1
    else:
        R, P, F1 = [], [], []
        for i in range(len(conf_mat)):
            R.append(conf_mat[i][i] / (sum(conf_mat[i,:]) + 1e-10))
            P.append(conf_mat[i][i] / (sum(conf_mat[:,i]) + 1e-10))
            F1.append(2 * P[i] * R[i] / (P[i] + R[i] + 1e-10))
        return sum(R)/len(R), sum(P)/len(P), sum(F1)/len(F1)

