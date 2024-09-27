import argparse
import re
# from langchain.document_loaders import TextLoader
from langchain_community.document_loaders import TextLoader
import os
import requests
import json

# cd /mnt/data/train/LLaMA-Factory/scripts/train_data_generation/
# nohup bash -c "CUDA_VISIBLE_DEVICES=7 python llamafactory_qa.py" > data.log 2>&1 &

# 定义加载器字典，以支持多种文件格式
loaders = {
    '.txt': TextLoader,
    # '.pdf': PDFLoader,
    # '.docx': DocxLoader,
}

def load_and_split_document(file_path):
    # 获取文件扩展名
    file_extension = os.path.splitext(file_path)[-1].lower()
    # 选择相应的加载器
    loader_class = loaders.get(file_extension)
    if not loader_class:
        raise ValueError(f"Unsupported file format: {file_extension}")

    # 使用选定的加载器加载文档
    loader = loader_class(file_path)
    documents = loader.load()

    # 正则表达式断句
    text = documents[0].page_content
    # 使用正则表达式匹配中文句号、问号、感叹号等句尾标点符号进行断句
    sentences = re.split(r'(?<=[。！？])\s*', text)

    return sentences

def chat(prompt):
    url = "http://117.68.126.94:7787/v1/chat/completions"
    headers = {
        "Content-Type": "application/json",
        "Authorization": "Bearer YOUR_API_KEY"
    }

    # prompt = "hi"
    # 设置请求的负载
    payload = {
        "stream": False,
        "model": "/mnt/data/models/qwen/Qwen2-72B-Instruct-GPTQ-Int4/",
        "messages": [
            {"role": "system", "content": [{"type": "text", "text": "你是一个大模型训练专家"}]},
            {"role": "user", "content": [{"type": "text", "text": prompt}]}
        ]
    }

    # 发送POST请求
    response = requests.post(url, headers=headers, data=json.dumps(payload))

    # # 解析响应并打印内容
    # response_json = response.json()

    # 解析JSON响应
    if response.status_code == 200:
        response_data = response.json()
        # 打印整个返回结果
        # print("Full Response:")
        # print(response_data)

        # 提取并打印聊天助手的内容
        content = response_data['choices'][0]['message']['content']
        print("\nAssistant's Response Content:")
        print(content)
        return content
    else:
        print(f"Error: {response.status_code}")
        print(response.json())
        return ""

def build_train_dataset(sentence,count):
    train_datas = []
    print("=======================================================")
    print(f"构造句子: {sentence.strip()} 训练集")
    # prompt = f"{sentence},现在要对上面这句话进行训练，请帮忙生成20个问答对，以帮助大模型训练这句话,如果有这句话中有数字，要着重于对于数字准确性的训练"

    prompt = f'现在需要进行大模型训练，主要目的是对文章内容可以进行问答，并要保证回答的准确性，尤其是在数字方面的准确性，请帮忙针对"{sentence}"这句话构建{count}条训练集，请务必确保训练条数要符合要求，训练集的格式为: {{"instruction": "question", "input": "保持空", "output": "answer"}} 以文本返回即可,但要符合格式,不要多加任何的其它注释,每条一行，也不要加行号'
    # print(prompt)
    try:
        answer = chat(prompt)
        if answer == '':
            return []
        lines = answer.splitlines()
        # print("===",len(lines))
        for line in lines:
            if len(line.strip()) == 0:
                continue
            # print(line)
            try:
                train_datas.append(json.loads(line))
            except Exception as e:
                print("+++")
                print(e)
    except Exception as e:
        print("===")
        print(e)

    return train_datas


parser = argparse.ArgumentParser(description='generate train data.')

parser.add_argument(
    '-i', '--input_file',
    nargs='?',
    default='_test.txt',
    type=str,
    help='The input file (default: test.txt)'
)
parser.add_argument(
    '-o', '--output_file',
    nargs='?',
    default=None,
    type=str,
    help='The output file (default: {input_file_name}_output.json)'
)

parser.add_argument(
    '-c', '--example_count',
    nargs='?',
    default=150,
    type=int,
    help='The example count'
)
args = parser.parse_args()
input_file = args.input_file
output_file = args.output_file
example_count = args.example_count
if output_file is None:
    output_file = input_file.replace('.txt', '_output.json')

print("input file:", input_file)
print("output file:", output_file)
print("example_count:", example_count)


sentences = load_and_split_document(input_file)
# print(sentences)


train_datas = []
for idx, sentence in enumerate(sentences):
    if len(sentence.strip()) == 0:
        continue
    # print(sentence)
    _train_datas = []
    while(len(_train_datas)< example_count):
        _train_datas.extend(build_train_dataset(sentence, 100))
        print("generated example count: ",len(_train_datas))
    # _train_datas
    _train_datas = _train_datas[0:example_count]
    train_datas.extend(_train_datas)
    

# .encode('utf-8')
with open(output_file,encoding='utf-8',mode='w') as file:
    file.write(json.dumps(train_datas,ensure_ascii=False))

print("finished all")
