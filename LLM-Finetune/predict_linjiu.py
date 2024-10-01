import json
import pandas as pd
import torch
from modelscope import snapshot_download, AutoTokenizer
from transformers import (
    AutoModelForCausalLM,
    TrainingArguments,
    Trainer,
    DataCollatorForSeq2Seq,
)
import os
import numpy as np
import random
import warnings

# 忽略所有警告
warnings.filterwarnings("ignore")

base_dir = os.path.dirname(os.path.abspath(__file__)) # xx/LLM-Finetune/
os.environ["CUDA_VISIBLE_DEVICES"] = "0" # 指定显卡型号
seed = 1 # 设置随机种子

# python predict_linjiu.py

print(f"Seed:{seed} GPU:{os.environ['CUDA_VISIBLE_DEVICES']}")

def set_random_seed(seed: int) -> None:
	random.seed(seed)
	os.environ['PYTHONHASHSEED'] = str(seed)
	np.random.seed(seed)
	torch.manual_seed(seed)
	torch.cuda.manual_seed_all(seed)
	torch.backends.cudnn.benchmark = False
	torch.backends.cudnn.deterministic = True


def predict(messages, model, tokenizer):
    device = "cuda"
    text = tokenizer.apply_chat_template(
        messages, tokenize=False, add_generation_prompt=True
    )
    model_inputs = tokenizer([text], return_tensors="pt").to(device)

    generated_ids = model.generate(model_inputs.input_ids, max_new_tokens=512)
    generated_ids = [
        output_ids[len(input_ids) :]
        for input_ids, output_ids in zip(model_inputs.input_ids, generated_ids)
    ]

    response = tokenizer.batch_decode(generated_ids, skip_special_tokens=True)[0]

    return response

def dataset_jsonl_transfer(origin_path, new_path):
    """
    将原始数据集转换为大模型微调所需数据格式的新数据集
    """
    messages = []

    # 读取旧的JSONL文件
    with open(origin_path, "r") as file:
        for line in file:
            # 解析每一行的json数据
            data = json.loads(line)
            context = data["text"]
            catagory = data["category"]
            label = data["output"]
            message = {
                "instruction": "你是一个检测代码内存泄露领域的专家，你会接收到一段C语言脚本和几个潜在的分类选项(0代表无漏洞，1代表有漏洞)，请输出C语言脚本的正确类型",
                "input": f"文本:{context},类型选型:{catagory}",
                "output": label,
            }
            messages.append(message)

    # 保存重构后的JSONL文件
    with open(new_path, "w", encoding="utf-8") as file:
        for message in messages:
            file.write(json.dumps(message, ensure_ascii=False) + "\n")


def process_func(example):
    """
    将数据集进行预处理
    """
    MAX_LENGTH = 384
    input_ids, attention_mask, labels = [], [], []
    instruction = tokenizer(
        f"<|im_start|>system\n你是一个检测代码内存泄露领域的专家，你会接收到一段C语言脚本和几个潜在的分类选项(0代表无漏洞，1代表有漏洞)，请输出C语言脚本的正确类型<|im_end|>\n<|im_start|>user\n{example['input']}<|im_end|>\n<|im_start|>assistant\n",
        add_special_tokens=False,
    )
    response = tokenizer(f"{example['output']}", add_special_tokens=False)
    input_ids = (
        instruction["input_ids"] + response["input_ids"] + [tokenizer.pad_token_id]
    )
    attention_mask = instruction["attention_mask"] + response["attention_mask"] + [1]
    labels = (
        [-100] * len(instruction["input_ids"])
        + response["input_ids"]
        + [tokenizer.pad_token_id]
    )
    if len(input_ids) > MAX_LENGTH:  # 做一个截断
        input_ids = input_ids[:MAX_LENGTH]
        attention_mask = attention_mask[:MAX_LENGTH]
        labels = labels[:MAX_LENGTH]
    return {"input_ids": input_ids, "attention_mask": attention_mask, "labels": labels}

set_random_seed(seed)

import time

# 记录开始时间
start_time = time.time()


test_dataset_path = os.path.join(base_dir, "data/test_linjiu.jsonl")
test_jsonl_new_path = os.path.join(base_dir, "data/new_test_linjiu.jsonl")


if not os.path.exists(test_jsonl_new_path):
    dataset_jsonl_transfer(test_dataset_path, test_jsonl_new_path)

# 加载原下载路径的tokenizer
tokenizer = AutoTokenizer.from_pretrained(os.path.join(base_dir, f"output/linjiu/Seed{seed}"), use_fast=False, trust_remote_code=True)
model = AutoModelForCausalLM.from_pretrained(os.path.join(base_dir, f"output/linjiu/Seed{seed}"), device_map="auto", torch_dtype=torch.bfloat16)


# 用测试集的前10条，测试模型
test_df = pd.read_json(test_jsonl_new_path, lines=True)[:]
keys = test_df.columns.tolist()

test_text = []
for index, row in test_df.iterrows():
    instruction = row["instruction"]
    input_value = row["input"]
    output = row["output"]

    messages = [
        {"role": "system", "content": f"{instruction}"},
        {"role": "user", "content": f"{input_value}"},
    ]

    response = predict(messages, model, tokenizer)
    messages.append({"role": "assistant", "content": f"{response}"})
    test_text.append(messages[2]['content'])

num = 0
for i in range(len(test_text)):
    if test_text[i] == str(test_df['output'].values.tolist()[i]):
        num+= 1
    else:
        pass

print('ACC',num/len(test_text))

data = []
for i in range(len(test_text)):
    temp = {}
    temp['output'] = test_text[i]
    temp['label'] = str(test_df['output'].values.tolist()[i])
    data.append(temp)

with open(os.path.join(base_dir, f'result/detect_predict/result_seed{seed}.json'), 'w', encoding='utf-8') as f:
    json.dump(data, f, ensure_ascii=False, indent=4)





# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"漏洞检测--脚本运行时间: {elapsed_time:.2f} 秒")



""" 
seed0: 0.88 14.72s / 13.45s / 13.76s  Avg:14.30s
seed1: 0.94 14.03s / 13.76s / 14.55s  Avg:14.11s
seed2: 0.88 14.32s / 14.42s / 14.15s  Avg:14.30s
seed3: 0.94 14.42s / 14.80s / 15.17s  Avg:14.80s
seed4: 0.90 15.19s / 15.02s / 15.08s  Avg:15.10s

平均用时(单卡): 14.522s
"""



