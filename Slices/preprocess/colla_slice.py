import glob
import shutil
import os
import tqdm
import time

def inter_func(slices_dir):
    funs_slice_dir = glob.glob(slices_dir+'/*')  # 获取所有函数的切片路径

    for slice_dir in tqdm.tqdm(funs_slice_dir): # "./3proxy_3b67dc844789dc0f00e934270c7b349bcb547865"
    # 以函数为单位，删除所有重复的切片，并保存到函数下属的all_slices文件夹

        for fun_slice in os.listdir(slice_dir): # "./3proxy_3b67dc844789dc0f00e934270c7b349bcb547865/0_3proxy_3b67dc844789dc0f00e934270c7b349bcb547865"
            slices_list = []      # 保存该函数产生的所有切片代码
            med_slices_list = []  # 保存代码中间信息
            new_slices_list = []  # 保存去重后的所有切片代码
            topos_list = []       # 保存所有拓扑路径信息

            for dir in os.listdir(slice_dir + '/' + fun_slice): # "./ / /API" pointer API Array Expr
                if dir != 'all_slices':
                    slice_path = os.path.join(slice_dir,fun_slice,dir,'code.txt')  # 切片完整路径
                    with open(slice_path,'r') as f:  # 读取切片信息
                        slices_info = f.read()
                    list = slices_info.strip().split('---------------------------------------')
                    slices_list.append(list)

                    # 收集topo信息
                    topo_path = glob.glob(os.path.join(slice_dir,fun_slice, dir)+'/*') # ./3074457345618259376.npy
                    for topo in topo_path:
                        if topo.split('/')[-1] != 'code.txt':
                            topos_list.append(topo)

            slices_list = [i for slices in slices_list for i in slices]  # 多维数组变为一维数组

            for slice in slices_list: # 删除重复的切片
                slice_ = '\n'.join(slice.strip().split('\n')[1:])  # 删除切片首行信息
                if slice_ == '':
                    continue
                if slice_ not in med_slices_list:
                    med_slices_list.append(slice_)   # 保存无首行信息的切片
                    new_slices_list.append(slice)    # 保存有首行信息的切片
                    
            # 保存去重后的切片代码
            store_dir = slice_dir + '/' + fun_slice + '/all_slices' # 去重后的切片保存地址
            code_store = store_dir + '/code'      # 去重后的切片代码保存地址
            if not os.path.exists(code_store):    # 文件夹不存在，则创建
                os.makedirs(code_store)
            for slice in new_slices_list:
                with open(code_store+'/codes.txt','a+') as f:
                    f.write('\n'+ slice.strip()+'\n')
                    f.write('---------------------------------------')
            
            # 保存去重后的切片拓扑信息
            topo_store = store_dir + '/topo'      # 去重后的切片拓扑信息文件夹
            if not os.path.exists(topo_store):  # 文件夹不存在，则创建
                os.makedirs(topo_store)
            # 将原来四类漏洞关注点的拓扑信息保存到一起
            for slice in new_slices_list: # 收集切片准则编号 
                path_ = os.path.dirname(slice.strip().split('\n')[0].split()[0])  # 切片保存路径
                num = slice.strip().split('\n')[0].split()[-1]  # 切片准则编号
                raw_topo_path = path_ + '/' + num + '.npy'  # 原始拓扑信息保存地址
                new_topo_path = topo_store+ '/' + num + '.npy' # 拓扑信息保存地址
                shutil.copy(raw_topo_path,new_topo_path)


def intra_fun(slices_dir):
    # 删除无漏洞函数和漏洞函数中所有重复的切片，并保存到./dataset/slices/文件夹下
    # ! 注意修改保存切片路径
    store_dir =  '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices'       # 去重后的切片保存地址

    for file in tqdm.tqdm(os.listdir(slices_dir)):

        # 如果是MSR数据集
        if file.split('_')[-1].isdigit():  # 去除函数名后面的数字
            if len(file.split('_')[-1]) == 1:
                no_vul_path = slices_dir + '/' + file + '/0_' + file[:-2] + '/all_slices/code/codes.txt' # 无漏洞函数切片路径
                vul_path = slices_dir + '/' + file + '/1_' + file[:-2] + '/all_slices/code/codes.txt' # 漏洞函数切片路径
            elif len(file.split('_')[-1]) == 2:
                no_vul_path = slices_dir + '/' + file + '/0_' + file[:-3] + '/all_slices/code/codes.txt' # 无漏洞函数切片路径
                vul_path = slices_dir + '/' + file + '/1_' + file[:-3] + '/all_slices/code/codes.txt' # 漏洞函数切片路径
        else:
            no_vul_path = slices_dir + '/' + file + '/0_' + file + '/all_slices/code/codes.txt' # 无漏洞函数切片路径
            vul_path = slices_dir + '/' + file + '/1_' + file + '/all_slices/code/codes.txt' # 漏洞函数切片路径
        
        # # SARD数据集 或 NVD数据集
        # no_vul_path = slices_dir + '/' + file + '/0_' + file + '/all_slices/code/codes.txt' # 无漏洞函数切片路径
        # vul_path = slices_dir + '/' + file + '/1_' + file + '/all_slices/code/codes.txt' # 漏洞函数切片路径

        raw_slices = []  # 收集切片代码
        med_slices = []  # 切片中间信息
        new_slices = []  # 去重后的切片代码

        ## 对切片代码信息进行去重
        if os.path.exists(no_vul_path):  # 无漏洞文件存在，则读取无漏洞切片
            with open(no_vul_path,'r') as f: 
                no_vul_info = f.read()
            no_vul_list = no_vul_info.strip().split('---------------------------------------') # 切割成单个切片
            raw_slices.append(no_vul_list)

        if os.path.exists(vul_path):  # 有漏洞文件存在，则读取有漏洞切片
            with open(vul_path,'r') as f: 
                vul_info = f.read()
            vul_list = vul_info.strip().split('---------------------------------------') # 切割成单个切片
            raw_slices.append(vul_list)

        raw_slices = [i for slices in raw_slices for i in slices]  # 多维数组变为一维数组
        
        # 删除重复的切片
        for slice in raw_slices: 
            slice_ = '\n'.join(slice.strip().split('\n')[1:])  # 删除切片首行信息
            if slice_ == '':
                continue
            if slice_ not in med_slices:
                med_slices.append(slice_)
                new_slices.append(slice)
        
        # 保存去重后的切片代码
        code_store = store_dir + '/' + file + '/code'      # 去重后的切片代码保存地址
        if not os.path.exists(code_store):    # 文件夹不存在，则创建
            os.makedirs(code_store)

            for slice in new_slices:
                with open(code_store+'/codes.txt','a+') as f:
                    f.write('\n'+ slice.strip()+'\n')
                    f.write('---------------------------------------')

        # 保存切片拓扑信息
        topo_store = store_dir + '/' + file + '/topo'      # 去重后的切片代码保存地址
        if not os.path.exists(topo_store):    # 文件夹不存在，则创建
            os.makedirs(topo_store)

            for slice in new_slices:
                slice_info = slice.strip().split('\n')[0].split()[0]  # 切片地址信息
                slice_type = slice_info.split('/')[-3].split('_')[0]  # 切片来源（0 or 1）
                slice_num = slice.strip().split('\n')[0].split()[-1]  # 切片准则编号
                raw_path = os.path.dirname(slice_info) + '/' + slice_num + '.npy'  # 原始切片地址
                new_path = topo_store + '/' + slice_type + '_' + slice_num + '.npy'  # 切片地址
                shutil.copy(raw_path,new_path)

def main():
    start_time = time.time()
    # ! 注意修改切片路径
    slices_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slice_data'    # 保存切片的目录
    print("正在进行函数内去重...")
    inter_func(slices_dir)    # 函数内去重
    print("正在进行函数间去重...")
    intra_fun(slices_dir)  # 函数间去重
    print('finish!')
    end_time = time.time()
    print(f'总共耗时{(end_time - start_time):.4f}s')


if __name__ == '__main__':
    main()