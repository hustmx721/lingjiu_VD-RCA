#
# CUDA_VISIBLE_DEVICES=2 python shiyan.py
# 读取大模型预测结果
import json
# conda activate hywu
# cd /mnt/data/train/LLaMA-Factory/

import ast
import json

newlist = []
num = 0
# 打开.jsonl文件
with open('/mnt/data/train/LLM-Finetune/train_linjiu.jsonl', 'r') as file:
    # 逐行读取
    for line in file:
        # 解析每行的JSON内容
        # print('每一行')
        num += 1
        print(num)
        data = json.loads(line.strip())
        print(data)
        # if data['predict'] == data['label']:
        #     pass
        # else:
        #     newlist.append(num)
