import json,os
# CUDA_VISIBLE_DEVICES=2 python create_data_test.py
# 示例数据，通常你会有自己的数据生成或处理逻辑
# cd /mnt/data/train/LLM-Finetune/

# context = data["text"]
# catagory = data["category"]
# label = data["output"]

import time

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
        array['text'] = word_0
        array['category'] = ['0','1']
        array['output'] = str(remainder)
        data.append(array)
    else:
        pass


# 打开一个文件用于写入，'w' 表示写模式，如果文件存在则覆盖
with open(os.path.join(base_dir, 'data/test_linjiu.jsonl'), 'w', encoding='utf-8') as file:
    for item in data:
        # 将每个字典对象转换为JSON字符串，并写入文件
        json.dump(item, file, ensure_ascii=False)
        # 每个JSON对象后面跟一个换行符
        file.write('\n')

print("测试集漏洞检测文件已成功写入。")

# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"脚本运行时间: {elapsed_time:.2f} 秒")