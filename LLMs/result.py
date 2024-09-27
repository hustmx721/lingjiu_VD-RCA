# CUDA_VISIBLE_DEVICES=7 python result.py
import json
# cd /mnt/data/train/LLaMA-Factory/

import json

mnt = 0
detect = []
with open('/mnt/data1/tyl/LJ_Vuln/LLMs/final_approach/saves/qwen2-7B/lora/detect_predict/generated_predictions.jsonl', 'r') as file:
    for line in file:
        data_detect = json.loads(line.strip())['predict']
        detect.append(data_detect)
        mnt += 1

root = []
mnt = 0
with open('/mnt/data1/tyl/LJ_Vuln/LLMs/final_approach/saves/qwen2-7B/lora/root_predict/generated_predictions.jsonl', 'r') as file:
    for line in file:
        data_root = json.loads(line.strip())['predict']
        root.append(data_root)
        mnt += 1

data = []
for i in range(len(detect)):
    array = {}
    if detect[i] == '1':
        pass
    else:
        root[i] == '该脚本不存在内存泄露'
    array['result'] = detect[i]
    array['suggestion'] = root[i]
    data.append(array)

with open('/mnt/data1/tyl/LJ_Vuln/LLMs/final_approach/results/lingjiu/fold2_result.json', 'w',encoding='utf-8') as f:
    json.dump(data, f,ensure_ascii=False)




