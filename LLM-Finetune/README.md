安装环境：
1.conda create -n llm python=3.10
2.conda install pytorch==2.2.0 torchvision==0.17.0 torchaudio==2.2.0 pytorch-cuda=12.1 -c pytorch -c nvidia
3.pip install -r requirements.txt

运行
1.create_data.py 生成漏洞检测数据集
2.create_data_root.py 生成根因定位数据集
3.train_linjiu.py 训练漏洞检测模型以及测试
4.train_linjiu_root.py 训练根因定位模型以及测试