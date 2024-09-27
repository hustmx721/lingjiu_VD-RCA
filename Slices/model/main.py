import torch, warnings, time, sys
import numpy as np
import torch.nn as nn
from util_main import *
from utils import set_seed
from mylogging import Logger
from configs import Config as cfg
from torch_geometric.loader import DataLoader
from model import VuldetexpModel,slice_model,GNN,MLP
# from tensorboardX import SummaryWriter
# from torch_geometric.nn import GNNExplainer

warnings.filterwarnings("ignore")  # 忽视警告
start_time = time.time()

# 优先使用GPU
# ! 注意设置GPU编号
device = torch.device('cuda:9' if torch.cuda.is_available() else 'cpu')
     

class FocalLoss(nn.Module):
    def __init__(self, gamma=1, weight=None):
        super(FocalLoss, self).__init__()
        self.gamma = gamma
        self.weight = weight

    def forward(self, inputs, targets):
        ce_loss = nn.CrossEntropyLoss(weight=self.weight)(inputs, targets)  # 使用交叉熵损失函数计算基础损失
        pt = torch.exp(-ce_loss)  # 计算预测的概率
        focal_loss = (1 - pt) ** self.gamma * ce_loss  # 根据Focal Loss公式计算Focal Loss
        return focal_loss


def main():
    set_seed(cfg.seed)
    results = []
    for fold in range(1,6):
        print("-----------------开始第{}折训练-----------------".format(fold))
        # 读取数据集
        # ! 注意修改切片保存地址
        slice_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices' # 切片保存地址
        train_0_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/train_0_fold{fold}.txt'  # 训练集无漏洞切片地址
        train_1_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/train_1_fold{fold}.txt'
        valid_0_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/valid_0_fold{fold}.txt'
        valid_1_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/valid_1_fold{fold}.txt'

        train_0_dataset,train_1_dataset,valid_0_dataset,valid_1_dataset = read_dataset(train_0_path,
                                                                                    train_1_path,
                                                                                    valid_0_path,
                                                                                    valid_1_path)
        print(f'Fold-{fold} data process Done!\nThe vuln vs novuln ratio in TrainSet/validSet:')
        print(f'TrainSet 0/1 ratio: {len(train_0_dataset)}/{len(train_1_dataset)}')
        print(f'validSet 0/1 ratio: {len(valid_0_dataset)}/{len(valid_1_dataset)}')
        # 构建图的专属数据集
        train_list = graph_data(slice_dir,train_0_dataset,train_1_dataset,cfg.node_num)
        valid_list = graph_data(slice_dir,valid_0_dataset,valid_1_dataset,cfg.node_num)

        # 从各个数据集以batch_size为单位提取数据
        train_loader = DataLoader(train_list ,batch_size=cfg.Batch_size,shuffle=True,drop_last=True) # 舍弃不能被batch_size整除的最后一批数据
        valid_loader = DataLoader(valid_list,batch_size=cfg.Batch_size,shuffle=True,drop_last=True)
        test_loader = DataLoader(valid_list,batch_size=cfg.Batch_size,shuffle=True,drop_last=True)

        # 创建模型
        model = VuldetexpModel(cfg.Batch_size,cfg.input_dim,cfg.output_dim).to(device)  # 初始化神经网络
        loss_func = FocalLoss(gamma=2, weight=None).to(device)
        optimizer = torch.optim.Adam(model.parameters(),lr=cfg.Learning_rate,weight_decay=cfg.decay)  # 设置优化器

        best_valid_loss = float('inf')
    
        for epoch in range(cfg.Epoch):
            print("-----------------第{}轮训练开始--------------------".format(epoch + 1))
            start_time = time.time()  # 记录一轮开始时间
            train_loss, train_acc = train_model(train_loader, model, loss_func, optimizer)  # 训练
            valid_loss, valid_acc, valid_re, valid_pre, valid_f1 = valid_model(valid_loader, model, loss_func)  # 验证

            end_time = time.time()  # 记录一轮结束时间

            epoch_mins, epoch_secs = epoch_time(start_time, end_time)

            if valid_loss < best_valid_loss:
                best_valid_loss = valid_loss
                best_acc, best_pre, best_re, best_f1 = valid_acc,valid_pre, valid_re, valid_f1

                torch.save(model.state_dict(), f"./model_data/VuldetexpTrans_Shffule_fold{fold}.pkl")  # 保存当前网络状态
                # torch.save(model, 'model.pkl')  # 保存整个网络

            print("best model:Val Loss: {:.2} | Acc: {:.2f}% | P: {:.2f}% | R: {:.2f}% | f1: {:.2f}%".format(
                    best_valid_loss, best_acc*100, best_pre*100, best_re*100, best_f1*100))

            print("Epoch: {} | Epoch time: {}m {}s".format(epoch + 1, epoch_mins, epoch_secs))
            print("Train Loss: {:.2} | Train Acc: {:.2f}%".format(train_loss, train_acc*100))
            print("Val Loss: {:.2} | Acc: {:.2f}% | P: {:.2f}% | R: {:.2f}% | f1: {:.2f}%".format(valid_loss, 
                                            valid_acc*100, valid_pre*100, valid_re*100, valid_f1*100))
            
        # write.close()
        test_loss, test_acc = test_model(test_loader, model, loss_func)  # 测试
        print("test_loss: {:.2}".format(test_loss))
        print("test_acc: {:.2f}%".format(test_acc*100))
        results.append(test_acc)
        print("-----------------第{}折训练结束-----------------".format(fold))

    print("-----------------交叉验证结束-----------------")
    for idx,result in enumerate(results,1):
        print(f"Fold-{idx} test-acc: {result*100:.2f}%")
    print("Test Acc: {:.2f}% (+/- {:.2f}%)".format(np.mean(results)*100, np.std(results)*100))


if __name__ == '__main__':
    # ! 修改日志地址
    sys.stdout = Logger(os.path.join("/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/log_data/MSR200_VuldetexpTrans_5folds_shuffle_cv.log"))
    main()
    end_time = time.time()
    print("Total time: {:.4f}s".format(end_time - start_time))



