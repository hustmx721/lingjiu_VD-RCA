import os
import torch.nn as nn
import sys
import errno
import shutil
import random
import os.path as osp
import numpy as np
import torch

# from lightning_lite.utilities.seed import seed_everything

from util_main import *
from configs import Config as cfg
from torch_geometric.loader import DataLoader

def mkdir_if_missing(directory):
    if not osp.exists(directory):
        try:
            os.makedirs(directory)
        except OSError as e:
            if e.errno != errno.EEXIST:
                raise

class AverageMeter(object):
    """Computes and stores the average and current value.
       
       Code imported from https://github.com/pytorch/examples/blob/master/imagenet/main.py#L247-L262
    """
    def __init__(self):
        self.reset()

    def reset(self):
        self.val = 0
        self.avg = 0
        self.sum = 0
        self.count = 0

    def update(self, val, n=1):
        self.val = val
        self.sum += val * n
        self.count += n
        self.avg = self.sum / self.count

def save_checkpoint(state, is_best, fpath='checkpoint.pth.tar'):
    mkdir_if_missing(osp.dirname(fpath))
    torch.save(state, fpath)
    if is_best:
        shutil.copy(fpath, osp.join(osp.dirname(fpath), 'best_model.pth.tar'))

# 随机种子初始化,保证相同的种子实验可重复性
def set_seed(myseed: int = 23721):
    # seed_everything(myseed) 
    torch.set_num_threads(1) # num of threads
    random.seed(myseed) # generate random seed
    torch.manual_seed(myseed) # the same seed of pytorch for CPU
    torch.cuda.manual_seed(myseed) # the same seed of pytorch for GPU
    torch.cuda.manual_seed_all(myseed) # if you are using multi-GPU
    np.random.seed(myseed) # numpy also the same seed
    os.environ["PYTHONSEED"] = str(myseed) # back state_dict value to set const hash
    torch.backends.cudnn.enabled = False # forbidden to use unsure algorithm
    torch.backends.cudnn.deterministic = True # use the same conv

def load_data():
    # TODO: 按照数据集的输入, 加载不同数据集
    # ! 注意修改切片数据集的地址

    slice_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices' # 切片保存地址
    train_0_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/train_0_fold1.txt'  # 训练集无漏洞切片地址
    train_1_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/train_1_fold1.txt'
    valid_0_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/valid_0_fold1.txt'
    valid_1_path = f'/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/split_data/MSR200/valid_1_fold1.txt'

    train_0_dataset,train_1_dataset,valid_0_dataset,valid_1_dataset = read_dataset(train_0_path,
                                                                                    train_1_path,
                                                                                    valid_0_path,
                                                                                    valid_1_path)

    # 构建图的专属数据集
    train_list = graph_data(slice_dir,train_0_dataset,train_1_dataset,cfg.node_num)
    valid_list = graph_data(slice_dir,valid_0_dataset,valid_1_dataset,cfg.node_num)

    # 从各个数据集以batch_size为单位提取数据
    train_loader = DataLoader(train_list ,batch_size=cfg.Batch_size,shuffle=True,drop_last=True) 
    valid_loader = DataLoader(valid_list,batch_size=cfg.Batch_size,shuffle=False,drop_last=True)
    test_loader = DataLoader(valid_list,batch_size=1,shuffle=False,drop_last=False) # 测试集不drop方便进行定位
    cfg.train_0_dataset, cfg.train_1_dataset, cfg.valid_0_dataset, cfg.valid_1_dataset = train_0_dataset, train_1_dataset, valid_0_dataset, valid_1_dataset
    
    return train_loader, valid_loader, test_loader

import json
import re

def split_list(lst):
    lst = [line for line in lst if line!="\n"] # 去除空行
    separator = "---------------------------------------\n"
    sub_lists = []
    current_sub_list = []
    # 按指定操作符分割列表
    for item in lst:
        if item == separator:
            sub_lists.append(current_sub_list)
            current_sub_list = []
        else:
            current_sub_list.append(item)
    return sub_lists

def get_src(info):
    """
    溯源式根因定位
    根据漏洞信息, 返回源文件,、正则化后文件、变量替换词典(内容)
    """ 
    # ! 注意info是绝对地址还是相对地址, 此处代码适配绝对地址
    file_path = info.split()[0]
    file_name = file_path.split('/')[-4] # 文件名
    func_name = file_path.split('/')[-3] # 函数名
    print(f"-------------> now processing:{func_name}")
    raw_dir ="/".join(file_path.split('/')[:-5]) + "/raw/" + file_name + "/" + func_name + ".c" # 源代码路径
    norm_dir = "/".join(file_path.split('/')[:-5]) + "/norm/" + file_name + "/" + func_name + ".c" # 规范化后代码路径
    json_dir = "/".join(file_path.split('/')[:-5]) + "/norm/" + file_name + "/" + func_name + ".json" # 变量名、函数名替换词典
    with open(norm_dir, "r", encoding='utf-8') as f, open(json_dir, "r", encoding='utf-8') as j, open(raw_dir, "r", encoding='utf-8') as r:
        norm_file = f.readlines()
        json_file = json.load(j)
        raw_lines = r.readlines()
    return raw_lines, norm_file, json_file

# 溯源文件,生成日志
def get_vul(info,error_line):
    """
    溯源定位, 根据我们找到的切片索引, 对应原来test_list里的slice,
    继而确定切片文件, 确定哪几行有问题, 再具体对应源文件".c",
    再根据变量的替换确定源文件哪几行出问题
    """
    slice_dir, slice_index, slice_label = info.split()
    pattern = r"\((.*?)\)"
    with open(slice_dir, "r", encoding='utf-8') as f:
        lines = f.readlines()
        slice_list = split_list(lines)
        for slice in slice_list:
            # 确保切片序号对应
            slice = [line.strip("\n") for line in slice]
            index = slice[0].split(" ")[-1]
            if index == slice_index:
                clean_slice = slice[1:]
                vul = [clean_slice[idx] for idx in error_line] # 存疑的漏洞行
                vul = [re.findall(pattern, item)[0] for item in vul]
                return vul
            else:
                continue

# 根据漏洞语句定位到norm文件
def get_position(vul:list[str], norm:list[str]):
    assert vul is not None 
    assert norm is not None
    norm = [line.strip("\n") for line in norm]
    error_norm_index = []
    matches = {}
    for vuln_line in vul:
        try:
            match_lines = [norm_line for norm_line in norm if vuln_line in norm_line]
            matches[vuln_line] = match_lines
        except ValueError:
            # raise ValueError("该漏洞语句不存在")
            error_norm_index.append(None)

    matches = {k: v[0] for k, v in matches.items() if len(v)>1} # 如果有类似于"FUNC1"这种容易重复度过高的语句, 则依序只取第一个
    error_norm_index = [norm.index(match) for match in matches.values()]

    print("漏洞语句溯源规范化文件:\n", matches)
    print("漏洞语句溯源规范化文件, 对应位置:", error_norm_index)
    error_norm_index = list(np.unique(error_norm_index))
    
    return error_norm_index
        


def get_line_mapping(raw_lines:list[str], vul_lines:list[str], mapping_file):
    """
    获取规范化命名文件中, 存疑漏洞语句的行号对应的原始raw文件中的行号
    参数:
        raw_lines (str[str]): 原始raw文件
        vul_lines (list[str]): 规范化命名文件
        mapping_file (str): 对应关系JSON文件
    返回:
        dict: 键为规范化文件中存疑漏洞语句的行号,值为对应的原始raw文件的行号列表
    """
    line_mapping = {}

    func_map, var_map = mapping_file.get('func', {}), mapping_file.get('var', {})
    reverse_func_map = {v: k for k, v in func_map.items()}
    reverse_var_map = {v: k for k, v in var_map.items()}

    def reverse_normalization(line):
        for norm, orig in reverse_func_map.items():
            line = re.sub(r'\b' + re.escape(norm) + r'\b', orig, line)
        for norm, orig in reverse_var_map.items():
            line = re.sub(r'\b' + re.escape(norm) + r'\b', orig, line)
        return line

    for line_idx, vul_line in enumerate(vul_lines):
        raw_line_idx = 0
        denormalized_line = reverse_normalization(vul_line)
        while raw_line_idx < len(raw_lines):
            if denormalized_line == raw_lines[raw_line_idx]:
                line_mapping[line_idx] = raw_line_idx
                break
            else:
                raw_line_idx += 1
    return line_mapping
               
  
# 根据图解释算法和节点排序算法, 选出存疑节点, 并返回预测结果和存疑节点位置
def explain(explainer, data):
    explanation = explainer(data.x, data.edge_index)
    # 从explanation中获取数据
    edge_mask = explanation.edge_mask.cpu().numpy()
    prediction = explanation.prediction.cpu().numpy()

    list_edge_mask = edge_mask.tolist()
    sorted_list = sorted(enumerate(list_edge_mask), key=lambda x: x[1], reverse=True)

    # 输出排序后的元素和它们的原始位置
    list_max = []
    for index, (original_pos, value) in enumerate(sorted_list):
        list_max.append(original_pos)
    
    # TODO: 此处可选择重要性前n的边进行定位, 这里默认选择前十
    list_max = list_max[:10] if len(list_max)>= 10 else list_max # 选择重要性前十的边
    error_line, bgn_node, end_node = [], [], []
    for i in range(len(list_max)):
        bgn_node.append(data.edge_index[0,list_max[i]].item())
        end_node.append(data.edge_index[1,list_max[i]].item())
    error_line = list(np.unique(bgn_node+end_node)) 
    return prediction, error_line


