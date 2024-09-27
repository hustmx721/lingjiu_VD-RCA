import json
# CUDA_VISIBLE_DEVICES=2 python create_data.py
# 示例数据，通常你会有自己的数据生成或处理逻辑
# cd /mnt/data/train/LLM-Finetune/

# context = data["text"]
# catagory = data["category"]
# label = data["output"]

data = []


with open('linjiu.json', 'r', encoding='utf-8') as file:
    data_p1 = json.load(file)
    for i in range(len(data_p1)):
        temp  = {}
        temp['text'] = data_p1[i]['instruction']
        temp['category'] = ['0','1']
        temp['output'] = data_p1[i]['output']
        data.append(temp)


with open('SARD.json', 'r', encoding='utf-8') as file:
    data_p1 = json.load(file)
    for i in range(len(data_p1)):
        temp  = {}
        temp['text'] = data_p1[i]['instruction']
        temp['category'] = ['0','1']
        temp['output'] = data_p1[i]['output']
        data.append(temp)

with open('leak_mem.json', 'r', encoding='utf-8') as file:
    data_p1 = json.load(file)
    for i in range(len(data_p1)):
        temp  = {}
        temp['text'] = data_p1[i]['instruction']
        temp['category'] = ['0','1']
        temp['output'] = data_p1[i]['output']
        data.append(temp)

with open('add.json', 'r', encoding='utf-8') as file:
    data_p1 = json.load(file)
    for i in range(len(data_p1)):
        temp  = {}
        temp['text'] = data_p1[i]['instruction']
        temp['category'] = ['0','1']
        temp['output'] = data_p1[i]['output']
        data.append(temp)


# 打开一个文件用于写入，'w' 表示写模式，如果文件存在则覆盖
with open('train_linjiu.jsonl', 'w', encoding='utf-8') as file:
    for item in data:
        # 将每个字典对象转换为JSON字符串，并写入文件
        json.dump(item, file, ensure_ascii=False)
        # 每个JSON对象后面跟一个换行符
        file.write('\n')


print(len(data))
print("JSONL 文件已成功写入。")


data = []


with open('testCode.json', 'r', encoding='utf-8') as file:
    data_p1 = json.load(file)
    for i in range(len(data_p1)):
        temp  = {}
        temp['text'] = data_p1[i]['instruction']
        temp['category'] = ['0','1']
        temp['output'] = data_p1[i]['output']
        data.append(temp)


# 打开一个文件用于写入，'w' 表示写模式，如果文件存在则覆盖
with open('test_linjiu.jsonl', 'w', encoding='utf-8') as file:
    for item in data:
        # 将每个字典对象转换为JSON字符串，并写入文件
        json.dump(item, file, ensure_ascii=False)
        # 每个JSON对象后面跟一个换行符
        file.write('\n')