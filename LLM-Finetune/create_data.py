import json,os
# CUDA_VISIBLE_DEVICES=2 python create_data.py
# 示例数据，通常你会有自己的数据生成或处理逻辑
# cd /mnt/data/train/LLM-Finetune/

# context = data["text"]
# catagory = data["category"]
# label = data["output"]import time
#

import time
# 记录开始时间
start_time = time.time()


base_dir = os.path.dirname(os.path.abspath(__file__)) # 脚本工程文件根目录, xx/LLM-Finetune/


#SARD数据集
# ! 请修改你的数据集名称
setname = "SARD_LLM_root_old"
data = []
label = 0
for i in range(100):
    if i >10000:
        pass
    else:
        array = {}
        #print('i',i)
        result, remainder = divmod(i+1+1, 2)
        #print('result, remainder',result, remainder)  # 2 0
        folder_path = os.path.join(base_dir, f"dataset/{setname}", str(result))
        filenames = os.listdir(folder_path)
        for filename in filenames:
            ext = os.path.splitext(filename)[1]
            if ext == ".c":
                label = 0
            elif ext == ".cpp":
                label = 1
            else:
                pass
        #print('filenames',filenames)
        if label == 1:
            with open(os.path.join(base_dir, f"dataset/{setname}", str(result), str(remainder)+'.cpp'), 'r') as file:
                #word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
                word_0 = ''
                # 逐行读取并打印内容
                for line in file:
                    # print(word_0+line.strip()+'\n')  # strip()函数用于去除每行末尾的换行符
                    word_0 = (word_0+line.strip()+'\n')
                    word_0 = word_0.replace('bad', 'norm')
                    word_0 = word_0.replace('Bad', 'norm')
                    word_0 = word_0.replace('BAD', 'norm')
                    word_0 = word_0.replace('goodG2B', 'norm')
                    word_0 = word_0.replace('goodG2b', 'norm')
                    word_0 = word_0.replace('good', 'norm')
                    word_0 = word_0.replace('Good', 'norm')
                    word_0 = word_0.replace('GOOD', 'norm')
            array['text'] = word_0
            array['category'] = ['0','1']
            array['output'] = str(remainder)
        else:
            with open(os.path.join(base_dir, f"dataset/{setname}", str(result), str(remainder)+'.c'), 'r') as file:
                #word_0 = '请判断下列C语言代码是否含有内存泄露，不需要分析原因，如果有输出1，如果没有输出0:\n'
                word_0 = ''
                # 逐行读取并打印内容
                for line in file:
                    # print(word_0+line.strip()+'\n')  # strip()函数用于去除每行末尾的换行符
                    word_0 = (word_0+line.strip()+'\n')
                    word_0 = word_0.replace('bad', 'norm')
                    word_0 = word_0.replace('Bad', 'norm')
                    word_0 = word_0.replace('BAD', 'norm')
                    word_0 = word_0.replace('goodG2B', 'norm')
                    word_0 = word_0.replace('goodG2b', 'norm')
                    word_0 = word_0.replace('good', 'norm')
                    word_0 = word_0.replace('Good', 'norm')
                    word_0 = word_0.replace('GOOD', 'norm')
                # print(word_0)
            array['text'] = word_0
            array['category'] = ['0','1']
            array['output'] = str(remainder)
        data.append(array)


# linjiu数据集
# ! 请修改你的数据集名称
setname = "linjiu_root"
for i in range(96):
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
        array['text'] = word_0
        array['category'] = ['0','1']
        array['output'] = str(remainder)
        data.append(array)
    else:
        pass

#leak_mem数据集
# ! 请修改你的数据集名称
setname = "leak_mem_old"
for i in range(132):  #132  236
    if i <= 100000:  #60
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
                word_0 = word_0.replace('no', '')
                word_0 = word_0.replace('leak', '')
        array['text'] = word_0
        array['category'] = ['0','1']
        array['output'] = str(remainder)
        data.append(array)
    else:
        pass



#add数据集
# ! 请修改你的数据集名称
setname = "add"
for i in range(10):
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
        array['text'] = word_0
        array['category'] = ''
        array['output'] = str(remainder)
        data.append(array)
    else:
        pass


# 整合全部训练数据集
# 打开一个文件用于写入，'w' 表示写模式，如果文件存在则覆盖
with open(os.path.join(base_dir, 'data/train_linjiu.jsonl'), 'w', encoding='utf-8') as file:
    for item in data:
        # 将每个字典对象转换为JSON字符串，并写入文件
        json.dump(item, file, ensure_ascii=False)
        # 每个JSON对象后面跟一个换行符
        file.write('\n')


#print(len(data))
print("训练集漏洞检测文件已成功写入。")

# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"脚本运行时间: {elapsed_time:.2f} 秒")
