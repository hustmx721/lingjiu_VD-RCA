import glob
import os, sys
import time
import argparse  # 命令行解析模块，在命令行中向程序传入参数并让程序执行
from multiprocessing import Pool  # 进程池
from functools import partial
from tqdm import tqdm

base_dir = os.path.dirname(os.path.abspath(__file__))  # 获取当前文件所在的路径

def parse_options():
    parse = argparse.ArgumentParser(description='Extracting pdgs.') # 创建ArgumentParse对象，该对象包含将命令行输入解析成Python数据的全部功能
    # ! 注意修改正则化文件路径
    parse.add_argument('-i','--input',help='the dir path of input',type=str,default='/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/norm')  # 向ArgumentParse对象中添加参数信息
    parse.add_argument('-t','--type',help='The type of procedures:parse or export',type=str,default='export')
    parse.add_argument('-r','--repr',help='The type of representation:pdg or cpg',type=str,default='pdg')
    args = parse.parse_args()  # 解析参数，获取命令行中输入的参数

    return args

def get_all(paths): # 获取所有c文件
    med_res = []
    for path in paths:
        if path.split('/')[-1].split('.')[-1] != 'pkl':
            med_res.append(glob.glob(path+'/*'))
    res = [i for arr in med_res for i in arr]  # 二维数组转一维
    
    return res


def joern_parse(file,joern_path,out_bin_dir):
    record_txt = os.path.join(out_bin_dir,"parse.txt")  # txt文件记录已处理的函数

    if not os.path.exists(out_bin_dir):
        os.mkdir(out_bin_dir)
    if not os.path.exists(record_txt):
        # os.mknod(record_txt)
        os.system("touch "+record_txt)

    with open(record_txt,'r') as f:  # 读取已处理的函数
        rec_list = f.read()
    file_name_1  = file.split('/')[-2]  # 文件夹名
    if not os.path.exists(out_bin_dir+'/'+file_name_1):
        os.mkdir(out_bin_dir+'/'+file_name_1)
    file_name_2  = file.split('/')[-1]  # 函数名
    file_name = file_name_1 + '/' + file_name_2

    if file_name in rec_list.split('\n'):
        return
    
    # 设置系统变量，调用命令行执行joern解析
    os.chdir(joern_path)  # 改变当前目录到指定路径下
    out_path = os.path.join(out_bin_dir, file_name.split('.')[0] +'.bin')  # bin文件的最终路径
    os.environ['file'] = str(file)  # 设置环境变量，需要处理的c文件
    os.environ['out'] = str(out_path)  # 保存bin文件的文件名
    os.system('sh joern-parse --out $out $file')  # 执行joern命令

    with open(record_txt,'a+') as f: # 往记录本中写入已处理的c函数
        f.write(file_name+'\n')
    os.chdir(base_dir)

def joern_export(bin_file,joern_path,out_dot_dir,repr):
    if bin_file.split('/')[-1] != 'parse.txt':

        dot_path = os.path.join(out_dot_dir, bin_file.split('/')[-2],bin_file.split('/')[-1].split('.')[0])  # 保存dot文件的文件夹
        record_txt = os.path.join(out_dot_dir,"export.txt")  # txt文件记录已处理的函数

        if not os.path.exists(out_dot_dir):
            os.mkdir(out_dot_dir)

        if not os.path.exists(record_txt):  # 创建保存dot文件的文件夹,创建txt文件
            # os.mknod(record_txt)
            os.system("touch "+record_txt)

        with open(record_txt,'r') as f:  # 读取已处理的函数
            rec_list = f.read()

        if not os.path.exists(out_dot_dir+'/'+ bin_file.split('/')[-2]):
            os.mkdir(out_dot_dir+'/'+ bin_file.split('/')[-2])

        file_name  = bin_file.split('/')[-2] + '/' + bin_file.split('/')[-1]  # 判断函数是否已处理
        if file_name in rec_list.split('\n'):
            return
        else:
            os.chdir(joern_path)  # 改变当前目录到指定路径下
            os.environ['bin_file'] = str(bin_file)  # 需要处理的bin文件
            os.environ['dot_path'] = str(dot_path)  # dot文件存放的文件夹
            if repr == 'pdg':
                os.system('sh joern-export --repr pdg --out $dot_path $bin_file')  # 执行joern命令
            with open(record_txt,'a+') as f:  # 往记录本中写入已处理的bin文件
                f.writelines(file_name+'\n')
            os.chdir(base_dir)


def main():
    # ! 注意Joern安装路径和输出路径
    joern_path = '/data2/tyl/LingJiu_Vuln/tools/joern/joern-cli'  # joern安装路径
    out_bin_path = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/bin_data'  # 所有bin文件输出路径
    out_dot_path = '/data2/tyl/LingJiu_Vuln/_Project/src/Slices/dataset/dot_data'  # 所有dot文件输出路径
    
    # 获取命令行输入的参数
    args = parse_options()  # 创建ArgumentParse对象，获取命令行参数
    input = args.input  # 原始C文件地址
    type = args.type  # 解析C文件 or导出dot文件
    repr = args.repr  # 生成c文件的pdg or cpg

    pool_num = 12
    pool = Pool(pool_num) # 创建进程池

    if type == 'parse':
        time_start = time.time()
        print("正在解析c文件...")
        file_dir = glob.glob(input+'/*')  # 获取所有C文件所在的文件夹
        pool.map(partial(joern_parse,joern_path=joern_path,out_bin_dir=out_bin_path),tqdm(get_all(file_dir)))
        pool.close() # 关闭进程池，使其不再接受新的请求
        pool.join()  # 等待进程池中的所有子进程执行完毕，再执行接下来的代码
        time_end = time.time()
        sum_time = (time_end - time_start)/60
        # print("c文件解析完毕! 共费时：{:.3f} min".format(sum_time))
        print("c文件解析完毕! 共费时：{:.4f}s".format(time_end - time_start))
 
    else:
        time_start_1 = time.time()
        print("正在生成dot文件...")
        bin_dir = glob.glob(out_bin_path+'/*')  # 获取所有bin文件所在的文件夹
        pool.map(partial(joern_export,joern_path=joern_path,out_dot_dir=out_dot_path,repr=repr),tqdm(get_all(bin_dir)))
        pool.close() # 关闭进程池，使其不再接受新的请求
        pool.join()  # 等待进程池中的所有子进程执行完毕，再执行接下来的代码
        time_end_1 = time.time()
        sum_time_1 = (time_end_1 - time_start_1)/60
        # print("dot文件生成完毕! 共费时：{:.3f} min".format(sum_time_1))
        print("c文件解析完毕! 共费时：{:.4f}s".format(time_end_1 - time_start_1))



if __name__ == '__main__':
    main()