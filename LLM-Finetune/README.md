安装环境：
1.conda create -n llm python=3.10
2.conda install pytorch==2.2.0 torchvision==0.17.0 torchaudio==2.2.0 pytorch-cuda=12.1 -c pytorch -c nvidia
3.pip install -r requirements.txt

运行
1.create_data.py 生成漏洞检测训练数据集
2.create_data_root.py 生成根因定位训练集&测试集数据集
3.create_data_test.py 生成漏洞检测测试数据集
4.train_linjiu.py 训练漏洞检测模型
5.train_linjiu_root.py 训练根因定位模型
6.predict_linjiu.py 测试漏洞检测模型
7.predict_linjiu_root.py 测试根因定位模型


前端最后呈现测试时间应该是  调前端框架时间+运行create_data_test.py时间+运行predict_linjiu.py时间