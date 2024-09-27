import os
import re
import pickle
import numpy as np
import networkx as nx

def get_real_code(G):  # 从joern生成的dot文件中提取代码及对应的编号
    codes_dict = nx.get_node_attributes(G,'label')  # 获取每个结点的编号和对应的代码
    nums_code = dict() # 创建一个字典，用来存放结点编号和经处理后的代码
    for num, all_code in codes_dict.items():  # 处理原始代码
        if all_code.split(',')[0] == '\"(UNKNOWN':
            raw_code = all_code[all_code.index(",") + 1:-2].replace('\n','').replace('\t','')  # 去除joern对该结点的statement语句
            code = raw_code[:int(len(raw_code)/2)]  # 获取结点源代码
        else:
            code = all_code[all_code.index(",") + 1:-2].replace('\n','').replace('\t','')  # 获取结点源代码
        
        nums_code[num] = code
    
    return nums_code

def get_all_sensitiveAPI(G):  # 获取代码中，危险函数所在的结点信息
    codes_dict = nx.get_node_attributes(G,'label')  # 获取每个结点的编号和对应的代码

    with open("./sensitive_func.pkl", "rb") as f: # 读取文件中保存的所有危险函数
        sensi_func = pickle.load(f)
    new_sensi_func = []  # 保存处理后的危险函数
    for func in sensi_func:
        new_sensi_func.append(func.replace('_','/_').replace('.','/.').replace('*','/*'))  # 替换掉危险函数中的特殊字符

    node_list={}  # 用于保存调用危险函数的结点
    for func in new_sensi_func:  # 找出调用危险函数的结点
        for key, value in codes_dict.items():
            type = value[2:value.index(",")]  # 获取节点类型
            code = value[value.index(",") + 1:-2].strip()  # 获取结点源代码
            if type != 'UNKNOWN':
                if re.findall(func,code): # 查找代码行中是否包含危险函数
                    node_list[key] = code  # 保存危险结点编号及代码，并替换因joern产生的特殊字符
        
    return node_list

def get_all_array(G):
    codes_dict = nx.get_node_attributes(G,'label')  # 获取每个结点的编号和对应的代码
    node_list={}  # 用于保存包含数组的结点
    
    for key, value in codes_dict.items():  # 处理原始代码
        type = value[2:value.index(",")]  # 获取节点类型
        code = value[value.index(",") + 1:-2].strip()  # 获取结点源代码
        if type == '<operator>.assignment':
            if code.find("[") != -1:   # 找出包含数组的结点
                node_list[key] = code
    
    return node_list

def get_all_pointer(G):
    codes_dict = nx.get_node_attributes(G,'label')  # 获取每个结点的编号和对应的代码
    node_list={}  # 用于保存包含指针的结点

    for key, value in codes_dict.items():  # 处理原始代码
        type = value[2:value.index(",")]  # 获取节点类型
        code = value[value.index(",") + 1:-2].strip()  # 获取结点源代码
        if type == '<operator>.assignment':
            if code.find("*VAR") != -1:   # 找出包含数组的结点
                node_list[key] = code
        
        # if type == 'PARAM':
        #     if code.find("*") != -1:   # 找出包含数组的结点
        #         node_list[key] = code

    return node_list

def get_all_expre(G):
    codes_dict = nx.get_node_attributes(G,'label')  # 获取每个结点的编号和对应的代码
    node_list={}  # 用于保存包含表达式的结点

    for key,value in codes_dict.items():
        results = None
        type = value[2:value.index(",")]  # 获取节点类型
        code = value[value.index(",") + 1:-2].strip()  # 获取结点源代码
        
        if type != 'UNKNOWN':
            if code.find("=") != -1:
                new_code = code.split('=')[-1].strip() # 获取等号右边的内容
                pattern = re.compile("((_|[A-Za-z]|[0-9]+)\w*(\s)*(\+|\-|\*|\/)(\s)*(_|[A-Za-z]|[0-9]+)\w*)")
                results = re.search(pattern, new_code)  # 等号右边内容是否有表达式
                if results != None:
                    node_list[key] = code

    return node_list

def gene_store_slice(G, interest,nums_codes,code_path,node_number):  # 对切片准则进行前向切片和后向切片，返回切片得到的结点编号

    for_nodes = nx.dfs_successors(G,source=interest) # 前向切片
    G_reverse = nx.reverse(G)  # 反转箭头
    back_nodes = nx.dfs_successors(G_reverse,source=interest) # 后向切片

    predecessors = [i for node in for_nodes.values() for i in node]  # 前向切片结点,二维数组变为一维数组（列表推导式）
    predecessors.append(interest)  # 补充切片准则
    successors = [i for node in back_nodes.values() for i in node]   # 后向切片结点

    slice_nodes = sorted(list(set(predecessors + successors)))  # 前向切片结点+后向切片结点,去重并排序
    
    num_list = list(nums_codes.keys())  # dot文件中的结点编号
    sorted_nodes = sorted(slice_nodes, key=num_list.index)  # 按照dot文件中的编号进行排序

    slice_info=[]  # 用于保存切片的代码信息
    for node in sorted_nodes:
        slice_info.append(nums_codes[node]) # 根据结点编号，找到对应的代码
    
    # 将属于一个函数、一个类型的切片写入同一个文件 
    if not os.path.exists(code_path):  # 文件不存在则创建并写入
        os.makedirs(os.path.dirname(code_path)) # 创建文件夹 
    with open(code_path, 'a+') as f:  # 保存结点属性
        f.write('\n'+code_path+' '+interest+'\n')  # 第一行为切片信息
        for i in slice_info:
            f.write("[ label =  \"("+i+")\"]"+'\n')
        f.write('\n'+'---------------------------------------')


    sub_G= G.subgraph(sorted_nodes) # 通过切片结点构建子图
    adj = nx.adjacency_matrix(sub_G,nodelist=sorted_nodes).todense()  # 获取邻接矩阵,此处同等看待DDG和CDG

    # 统一拓扑结构的维度
    if len(adj) < node_number:  # 结点太少，补零
        new_topo = np.pad(adj,((0,node_number-len(adj)),((0,node_number-len(adj)))))
    elif len(adj) > node_number:   # 结点太多，截断
        new_topo = adj[:node_number,:node_number]
    else:
        new_topo = adj

    # 保存拓扑结构信息

    matrix_path = os.path.join(os.path.dirname(code_path),interest+'.npy') # 拓扑结构信息保存路径
    np.save(matrix_path, new_topo)  # 保存拓扑结构信息

