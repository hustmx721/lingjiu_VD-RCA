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
seed = 3 # 设置随机种子
# cd
# python predict_linjiu_root.py

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

    attention_mask = model_inputs.attention_mask

    generated_ids = model.generate(model_inputs.input_ids, max_new_tokens=512, attention_mask=attention_mask, pad_token_id=tokenizer.eos_token_id)
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
                "instruction": "下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...",
                "input": f"文本:{context}",
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
        f"<|im_start|>system\n下列C语言代码含有内存泄露，告诉我在第几行，是什么类型的问题，并给出一个0-1之间的风险值，采用如下格式回复：“这段C语言代码存在内存泄露的问题。问题出现在...。内存泄露类型属于“...”。风险值为...<|im_end|>\n<|im_start|>user\n{example['input']}<|im_end|>\n<|im_start|>assistant\n",
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
test_jsonl_new_path = os.path.join(base_dir, "data/new_test_linjiu_root.jsonl")

if not os.path.exists(test_jsonl_new_path):
    dataset_jsonl_transfer(test_dataset_path, test_jsonl_new_path)


# 加载原下载路径的tokenizer
tokenizer = AutoTokenizer.from_pretrained(os.path.join(base_dir, f"output/linjiu_root/Seed{seed}"), use_fast=False, trust_remote_code=True)
model = AutoModelForCausalLM.from_pretrained(os.path.join(base_dir, f"output/linjiu_root/Seed{seed}"), device_map="auto", torch_dtype=torch.bfloat16)

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
   
   
data = []
for i in range(len(test_text)):
    temp = {}
    temp['output'] = test_text[i]
    temp['label'] = str(test_df['output'].values.tolist()[i])
    data.append(temp)

with open(os.path.join(base_dir, f'result/root_predict/result_root_seed{seed}.json'), 'w', encoding='utf-8') as f:
    json.dump(data, f, ensure_ascii=False, indent=4)


# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"根因定位--脚本运行时间: {elapsed_time:.2f} 秒")


""" 
qwen2.5-coder-7b-instruct:
seed0: 308.23s
seed1: 289.70s
seed2: 333.41s
seed3: 289.45s
seed4: 283.36s
平均用时(单卡): 300.83s

Qwen2-7B
seed0: 165.46s
seed1: 158.50s
seed2: 155.47s
seed3: 159.28s
seed4: 147.15s
平均用时(单卡): 157.172s
"""