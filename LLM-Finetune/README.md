## 引言
*基于LLMs(Scheme2)-Method3的方法，我们的最终方案。*
> *漏洞检测*:`qwen2.5-coder-7b-instruct`模型
> *根因定位*:`Qwen2-7B`模型
#### 漏洞检测
`qwen2.5-coder-7b-instruct`模型
seed0: 0.94 14.72s / 13.45s / 13.76s  Avg:14.30s
seed1: 0.92 14.03s / 13.76s / 14.55s  Avg:14.11s
seed2: 0.94 14.32s / 14.42s / 14.15s  Avg:14.30s
seed3: 0.98 14.42s / 14.80s / 15.17s  Avg:14.80s
seed4: 0.94 15.19s / 15.02s / 15.08s  Avg:15.10s
平均准确率：**0.94**
平均用时(单卡): **14.522s**
#### 根因定位
- `qwen2.5-coder-7b-instruct`模型:
seed0: 308.23s
seed1: 289.70s
seed2: 333.41s
seed3: 289.45s
seed4: 283.36s
平均用时(单卡): ~300.83s~
- `Qwen2-7B`模型
seed0: 165.46s
seed1: 158.50s
seed2: 155.47s
seed3: 159.28s
seed4: 147.15s
平均用时(单卡): **157.172s**

## 安装环境：
1. conda create -n llm python=3.10
2. conda install pytorch==2.2.0 torchvision==0.17.0 torchaudio==2.2.0 pytorch-cuda=12.1 -c pytorch -c nvidia
3. pip install -r requirements.txt
> Tips: 可直接复用LLMs-Method-2的环境

## 运行
1. create_data.py 生成漏洞检测训练数据集
2. create_data_root.py 生成根因定位训练集&测试集数据集
3. create_data_test.py 生成漏洞检测测试数据集
4. train_linjiu.py 训练漏洞检测模型
5. train_linjiu_root.py 训练根因定位模型
6. predict_linjiu.py 测试漏洞检测模型
7. predict_linjiu_root.py 测试根因定位模型


## 说明：
前端最后呈现测试时间应该是  
> 调前端框架时间+运行create_data_test.py时间+运行predict_linjiu.py时间
