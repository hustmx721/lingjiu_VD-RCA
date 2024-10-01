import json,os
# CUDA_VISIBLE_DEVICES=2 python create_data_root.py
# 示例数据，通常你会有自己的数据生成或处理逻辑
# cd /mnt/data/train/LLM-Finetune/

# context = data["text"]
# catagory = data["category"]
# label = data["output"]
base_dir = os.path.dirname(os.path.abspath(__file__)) # 脚本工程文件根目录, xx/LLM-Finetune/

# ! 请修改你的数据集名称
setname = "linjiu_root"
data = []

# linjiu专用
for i in range(96):
    #print('i',i)
    if i >=0 :  # 60
        result, remainder = divmod(i+1+1, 2)
        if remainder == 0:
            pass
        else:
            array = {}
            #print('result, remainder',result, remainder)  # 2 0
            with open(os.path.join(base_dir, f"dataset/{setname}", str(result), str(remainder)+'.c'), 'r') as file:
                #word_0 = '下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...。”:\n'
                word_0 = ''
                # 逐行读取并打印内容
                for line in file:
                     word_0 = (word_0+line.strip()+'\n')
            with open(os.path.join(base_dir, f"dataset/{setname}", str(result), str(remainder)+'.txt'), 'r') as file:
                 word_1 = ''
                 # 逐行读取并打印内容
                 for line in file:
                     word_1 = (word_1+line.strip()+'\n')
            array['text'] = word_0
            array['category'] = ['NULL']
            array['output'] = word_1
            data.append(array)
    else:
        pass

# 打开一个文件用于写入，'w' 表示写模式，如果文件存在则覆盖
with open(os.path.join(base_dir, f'data/train_{setname}.jsonl'), 'w', encoding='utf-8') as file:
    for item in data:
        # 将每个字典对象转换为JSON字符串，并写入文件
        json.dump(item, file, ensure_ascii=False)
        # 每个JSON对象后面跟一个换行符
        file.write('\n')


print(len(data))
print("训练集根因定位文件已成功写入。")