import pickle
import glob
import re
import os
import difflib
import tqdm
import time

def search_diff(file_dir,pkl_path):
    modified_lines = {} # 键为文件名，值为被修改的代码行

    for file in tqdm.tqdm(os.listdir(file_dir)): # file_dir = ./dataset/norm
        start_point = 0
        line_list = []  # 保存差异性语句

        path = file_dir + '/' + file # each patched file pair (actually still filefolder)
        num = file.split('_')[-1]

        #  MSR数据集
        if num.isdigit():  # 尾部是数字，重复的文件夹名，"_num"
            if len(num) == 1:
                novul_path = path + '/' + '0_' + file[:-2] + '.c'  # 无漏洞函数地址
                vul_path = path + '/' + '1_' + file[:-2] + '.c' # 有漏洞函数地址
            elif len(num) == 2:
                novul_path = path + '/' + '0_' + file[:-3] + '.c'  # 无漏洞函数地址
                vul_path = path + '/' + '1_' + file[:-3] + '.c' # 有漏洞函数地址
            elif len(num) == 3:
                novul_path =  path + '/0_' + file[:-4] + '.c'  # 无漏洞函数路径
                vul_path =  path + '/1_' + file[:-4] + '.c'  # 有漏洞函数路径 
        else:
            novul_path = path + '/' + '0_' + file + '.c'  # 无漏洞函数地址
            vul_path = path + '/' + '1_' + file + '.c' # 有漏洞函数地址
        
        # # 如果是SARD数据集或NVD数据集, 重复文件夹名里的文件也会带上重复编号"_num
        # novul_path = path + '/' + '0_' + file + '.c'  # 无漏洞函数地址
        # vul_path = path + '/' + '1_' + file + '.c' # 有漏洞函数地址

        with open(novul_path,'r') as f: # 读取没漏洞的文件
            no_vul_info = f.read()
        with open(vul_path,'r') as f: # 读取有漏洞的文件
            vul_info = f.read()

        # 对比原函数和被修复后的函数之间的差异性
        diff = list(difflib.unified_diff(vul_info.split('\n'), no_vul_info.split('\n')))  
        for i,line in enumerate(diff):
            if line.startswith("@@"):
                start_point=i
                break

        for code_line in diff[start_point:]:  # 记录原函数中被删除的代码
            if code_line.startswith("-") :
                code = code_line.strip('-').lstrip()      # 清除语句前空格等特殊字符
                code = code.rstrip(';')   # 清除语句后分号
                line_list.append(code)
    
        modified_lines[file] = line_list

    with open(pkl_path, 'wb') as f:  # 保存有漏洞函数和无漏洞函数之间的差异
        pickle.dump(modified_lines, f)


def label(slice_dir,pkl_path): # slice_dir = ./dataset/slices
    func_slices = glob.glob(slice_dir + '/*')

    with open(pkl_path,'rb') as f:
        info = pickle.load(f)

    for dir in tqdm.tqdm(func_slices):
        slice_path = dir + '/code/codes.txt'       # 每个函数的切片保存路径
        slice_label= dir + '/code/codes_label.txt'  # 打完标签后切片保存路径
        diff_str = ' '.join(info[dir.split('/')[-1]])  # 差异性语句

        with open(slice_path,'r') as f:  # 读取切片文件
            slices_info = f.read()
        slices_list = slices_info.strip().split('---------------------------------------')  # 切割成单个切片

        for slice in slices_list:
            if slice == '':
                continue
            type = slice.strip().split('\n')[0].split(' ')[0].split('/')[-3].split('_')[0]  # 切片来源（有漏洞函数 or 无漏洞函数）
            
            if type == '0':  # 对于来源于无漏洞函数的切片，直接标记为0
                with open(slice_label,'a+') as f:
                    f.write('\n'+slice.strip()+'\n')
                    f.write('0'+'\n'+'\n')
                    f.write('---------------------------------------')

            if type == '1':  # 对于来源为有漏洞函数的切片，若切片中包含被修改的代码，则为1；否则为0
                code_label = {} # 键为切片信息，值为切片标记

                flag = 0  # 用于标志切片中是否包含差异性语句
                for line in slice.strip().split('\n')[1:]:
                    raw_code_1 = re.sub(r'\[ label \=  \"\(','',line)  # 还原源代码
                    raw_code = re.sub(r'\)\"\]','',raw_code_1) 

                    if diff_str.find(raw_code) != -1:  # 切片语句包含被删除的语句，默认该切片为有漏洞切片
                        code_label[slice.strip().split('\n')[0]] = '1'
                        flag = 1
                        break

                if flag == 0:
                    code_label[slice.strip().split('\n')[0]] = '0'
                
                with open(slice_label,'a+') as f:  # 保存打完标签的切片
                    f.write('\n'+slice.strip()+'\n')
                    f.write(code_label[slice.strip().split('\n')[0]]+'\n'+'\n')
                    f.write('---------------------------------------')
            

def main():
    start_time = time.time()
    # ! 修改数据集地址
    slice_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/slices'  # 切片文件的保存路径
    file_dir = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/norm' # 正则化后的代码保存路径
    pkl_path = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/modified_lines.pkl'

    print("search diff...")
    search_diff(file_dir,pkl_path)  # 寻找漏洞函数和非漏洞函数的不同点，并保存
    print("label...")
    label(slice_dir,pkl_path)  # 给切片打标签
    print("finish!")
    end_time = time.time()
    print(f'总共耗时{(end_time - start_time):.4f}s')


if __name__ == '__main__':
    main()
