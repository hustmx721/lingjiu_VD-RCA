import argparse

class Config:
    # 设置超参数
    seed = 0
    gpu_id = "9"
    node_num = 200     # 结点个数
    input_dim = 100   # 结点聚合后的维度
    output_dim = 200   # 结点聚合后的维度
    Batch_size = 16    # batch_size
    Learning_rate = 0.0001 # 学习率
    Dropout = 0.5
    decay = 0.001
    Epoch = 500
    explain_epoch = 100
    train_0_dataset = None
    train_1_dataset = None
    valid_0_dataset = None
    valid_1_dataset = None


def arg_parser():
    parser = argparse.ArgumentParser(description="Arguments for Vulnerability Detection and Explanation")
    io_parser = parser.add_argument_group('Input/Output')
    model_parser = parser.add_argument_group('Model')
    save_parser = parser.add_argument_group('Save')
    in_parser = parser.add_mutually_exclusive_group('Input')
    parser.add_argument('--model_name', type=str, default='bert-base-uncased', help='Name of the model')

    parser.set_defaults()
    
    return parser.parse_args()