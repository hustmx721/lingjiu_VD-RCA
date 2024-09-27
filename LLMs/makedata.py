import os, json, glob, random, torch
import numpy as np
from operator import itemgetter
import argparse
base_dir = os.path.dirname(os.path.abspath(__file__))


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


def get_idx(file_name):
    return int(file_name.split('/')[-2])


def get_tail(file_name):
    return file_name.split('/')[-1].split('.')[0]


def make_instruction(file_name, data):
    array = {}
    with open(file_name, 'r') as file:
        word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
        # 逐行读取并打印内容
        for line in file:
            # print(word_0+line.strip()+'\n')  # strip()函数用于去除每行末尾的换行符
            word_0 = (word_0+line.strip()+'\n')
    array['instruction'] = word_0
    array['input'] = ''
    array['output'] = str(get_tail(file_name))
    data.append(array)
    

def make_root_instruction(file_name, data):
    array = {}
    idx, tail = get_idx(file_name), get_tail(file_name)
    txt_name = "/".join(file_name.split('/')[:-1] + [f"{tail}.txt"])
    with open(file_name, 'r', encoding='utf-8') as file:
        word_0 = '下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...。”:\n'
        # 逐行读取并打印内容
        for line in file:
            word_0 = (word_0+line.strip()+'\n')
    with open(txt_name, 'r', encoding='utf-8') as file:
        word_1 = ''
        # 逐行读取并打印内容
        for line in file:
            word_1 = (word_1+line.strip()+'\n')
    array['instruction'] = word_0
    array['input'] = ''
    array['output'] = word_1
    data.append(array)


# "linjiu_root", "SARD_LLM_root", "leak_mem"
def MakeDetectionJson(setname="linjiu_root", n_splits=3):
    files = []
    root = os.path.join(base_dir, f'dataset/{setname}')
    for subdir in os.listdir(root):
        files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
        files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))

    random.shuffle(files)
    split_idx = np.split(np.arange(len(files)), n_splits)

    for fold in range(n_splits):
        data1 ,data2 = [], []
        test_files = itemgetter(*split_idx[fold])(files)
        train_files = list(filter(lambda x: x not in test_files, files))
        cnt_0, cnt_1 = 0, 0

        for f1 in train_files:
            # print(f"idx: {get_idx(f1)}; type: {get_tail(f1)}")
            cnt_0 +=1 if get_tail(f1) == "0" else 0
            make_instruction(f1, data1)
        for f2 in test_files:
            # print(f"idx: {get_idx(f2)}; type: {get_tail(f2)}")
            cnt_1 +=1 if get_tail(f2) == "1" else 0
            make_instruction(f2, data2)
        
        with open(os.path.join(base_dir, f'data/{setname}_fold{fold}_train.json'), 'w', encoding='utf-8') as file:
            json.dump(data1, file, ensure_ascii=False)
        with open(os.path.join(base_dir, f'data/{setname}_fold{fold}_test.json'), 'w', encoding='utf-8') as file:
            json.dump(data2, file, ensure_ascii=False)
        
        print(f"fold{fold}: train(0/1)-->{cnt_0}:{len(train_files)-cnt_0}; test(0/1)-->{len(test_files)-cnt_1}:{cnt_1}")        
            

# "linjiu_root", "SARD_LLM_root"
def MakeRootJson(setname="linjiu_root", n_splits=3):
    files = []
    root = os.path.join(base_dir, f'dataset/{setname}')
    for subdir in os.listdir(root):
        files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
        files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))

    random.shuffle(files)
    split_idx = np.split(np.arange(len(files)), n_splits)

    for fold in range(n_splits):
        data1 ,data2 = [], []
        test_files = itemgetter(*split_idx[fold])(files)
        train_files = list(filter(lambda x: x not in test_files, files))
        cnt_0, cnt_1 = 0, 0

        for f1 in train_files:
            # print(f"idx: {get_idx(f1)}; type: {get_tail(f1)}")
            cnt_0 +=1 if get_tail(f1) == "0" else 0
            make_root_instruction(f1, data1)
        for f2 in test_files:
            # print(f"idx: {get_idx(f2)}; type: {get_tail(f2)}")
            cnt_1 +=1 if get_tail(f2) == "1" else 0
            make_root_instruction(f2, data2)
        
        with open(os.path.join(base_dir, f'data/Root_{setname}_fold{fold}_train.json'), 'w', encoding='utf-8') as file:
            json.dump(data1, file, ensure_ascii=False)
        with open(os.path.join(base_dir, f'data/Root_{setname}_fold{fold}_test.json'), 'w', encoding='utf-8') as file:
            json.dump(data2, file, ensure_ascii=False)
        
        print(f"fold{fold}: train(0/1)-->{cnt_0}:{len(train_files)-cnt_0}; test(0/1)-->{len(test_files)-cnt_1}:{cnt_1}")



# "linjiu_root", "SARD_LLM_root", "leak_mem"
def MixupDetection(n_splits=3):
    data = []
    # 取lingjiu两折和其余两个数据集合并做训练, lingjiu剩下一折做测试
    setnames = ["linjiu_root", "SARD_LLM_root", "leak_mem"]
    for setname in setnames:
        files = []
        root = os.path.join(base_dir, f'dataset/{setname}')
        for subdir in os.listdir(root):
            files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
            files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))
        print(f"{setname}: {len(files)}")
        data.append(files)

    random.shuffle(data[0])
    split_idx = np.split(np.arange(len(data[0])), n_splits)
    test_files = itemgetter(*split_idx[-1])(data[0])
    train_files = list(filter(lambda x: x not in test_files, data[0])) + data[1] + data[2]

    cnt_0, cnt_1 = 0, 0
    data1, data2 = [], []

    for f1 in train_files:
        # print(f"idx: {get_idx(f1)}; type: {get_tail(f1)}")
        cnt_0 +=1 if get_tail(f1) == "0" else 0
        make_instruction(f1, data1)
    for f2 in test_files:
        # print(f"idx: {get_idx(f2)}; type: {get_tail(f2)}")
        cnt_1 +=1 if get_tail(f2) == "1" else 0
        make_instruction(f2, data2)
    
    with open(os.path.join(base_dir, f'data/mixup_train.json'), 'w', encoding='utf-8') as file:
        json.dump(data1, file, ensure_ascii=False)
    with open(os.path.join(base_dir, f'data/mixup_test.json'), 'w', encoding='utf-8') as file:
        json.dump(data2, file, ensure_ascii=False)
    
    print(f"train(0/1)-->{cnt_0}:{len(train_files)-cnt_0}; test(0/1)-->{len(test_files)-cnt_1}:{cnt_1}") 



# "linjiu_root", "SARD_LLM_root"
def FullRoot():
    data, savejson = [], []
    # 取全部的根因定位数据集
    setnames = ["linjiu_root", "SARD_LLM_root"]
    for setname in setnames:
        files = []
        root = os.path.join(base_dir, f'dataset/{setname}')
        for subdir in os.listdir(root):
            files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
            files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))
        print(f"{setname}: {len(files)}")
        data.append(files)

    print(len(data[1]))
    # ! 注意, 只取漏洞样本作根因定位训练
    # TODO: SARD_LLM_root 数据集只有1-50含有根因定位txt文件, 后续需要扩充
    data[1] = list(filter(lambda x: get_idx(x) in range(1,51), data[1]))
    allrootfiles = data[0] + data[1]

    for idx,file in enumerate(allrootfiles):
        print(f"---------> now processing file {idx+1}")
        if get_tail(file) == "0":
            continue
        make_root_instruction(file, savejson)

    with open(os.path.join(base_dir, f'data/full_root.json'), 'w', encoding='utf-8') as file:
        json.dump(savejson, file, ensure_ascii=False)

    print(f"full_root.json saved, {len(savejson)} prompts!")


# 使用SARD和leak_mem数据集训练模型, 仅使用lingjiu数据集做测试
def FullDetect(test_mode = "linjiu_root"):
    savejson, files = [], []
    root = os.path.join(base_dir, f'dataset/{test_mode}')
    for subdir in os.listdir(root):
        files.extend(glob.glob(os.path.join(root, subdir, '*.c')))
        files.extend(glob.glob(os.path.join(root, subdir, '*.cpp')))
    print(f"{test_mode}: {len(files)}")

    for idx,file in enumerate(files):
        print(f"---------> now processing file {idx+1}")
        make_instruction(file, savejson)
    
    with open(os.path.join(base_dir, f'data/detect_{test_mode}.json'), 'w', encoding='utf-8') as file:
        json.dump(savejson, file, ensure_ascii=False)

    print(f"detect_{test_mode}.json saved, {len(savejson)} prompts!")


def get_args():
    parser = argparse.ArgumentParser()
    parser.add_argument('-C', '--code', type=str, default=None,
    help='Code for Vulnerability Detection and Root Cause Analysis')
    parser.add_argument('-F', '--file', type=str, default=None,
    help='File(s) path for Vulnerability Detection and Root Cause Analysis')
    parser.add_argument('-M', '--model', type=str, default="Qwen2-7B",
    help='Model to select for Vulnerability Detection and Root Cause Analysis')
    parser.add_argument('-D', '--dataset', type=str, default="lingjiu",
    help='Pretrained Dataset')
    args = parser.parse_args()
    # args.code = args.code.replace("\\n", "\n")
    return args



def testing(args:argparse.ArgumentParser):
    # 内置函数, 测试时将输入代码转化为固定的格式
    def DetectOne(code:str):
        array = {}
        word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
        # for line in code:
        #     word_0 = (word_0+line.strip()+'\n')
        array['instruction'] = word_0 + code
        array['input'] = ''
        array['output'] = "None"
        return array
    def RootOne(code:str):
        array = {}
        word_0 = '下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...。”:\n'
        # for line in code:
        #     word_0 = (word_0+line.strip()+'\n')
        array['instruction'] = word_0 + code
        array['input'] = ''
        array['output'] = "None"
        return array
    def DetectBatch(files:list[dict]):
        data = []
        for idx, file in enumerate(files):
            # print(f"---------> now processing file {idx+1}")
            array = {}
            word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
            word_0 = word_0 + file["content"]
            array['instruction'] = word_0 
            array['input'] = ''
            array['output'] = "None"
            data.append(array)
        # print("漏洞检测prompts: ", data)
        return data
    def RootBatch(files:list[dict]):
        data = []
        for idx, file in enumerate(files):
            # print(f"---------> now processing file {idx+1}")
            array = {}
            word_0 = '下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...。”:\n'
            word_0 = word_0 + file["content"]
            array['instruction'] = word_0
            array['input'] = ''
            array['output'] = "None"
            data.append(array)
        # print("根因定位prompts: ", data)
        return data

    print("输入代码的路径------>",args.code)
    print("上传的文件路径------>",args.file)

    if args.code is not None and args.file is None:
        with open(args.code, 'r', encoding='utf-8') as f:
            code = f.read()
        print("输入代码------>",code)
        data1, data2 = DetectOne(code), RootOne(code)
        with open(os.path.join(base_dir, f'data/test_detect.json'), 'w', encoding='utf-8') as f1:
            json.dump([data1], f1, ensure_ascii=False)
        with open(os.path.join(base_dir, f'data/test_root.json'), 'w', encoding='utf-8') as f2:
            json.dump([data2], f2, ensure_ascii=False)

    elif args.file is not None and args.code is None:
        with open(args.file, 'r', encoding='utf-8') as f:
            files = json.loads(f.read())
        print("文件内容------>",files)
        data1, data2 = DetectBatch(files), RootBatch(files)
        with open(os.path.join(base_dir, f'data/test_detect.json'), 'w', encoding='utf-8') as f1:
            json.dump(data1, f1, ensure_ascii=False)
        with open(os.path.join(base_dir, f'data/test_root.json'), 'w', encoding='utf-8') as f2:
            json.dump(data2, f2, ensure_ascii=False)
    else:
        print("Error: Please input code or file(s)!")



# "linjiu_root", "SARD_LLM_root", "leak_mem"
# "linjiu_root", "SARD_LLM_root"
if __name__ == '__main__':
    # ! 在线测试时, 保证这三行代码正常运行
    set_seed(2024)
    args = get_args()
    testing(args)

    # FullDetect()
    # FullRoot()
    # MakeDetectionJson(setname="leak_mem",n_splits=3)    
    # MakeRootJson(setname="linjiu_root",n_splits=3)    
    # MixupDetection(n_splits=3)


# CUDA_VISIBLE_DEVICES=8 llamafactory-cli train examples/train_lora/detect_lora_sft.yaml
# CUDA_VISIBLE_DEVICES=8 llamafactory-cli train examples/train_lora/detect_lora_predict.yaml
# CUDA_VISIBLE_DEVICES=9 llamafactory-cli train examples/train_lora/root_lora_sft.yaml
# CUDA_VISIBLE_DEVICES=9 llamafactory-cli train examples/train_lora/root_lora_predict.yaml