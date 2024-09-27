import os, json, glob, random, torch
import numpy as np


# 随机种子初始化,保证相同的种子实验可重复性
def set_seed(myseed = 23721):
    torch.set_num_threads(1) # num of threads
    random.seed(myseed) # generate random seed
    torch.manual_seed(myseed) # the same seed of pytorch for CPU
    torch.cuda.manual_seed(myseed) # the same seed of pytorch for GPU
    torch.cuda.manual_seed_all(myseed) # if you are using multi-GPU
    np.random.seed(myseed) # numpy also the same seed
    os.environ["PYTHONSEED"] = str(myseed) # back state_dict value to set const hash
    torch.backends.cudnn.enabled = False # forbidden to use unsure algorithm
    torch.backends.cudnn.deterministic = True # use the same conv


def read_c_file(file_path):
    """读取单个C文件的内容"""
    with open(file_path, 'r', encoding='utf-8') as file:
        return file.read()

def collect_c_files(directory):
    """从指定目录收集所有C文件的内容"""
    c_files_content = []
    for subdir in os.listdir(directory):
        tepdir = os.path.join(directory, subdir)
        for filename in os.listdir(tepdir):
            if filename.endswith(".c"):  # 只处理C文件
                file_path = os.path.join(tepdir, filename)
                c_files_content.append({
                    "filename": filename,
                    "content": read_c_file(file_path)
                })
    return c_files_content

def write_to_json(data, output_file):
    """将收集到的内容写入JSON文件"""
    with open(output_file, 'w', encoding='utf-8') as json_file:
        json.dump(data, json_file, ensure_ascii=False, indent=4)

if __name__ == "__main__":
    set_seed(2024)
    # 指定包含C文件的目录
    c_files_directory = "/data2/tyl/LingJiu_Vuln/_Project/src/LLMs/dataset/testCode"
    
    # 收集所有C文件内容
    c_files_content = collect_c_files(c_files_directory)
    random.shuffle(c_files_content)  # 随机打乱顺序
    # 指定输出JSON文件
    output_json_file = "./TestBatchCFiles.json"
    

    # 将内容写入JSON文件
    write_to_json(c_files_content, output_json_file)
    
    print(f"JSON 文件已生成: {output_json_file}")
