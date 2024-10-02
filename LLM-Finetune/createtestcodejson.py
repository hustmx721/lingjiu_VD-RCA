import os, json, glob, random, torch, time
import numpy as np

base_dir = os.path.dirname(os.path.abspath(__file__))  # 当前文件所在目录 xx/LLM-Finetune/

# 随机种子初始化,保证相同的种子实验可重复性
def set_seed(myseed = 23721):
    torch.set_num_threads(1) # num of threads
    random.seed(myseed) # generate random seed
    torch.manual_seed(myseed) # the same seed of pytorch for CPU
    torch.cuda.manual_seed(myseed) # the same seed of pytorch for GPU
    torch.cuda.manual_seed_all(myseed) # if you are using multi-GPU
    np.random.seed(myseed) # numpy also the same seed
    os.environ["PYTHONSEED"] = str(myseed) # back state_dict value to set const hash
    torch.backends.cudnn.enabled = False # forbidden to use unsure algorithm
    torch.backends.cudnn.deterministic = True # use the same conv



def FullRoot():
    def get_idx(file_name):
        return int(file_name.split('/')[-2])
    def get_tail(file_name):
        return file_name.split('/')[-1].split('.')[0]
    def make_root_instruction(file_name, data):
        array = {}
        idx, tail = get_idx(file_name), get_tail(file_name)
        txt_name = "/".join(file_name.split('/')[:-1] + [f"{tail}.txt"])
        with open(file_name, 'r', encoding='utf-8') as file:
            word_0 = ''
            for line in file:
                word_0 = (word_0+line.strip()+'\n')
        with open(txt_name, 'r', encoding='utf-8') as file:
            word_1 = ''
            for line in file:
                word_1 = (word_1+line.strip()+'\n')
        array['text'] = word_0
        array['category'] = ['NULL']
        array['output'] = word_1
        data.append(array)
    data, savejson = [], []
    # 取全部的根因定位数据集
    setnames = ["linjiu_root", "SARD_LLM_root_old"]
    for setname in setnames:
        files = []
        root = os.path.join(base_dir, f'dataset/{setname}')
        for subdir in os.listdir(root):
            files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
            files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))
        print(f"{setname}: {len(files)}")
        data.append(files)
    print(len(data[1]))
    data[1] = list(filter(lambda x: get_idx(x) in range(1,51), data[1]))
    allrootfiles = data[0] + data[1]
    for idx,file in enumerate(allrootfiles):
        # print(f"---------> now processing file {idx+1}")
        if get_tail(file) == "0":
            continue
        make_root_instruction(file, savejson)
    with open(os.path.join(base_dir, f'data/full_root.json'), 'w', encoding='utf-8') as file:
        json.dump(savejson, file, ensure_ascii=False)
    print(f"full_root.json saved, {len(savejson)} prompts!")


def create_testCode_json():
    set_seed(2024)
    # 记录开始时间
    start_time = time.time()

    base_dir = os.path.dirname(os.path.abspath(__file__)) # 脚本工程文件根目录, xx/LLM-Finetune/
    # ! 请修改你的数据集名称
    setname = "testCode"

    data = []
    # testCode数据集, 真正的测试集
    for i in range(50):
        if i >= 0:  #60
            array = {}
            #print('i',i)
            result, remainder = divmod(i+1+1, 2)
            #print('result, remainder',result, remainder)  # 2 0
            with open(os.path.join(base_dir, f"dataset/{setname}", str(result), str(remainder)+'.c'), 'r') as file:
                #word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
                word_0 = ''
                # 逐行读取并打印内容
                for line in file:
                    # print(word_0+line.strip()+'\n')  # strip()函数用于去除每行末尾的换行符
                    word_0 = (word_0+line.strip()+'\n')
            array['content'] = word_0
            array['filename'] = f"{str(result)}_{str(remainder)}.c"
            data.append(array)
        else:
            pass

    with open(os.path.join(base_dir, "data/testCode.json"), 'w', encoding='utf-8') as json_file:
        json.dump(data, json_file, ensure_ascii=False, indent=4)

    print(f"JSON 文件已生成: {os.path.join(base_dir, 'data/testCode.json')}")


if __name__ == "__main__":
    create_testCode_json()
    # FullRoot()