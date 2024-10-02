import json
import pandas as pd
import torch
from datasets import Dataset
from modelscope import snapshot_download, AutoTokenizer
from peft import LoraConfig, TaskType, get_peft_model, PeftModel
from transformers import (
    AutoModelForCausalLM,
    TrainingArguments,
    Trainer,
    DataCollatorForSeq2Seq,
)
import os
import numpy as np
import random

base_dir = os.path.dirname(os.path.abspath(__file__)) # xx/LLM-Finetune/
os.environ["CUDA_VISIBLE_DEVICES"] = "4" # 指定显卡型号
seed = 4 # 设置随机种子
# python train_linjiu.py

print(f"Seed:{seed} GPU:{os.environ['CUDA_VISIBLE_DEVICES']}")

def set_random_seed(seed: int) -> None:
	random.seed(seed)
	os.environ['PYTHONHASHSEED'] = str(seed)
	np.random.seed(seed)
	torch.manual_seed(seed)
	torch.cuda.manual_seed_all(seed)
	torch.backends.cudnn.benchmark = False
	torch.backends.cudnn.deterministic = True

set_random_seed(seed)


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

# Transformers加载模型权重
tokenizer = AutoTokenizer.from_pretrained(
    os.path.join(base_dir, "PretrainModels/qwen2.5-coder-7b-instruct/"), 
    use_fast=False, trust_remote_code=True, local_files_only=True
)
model = AutoModelForCausalLM.from_pretrained(
    os.path.join(base_dir, "PretrainModels/qwen2.5-coder-7b-instruct/"), 
    device_map="auto", torch_dtype=torch.bfloat16,local_files_only=True
)

model.enable_input_require_grads()  # 开启梯度检查点时，要执行该方法

# 加载、处理数据集和测试集
train_dataset_path = os.path.join(base_dir, "data", "train_linjiu.jsonl")
test_dataset_path = os.path.join(base_dir, "data", "test_linjiu.jsonl")

train_jsonl_new_path = os.path.join(base_dir, "data", "new_train_linjiu.jsonl")
test_jsonl_new_path = os.path.join(base_dir, "data", "new_test_linjiu.jsonl")

if not os.path.exists(train_jsonl_new_path):
    dataset_jsonl_transfer(train_dataset_path, train_jsonl_new_path)

import time

# 记录开始时间
start_time = time.time()

if not os.path.exists(test_jsonl_new_path):
    dataset_jsonl_transfer(test_dataset_path, test_jsonl_new_path)

# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"脚本运行时间: {elapsed_time:.2f} 秒")

#之前安全
#
# # 得到训练集
train_df = pd.read_json(train_jsonl_new_path, lines=True)
print('train_df.len',len(train_df))
train_ds = Dataset.from_pandas(train_df)
train_dataset = train_ds.map(process_func, remove_columns=train_ds.column_names)
#
config = LoraConfig(
    task_type=TaskType.CAUSAL_LM,
    target_modules=[
        "q_proj",
        "k_proj",
        "v_proj",
        "o_proj",
        "gate_proj",
        "up_proj",
        "down_proj",
    ],
    inference_mode=False,  # 训练模式
    r=8,  # Lora 秩
    lora_alpha=32,  # Lora alaph，具体作用参见 Lora 原理
    lora_dropout=0.1,  # Dropout 比例
)

model = get_peft_model(model, config)

args = TrainingArguments(
    output_dir=os.path.join(base_dir, f"output/Qwen2.5-7b/Seed{seed}"),
    per_device_train_batch_size=4,
    gradient_accumulation_steps=4,
    logging_steps=10,
    num_train_epochs=15,
    save_steps=100,
    learning_rate=1e-4,
    save_on_each_node=True,
    gradient_checkpointing=True,
    report_to="none",
)

trainer = Trainer(
    model=model,
    args=args,
    train_dataset=train_dataset,
    data_collator=DataCollatorForSeq2Seq(tokenizer=tokenizer, padding=True),
)

trainer.train()

#模型存储地址
model_path = os.path.join(base_dir, f"output/linjiu/Seed{seed}")
trainer.save_model(model_path)
tokenizer.save_pretrained(model_path)

import time

# 记录开始时间
start_time = time.time()

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



# 记录结束时间
end_time = time.time()

# 计算并打印运行时间
elapsed_time = end_time - start_time
print(f"脚本运行时间: {elapsed_time:.2f} 秒")