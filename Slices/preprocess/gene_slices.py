import os
import glob
import tqdm
import time
import networkx as nx
from slices_utils import *
from multiprocessing import Pool  # 进程池
from functools import partial

# # python gene_slices.py
# # cd /mnt/ssd2/hywu/vuldetexp/preprocess

def slice_options(dot_dir,slice_path,node_num):
    # ! 注意修改数据集的地址
    if dot_dir != '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/dot_data/export.txt':
        print('os.listdir(dot_dir)',os.listdir(dot_dir))
        for dir in os.listdir(dot_dir):
            dot_file = os.path.join(dot_dir, dir, '1-pdg.dot')  # 函数主要dot文件
            print('dir',dir)
            
            if os.path.exists(dot_file):  # 跳过joern无法解析的c函数

                G = nx.DiGraph(nx.nx_pydot.read_dot(dot_file))  # 读取dot文件，并构建有向图  nx_agraph  nx_pydot
                print('G',G)
                nums_codes = get_real_code(G)  # 返回处理后的结点及其对应的编号
                # print('nums_codes',nums_codes)
                api_nodes = get_all_sensitiveAPI(G)  # 返回含有危险函数的结点及其对应的编号
                # print('api_nodes', api_nodes)
                array_nodes = get_all_array(G)  # 返回与数组有关的结点及其对应编号
                # print('array_nodes', array_nodes)
                point_nodes = get_all_pointer(G)  # 返回与指针有关的结点及其对应的编号
                # print('point_nodes', point_nodes)
                expre_nodes = get_all_expre(G)  # 返回与表达式有关的结点及其对应的编号
                # print('expre_nodes', expre_nodes)
                # print('1')
                # 对与API函数调用有关的结点进行切片
                code_path = os.path.join(slice_path, dot_dir.split('/')[-1], dir, 'API','code.txt')     # 代码信息保存路径
                for interest in api_nodes.keys():  # 对每一个危险结点进行切片,且保存切片信息
                    gene_store_slice(G,interest,nums_codes,code_path,node_num)
                    # print('2')
                # 对与数组使用有关的结点进行切片
                code_path = os.path.join(slice_path, dot_dir.split('/')[-1], dir, 'array','code.txt')     # 代码信息保存路径
                for interest in array_nodes.keys():  # 对每一个危险结点进行切片,且保存切片信息
                    gene_store_slice(G,interest,nums_codes,code_path,node_num)
                    # print('3')
                # 对与指针使用有关的结点进行切片
                code_path = os.path.join(slice_path, dot_dir.split('/')[-1], dir, 'pointer','code.txt')     # 代码信息保存路径
                for interest in point_nodes.keys():  # 对每一个危险结点进行切片,且保存切片信息
                    gene_store_slice(G,interest,nums_codes,code_path,node_num)
                    # print('4')
                # 对与表达式有关的结点进行切片
                code_path = os.path.join(slice_path, dot_dir.split('/')[-1], dir, 'expr','code.txt')     # 代码信息保存路径
                for interest in expre_nodes.keys():  # 对每一个危险结点进行切片,且保存切片信息
                    gene_store_slice(G,interest,nums_codes,code_path,node_num)
                    # print('5')


def main():
    # ! 注意修改数据集的地址
    dot_path = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/dot_data'    # dot文件路径
    slice_path = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slice_data'   # 切片路径

    pool_num = 12  # 进程数
    node_num = 200
    pool = Pool(pool_num) # 创建进程池

    print("正在生成切片...")
    time_start = time.time()

    dot_dir = glob.glob(dot_path+'/*')  # 获取dot文件所在的文件夹
    pool.map(partial(slice_options,slice_path=slice_path,node_num=node_num),dot_dir)
    pool.close() # 关闭进程池，使其不再接受新的请求
    pool.join()  # 等待进程池中的所有子进程执行完毕，再执行接下来的代码

    time_end = time.time()
    sum_time = (time_end - time_start)/60
    
    # print("共费时：{:.3f} min".format(sum_time))
    print("共费时：{:.4f}s".format(sum_time*60))

    
if __name__ == '__main__':
    main()
