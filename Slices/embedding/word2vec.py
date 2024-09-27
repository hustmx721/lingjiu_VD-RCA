# 以每一行代码为单位，对切片代码进行向量化
import os
import re
import time
import tqdm
import numpy as np
import torch
import glob
import torch.nn as nn
from gensim.models import Word2Vec

import sys
base_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(base_dir)

# # python word2vec.py
# # cd /mnt/ssd2/hywu/vuldetexp/embedding

def tokenize_code_line(line):  # 切分token
    # Sets for operators
    operators3 = {'<<=', '>>='}
    operators2 = {
        '->', '++', '--', '!~', '<<', '>>', '<=', '>=', '==', '!=', '&&', '||',
        '+=', '-=', '*=', '/=', '%=', '&=', '^=', '|='
    }
    operators1 = {
        '(', ')', '[', ']', '.', '+', '-', '*', '&', '/', '%', '<', '>', '^', '|',
        '=', ',', '?', ':', ';', '{', '}', '!', '~'
    }

    tmp, w = [], []
    i = 0
    if type(i) == None:
        return []
    while i < len(line):
        # Ignore spaces and combine previously collected chars to form words
        if line[i] == ' ':
            tmp.append(''.join(w).strip())
            tmp.append(line[i].strip())
            w = []
            i += 1
        # Check operators and append to final list
        elif line[i:i + 3] in operators3:
            tmp.append(''.join(w).strip())
            tmp.append(line[i:i + 3].strip())
            w = []
            i += 3
        elif line[i:i + 2] in operators2:
            tmp.append(''.join(w).strip())
            tmp.append(line[i:i + 2].strip())
            w = []
            i += 2
        elif line[i] in operators1:
            tmp.append(''.join(w).strip())
            tmp.append(line[i].strip())
            w = []
            i += 1
        # Character appended to word list
        else:
            w.append(line[i])
            i += 1  
    if (len(w) != 0):
        tmp.append(''.join(w).strip())
        w = []

    # Filter out irrelevant strings
    tmp = list(filter(lambda c: (c != '' and c != ' '), tmp))
    return tmp

class IterCorpus():
    def __init__(self,slice_dir):
        self.slice_dir = slice_dir
    
    def __iter__(self):
        for dir in os.listdir(self.slice_dir):
            slice_file = os.path.join(self.slice_dir,dir,'code/codes.txt')  # 切片路径
            
            with open(slice_file,'r') as f: # 读取切片文件
                info = f.read()
            slices_list = info.strip().split('---------------------------------------') # 切割

            for slice in slices_list:
                if slice == '':
                    continue
                for line in slice.strip().split('\n')[1:]:
                    raw_code_1 = re.sub(r'\[ label \=  \"\(','',line)  # 还原源代码
                    raw_code = re.sub(r'\)\"\]','',raw_code_1) 
        
                    tokens = tokenize_code_line(raw_code)  # 分词

                    yield tokens


def gene_node_matrix(model, token_dim,node_num,slice_dir): # 以结点为单位生成切片向量，返回所有切片的向量

    for dir in tqdm.tqdm(os.listdir(slice_dir)):
        file_num = glob.glob(slice_dir+'/'+dir+'/code/*') 
        if len(file_num) == 2:
            slice_file = os.path.join(slice_dir,dir,'code/codes.txt')  # 切片具体位置
            
            with open(slice_file,'r') as f: # 读取切片文件
                info = f.read()
            slices_list = info.strip().split('---------------------------------------') # 切割

            for slice in slices_list:
                if slice == '':
                    continue
                
                slice_num = slice.strip().split('\n')[0].split()[-1]  # 获取切片准则的编号
                type = slice.strip().split('\n')[0].split()[0].split('/')[-3].split('_')[0] # 切片来源函数的类型（有漏洞：1 or 无漏洞：0）
                matrix_slice = [] # 该矩阵保存切片向量，矩阵中每一个元素都是一个结点
                for slice_node in slice.strip().split('\n')[1:]:
                    matrix_node = [] # 一行向量代表一个token

                    raw_code_1 = re.sub(r'\[ label \=  \"\(','',slice_node)  # 还原源代码
                    raw_code = re.sub(r'\)\"\]','',raw_code_1)
                    if raw_code.strip() == '':
                        continue

                    tokens = tokenize_code_line(raw_code.strip())  # 分词
                    for token in tokens:  # 获取前30个token的向量
                        matrix_node.append(model.wv[token])

                    node_feature = np.sum(matrix_node,axis=0)  # 对token的向量取平均得到句子（结点）向量
                    matrix_slice.append(node_feature)  # 收集结点向量，得到整个切片的向量

                    if len(matrix_slice) == node_num:       # 保证结点的个数少于200个
                        break

                if len(matrix_slice) < node_num:  # 结点少于200个，补零
                    slice_feature = matrix_slice + [np.zeros(token_dim,dtype=float).tolist()]*(node_num-len(matrix_slice))
                else:
                    slice_feature = matrix_slice

                # 对每一个向量化后的切片，单独保存
                save_path = os.path.dirname(slice_file)+'/'+type+'_'+slice_num+'.npy'  # 向量化后的切片保存路径
                np.save(save_path,slice_feature)
        

def main():
    # ! 注意修改切片保存路径和word2vec模型保存路径
    slice_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices'  # 切片保存路径
    model_path = './word2vec_MSR200_48.model'                 # word2vec模型保存路径

    token_dim = 100 # token的维度
    node_num = 200 # 每个切片最大结点数

    time_start = time.time()
    print("training word2vec model....")
    model = Word2Vec(sentences=IterCorpus(slice_dir),vector_size=token_dim,alpha=0.01,window=5,min_count=0,
                     sample=0.001,seed=1,workers=1,min_alpha=0.0001,sg=1,hs=0,negative=10) # 训练词向量,以每一行为单位，语料库为一个二维数组
    model.save(model_path)  # 保存模型
    # model = Word2Vec.load(model_path)  # 导入模型
    time_end = time.time()
    sum_time = (time_end - time_start)/60

    # print("模型训练完成！共花费时间：{} min".format(sum_time))
    print("模型训练完成！共花费时间：{:.4f}s".format(sum_time*60))

    print("generating slice vector...")

    gene_node_matrix(model, token_dim,node_num,slice_dir) # 以结点为单位生成切片向量，并保存
    print("切片向量化完成！共花费时间：{:.4f}s".format(time.time()-time_start))



if __name__ == '__main__':
    main()








