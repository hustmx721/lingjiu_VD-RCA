## 引言
*基于LLMs(Scheme2)-Method3的方法，我们的最终方案。*
> *漏洞检测* : `qwen2.5-coder-7b-instruct`模型 <br>
> *根因定位* : `Qwen2-7B`模型 
#### 漏洞检测
`qwen2.5-coder-7b-instruct`模型
| Seed | Run 1 (s) | Run 2 (s) | Run 3 (s) | Average (s) |
|------|-----------|-----------|-----------|-------------|
| 0    | 14.72     | 13.45     | 13.76     | 14.30       |
| 1    | 14.03     | 13.76     | 14.55     | 14.11       |
| 2    | 14.32     | 14.42     | 14.15     | 14.30       |
| 3    | 14.42     | 14.80     | 15.17     | 14.80       |
| 4    | 15.19     | 15.02     | 15.08     | 15.10       |

平均准确率：**0.94**<br>
平均用时(单卡): **14.522s**
#### 根因定位
- `qwen2.5-coder-7b-instruct`模型:
  
| Seed   |   Time (s) |
|:-------|-----------:|
| Seed 0 |     308.23 |
| Seed 1 |     289.70 |
| Seed 2 |     333.41 |
| Seed 3 |     289.45 |
| Seed 4 |     283.36 |

平均用时(单卡): ~300.83s~
- `Qwen2-7B`模型
  
| Seed   |   Time (s) |
|:-------|-----------:|
| Seed 0 |     165.46 |
| Seed 1 |     158.50 |
| Seed 2 |     155.47 |
| Seed 3 |     159.28 |
| Seed 4 |     147.15 |

平均用时(单卡): **157.172s**

## 安装环境
1. conda create -n llm python=3.10
2. conda install pytorch==2.2.0 torchvision==0.17.0 torchaudio==2.2.0 pytorch-cuda=12.1 -c pytorch -c nvidia
3. pip install -r requirements.txt
> Tips: 可直接复用LLMs-Method-2的环境

## 运行
1. `create_data.py` -- 生成漏洞检测训练数据集
2. `create_data_root.py` -- 生成根因定位训练集&测试集数据集
3. `create_data_test.py` -- 生成漏洞检测测试数据集
4. `train_linjiu.py` -- 训练漏洞检测模型
5. `train_linjiu_root.py` -- 训练根因定位模型
6. `predict_linjiu.py` -- 测试漏洞检测模型
7. `predict_linjiu_root.py` -- 测试根因定位模型


## 说明
前端最后呈现测试时间应该是  
> **调前端框架时间 + 运行`create_data_test.py`时间 + 运行 `predict_linjiu.py` 时间**
