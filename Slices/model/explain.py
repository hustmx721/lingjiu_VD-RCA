import torch
import tqdm
from torch_geometric.explain import Explainer, GNNExplainer
from model import VuldetexpModel
from main import FocalLoss
from configs import Config as cfg
from utils import *
from mylogging import Logger
from utils import set_seed


if __name__ == '__main__':
    set_seed(cfg.seed)
    sys.stdout = Logger(os.path.join("/data2/tyl/LingJiu_Vuln/_Project/src/Slices/model/log_data/explain/explain.log"))

    # load data and model
    train_loader, vali_loader, test_loader = load_data()
    device = torch.device('cuda:9' if torch.cuda.is_available() else 'cpu')
    model = VuldetexpModel(batch=cfg.Batch_size, input_dim=cfg.input_dim, output_dim=cfg.output_dim).to(device)
    optimizer = torch.optim.Adam(model.parameters(), lr=cfg.Learning_rate)
    loss_fn = FocalLoss(gamma=2, weight=None).to(device)

    # model training
    for epoch in tqdm.tqdm(range(cfg.explain_epoch),desc="Explain Model training"):
        for data in train_loader:
            model.train()
            data = data.to(device)
            optimizer.zero_grad()
            out = model(data.x, data.edge_index)
            loss = loss_fn(out, data.y)
            loss.backward()
            optimizer.step()
    
    print("Model training finished!")

    # define explainer
    model.batch = 1 # for each single sample
    explainer = Explainer(
    model=model,
    algorithm=GNNExplainer(epochs=cfg.explain_epoch, lr=cfg.Learning_rate, return_type='prob'),
    explanation_type="model",
    model_config=dict(
        mode="binary_classification",
        task_level="graph",
        return_type="probs",
    ),
    node_mask_type="attributes",
    edge_mask_type="object")

    # explain sample
    src_file = cfg.valid_0_dataset + cfg.valid_1_dataset
    for idx, data in enumerate(test_loader):
        # 定位文件
        data = data.to(device)
        tmp_info = src_file[idx]
        raw_lines, norm_file, json_file = get_src(tmp_info)
        # 模型解释
        prediction, error_line = explain(explainer, data)
        # 预测为0不进行根因定位
        if round(prediction[0][0]) == 1:
            print("根据预测结果, 该样本无漏洞")
            continue
        print("存疑节点:",error_line) # 输出错误边对应的起始节点和终止节点
        vul = get_vul(tmp_info, error_line)
        if vul is None:
            print("该漏洞未在原始代码中找到")
            continue
        error_norm_index = get_position(vul, norm_file)
        vul_lines = [norm_file[i] for i in error_norm_index]

        mapping = get_line_mapping(raw_lines, vul_lines, json_file)
        print("漏洞语句行:", mapping.values())
        for error_final in mapping.values():
            print(raw_lines[int(error_final)])

