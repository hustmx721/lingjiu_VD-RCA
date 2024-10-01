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

if __name__ == "__main__":
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