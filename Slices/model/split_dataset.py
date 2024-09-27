from util_main import *
from torch.utils.data import random_split
import time
from torch.utils.data import ConcatDataset
from sklearn.model_selection import StratifiedKFold
# 最先运行这个
# # python split_dataset.py
# # cd /mnt/ssd2/hywu/1detexp/model


def split_dataset(set_0, set_1, sample_ratio:float=0.1, train_ratio:float=0.8):
    """ 
    :param set_0: 包含无漏洞切片信息的列表
    :param set_1: 包含有漏洞切片信息的列表
    :param sample_ratio: 测试集中有漏洞切片的比例
    :param test_ratio: 训练集和测试集比例
    """
    train_0_size = round(len(set_0) * train_ratio)
    test_0_size = round(len(set_0) * (1-train_ratio))
    train_1_size = round(sample_ratio * train_0_size)
    test_1_size = round(sample_ratio * test_0_size)
    train_0_dataset, test_0_dataset_temp = random_split(set_0, [train_0_size, len(set_0)-train_0_size])
    train_1_dataset, test_1_dataset_temp = random_split(set_1, [train_1_size, len(set_1)-train_1_size])
    test_0_dataset, _ = random_split(test_0_dataset_temp, [test_0_size, len(test_0_dataset_temp)-test_0_size])
    test_1_dataset, _ = random_split(test_1_dataset_temp, [test_1_size, len(test_1_dataset_temp)-test_1_size])
    return train_0_dataset, test_0_dataset, train_1_dataset, test_1_dataset

def split_dataset_stratified_kfold(dataset,labels, n_splits=5):
    """
    将数据集分成n_splits折,用于交叉验证,保持类别比例平衡
    :param dataset: 完整数据集
    :param n_splits: 折数
    :return: 包含每折训练集和验证集索引的列表
    """
    skf = StratifiedKFold(n_splits=n_splits, shuffle=True, random_state=42)
    return list(skf.split(dataset,labels))


if __name__ == '__main__':
    start_time = time.time()
    # ! 注意修改切片保存地址
    slice_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices' # 切片保存地址
    slice_0_info,slice_0_label,slice_1_info,slice_1_label = collate_info(slice_dir)  # 汇总代码信息
    # 0类和1类数据集
    data_0_iter = SliceData(slice_0_info,slice_0_label)                  # 相当于导入所有切片及其对应的标签
    data_1_iter = SliceData(slice_1_info,slice_1_label) 
    labels_0 =  [0] * len(data_0_iter) 
    labels_1 =  [1] * len(data_1_iter)
    data_iter = ConcatDataset([data_0_iter, data_1_iter])

    """   # 切分数据集
    train_0_size =  round(len(data_0_iter)*0.8) #round(len(data_0_iter)*0.8)  # 切分无漏洞切片，各个数据集的比例划分
    valid_0_size =  round(len(data_0_iter)*0.2)#round(len(data_0_iter)*0.2)
    train_0_dataset,valid_0_dataset = random_split(data_0_iter,[train_0_size,valid_0_size]) # 切分数据集

    train_1_size = round(len(data_1_iter)*0.8)#round(len(data_1_iter)*0.8)  # 切片有漏洞切片，各个数据集的比例划分
    valid_1_size = round(len(data_1_iter)*0.2)#round(len(data_1_iter)*0.2)
    train_1_dataset,valid_1_dataset = random_split(data_1_iter,[train_1_size,valid_1_size]) # 切分数据集 
    """

    """   # 按照比例切分数据集
    train_0_dataset,valid_0_dataset,train_1_dataset,valid_1_dataset = split_dataset(data_0_iter,data_1_iter,sample_ratio=0.01,train_ratio=0.8) # 切分数据集


    train_0_path = './split_data/train_0_SARD_0.01.txt'
    train_1_path = './split_data/train_1_SARD_0.01.txt'
    valid_0_path = './split_data/valid_0_SARD_0.01.txt'
    valid_1_path = './split_data/valid_1_SARD_0.01.txt'

    with open(train_0_path,'w') as f:
        for info in train_0_dataset:
            f.write(str(info[0])+' '+str(info[1]))
            f.write('\n')
            
    with open(train_1_path,'w') as f:
        for info in train_1_dataset:
            f.write(str(info[0])+' '+str(info[1]))
            f.write('\n')
            
    with open(valid_0_path,'w') as f:
        for info in valid_0_dataset:
            f.write(str(info[0])+' '+str(info[1]))
            f.write('\n')

    with open(valid_1_path,'w') as f:
        for info in valid_1_dataset:
            f.write(str(info[0])+' '+str(info[1]))
            f.write('\n')

    end_time = time.time()  
    print(f'split dataset running time:{(end_time-start_time):.4f}s')
    """

    # 进行5折交叉验证划分
    fold_0 = split_dataset_stratified_kfold(data_0_iter,labels_0,n_splits=5)
    fold_1 = split_dataset_stratified_kfold(data_1_iter,labels_1,n_splits=5)
    fold = zip(fold_0, fold_1)

    for fold, (fold_0_split, fold_1_split) in enumerate(fold, 1):
        train_0_idx, valid_0_idx = fold_0_split
        train_1_idx, valid_1_idx = fold_1_split
        
        train_0_dataset = [data_0_iter[i] for i in train_0_idx]
        valid_0_dataset = [data_0_iter[i] for i in valid_0_idx]
        train_1_dataset = [data_1_iter[i] for i in train_1_idx]
        valid_1_dataset = [data_1_iter[i] for i in valid_1_idx]
        
        # ! 注意修改交叉验证的路径
        train_0_path = f'./split_data/MSR200/train_0_fold{fold}.txt'
        train_1_path = f'./split_data/MSR200/train_1_fold{fold}.txt'
        valid_0_path = f'./split_data/MSR200/valid_0_fold{fold}.txt'
        valid_1_path = f'./split_data/MSR200/valid_1_fold{fold}.txt'      

        with open(train_0_path,'w') as f:
            for info in train_0_dataset:
                f.write(str(info[0])+' '+str(info[1]))
                f.write('\n')
                
        with open(train_1_path,'w') as f:
            for info in train_1_dataset:
                f.write(str(info[0])+' '+str(info[1]))
                f.write('\n')
                
        with open(valid_0_path,'w') as f:
            for info in valid_0_dataset:
                f.write(str(info[0])+' '+str(info[1]))
                f.write('\n')

        with open(valid_1_path,'w') as f:
            for info in valid_1_dataset:
                f.write(str(info[0])+' '+str(info[1]))
                f.write('\n')
        print(f'Fold-{fold} Done!\nThe vuln vs novuln ratio in TrainSet/validSet:')
        print(f'TrainSet 0/1 ratio: {len(train_0_dataset)}/{len(train_1_dataset)}')
        print(f'validSet 0/1 ratio: {len(valid_0_dataset)}/{len(valid_1_dataset)}')

    end_time = time.time()  
    print(f'Split dataset running time: {(end_time-start_time):.4f}s')