from flask import Flask, render_template, request, jsonify

import os, sys, json, time
base_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__))) # project root dir
sys.path.append(base_dir)

app = Flask(__name__)


# 处理代码片段的漏洞检测和根因定位
def check_code_memory_leak(code=None, model='codeqwen1.5-7b-chat', dataset='lingjiu'):
    start_time = time.time()
    os.chdir(base_dir)
    # ! 同批次文件处理一致, 保存文件内容到本地, 传文件路径到命令行
    store_path = os.path.join(base_dir, 'dataset/snippet.txt')
    with open(store_path, 'w', encoding='utf-8') as f:
        f.write(code)
    os.system(f"python -u makedata.py -C {store_path} -M {model} -D {dataset}")
    print(f"数据处理完毕, 累计用时{time.time()-start_time:.2f}秒")
    # 漏洞检测, 根因定位
    cmd1 = "CUDA_VISIBLE_DEVICES=5 llamafactory-cli train examples/train_lora/detect_lora_predict.yaml"
    cmd2 = "CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/root_lora_predict.yaml"
    os.system(cmd1 + "&" + cmd2)
    print(f"漏洞检测和根因定位任务完成, 累计用时{time.time()-start_time:.2f}秒")
    # os.system("CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/detect_lora_predict.yaml")
    # print(f"漏洞检测完毕, 累计用时{time.time()-start_time:.2f}秒")
    # os.system("CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/root_lora_predict.yaml")
    # print(f"根因定位完毕, 累计用时{time.time()-start_time:.2f}秒")

    # 读取结果
    with open(os.path.join(base_dir,'results/test/detect_predict/generated_predictions.jsonl'), 'r', encoding='utf-8') as f:
        detect = json.loads(f.readline())["predict"]
    with open(os.path.join(base_dir,'results/test/root_predict/generated_predictions.jsonl'), 'r', encoding='utf-8') as f:
        root = json.loads(f.readline())["predict"]

    print(f"源码----->:\n{code}")
    print(f"检测结果: {detect},  根因定位结果: {root}")
    result = {
        "has_leak": True if int(detect) == 1 else False,
        "reason": root if int(detect) == 1 else "这段C代码无漏洞。"
    }
    return result


# 处理上传Json文件, 批量数据的漏洞检测和根因定位
def check_files_memory_leak(file_path=None, model='codeqwen1.5-7b-chat', dataset='lingjiu'):
    start_time = time.time()
    os.chdir(base_dir)
    os.system(f"python -u makedata.py -F {file_path} -M {model} -D {dataset}")
    print(f"数据处理完毕, 累计用时{time.time()-start_time:.2f}秒")
    # 漏洞检测, 根因定位
    cmd1 = "CUDA_VISIBLE_DEVICES=5 llamafactory-cli train examples/train_lora/detect_lora_predict.yaml"
    cmd2 = "CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/root_lora_predict.yaml"
    os.system(cmd1 + "&" + cmd2)
    print(f"漏洞检测和根因定位任务完成, 累计用时{time.time()-start_time:.2f}秒")
    # os.system("CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/detect_lora_predict.yaml")
    # print(f"漏洞检测完毕, 累计用时{time.time()-start_time:.2f}秒")
    # os.system("CUDA_VISIBLE_DEVICES=6 llamafactory-cli train examples/train_lora/root_lora_predict.yaml")
    # print(f"根因定位完毕, 累计用时{time.time()-start_time:.2f}秒")

    # 读取结果
    with open(os.path.join(base_dir,'results/test/detect_predict/generated_predictions.jsonl'), 'r', encoding='utf-8') as f:
        detects = [json.loads(line) for line in f]
    with open(os.path.join(base_dir,'results/test/root_predict/generated_predictions.jsonl'), 'r', encoding='utf-8') as f:
        roots = [json.loads(line) for line in f]
    # print(detects, roots)
    # 读取源码
    with open(file_path, 'r', encoding='utf-8') as f:
        files = json.loads(f.read())
    results = []
    for idx, (item1, item2) in enumerate(zip(detects, roots)):
        tmpresult = {}
        detect = int(item1["predict"])
        root = item2["predict"]
        tmpresult = {
        "filename": files[idx]['filename'],
        "has_leak": True if detect == 1 else False,
        "reason": root if detect == 1 else "这段C代码无漏洞。"
        }
        print(f"源码----->:\n{files[idx]['content']}")
        print(f"检测结果: {detect},  根因定位结果: {root}")
        results.append(tmpresult)
    return results


@app.route('/')
def index():
    return render_template('index.html')

@app.route('/check_code', methods=['POST'])
def check_code():
    # 获取模型和预训练数据集(选项), 默认值分别为"codeqwen1.5-7b-chat"和"lingjiu"
    model = request.form.get('model', 'codeqwen1.5-7b-chat')
    dataset = request.form.get('dataset', 'lingjiu')

    code = request.form.get('code')
    file = request.files.get('file')
    
    # 处理上传文件
    if file:
        filename = file.filename
        # 读取文件内容: c/cpp 文件读取内容为字符串; json 文件读取内容为json对象
        file_content = file.read().decode('utf-8')  # str
        # 处理单个漏洞文件
        if filename.endswith('.c') or filename.endswith('.cpp'):
            print("now processing single code snippets--c/cpp file")
            result = check_code_memory_leak(code=file_content, model=model, dataset=dataset)
            return jsonify(result)
        elif filename.endswith('.json'):
            print("now processing batch code snippets--json file")
            # codes = json.loads(file_content) # 按照本地测试标准格式的json文件, 默认为列表形式(元素为代码片段)
            # assert isinstance(codes, list), "error: Invalid json format. The json file should be a list of code snippets(dicts)."
            # ! v1：解析为列表传参数到python命令行会有问题,默认只会传第一个脚本; 故选择在处理函数(makedata.py)中解析str为json对象, 此处不解析
            # ! v2：传str进命令行也会有问题, 这里改为传文件路径, 在处理函数中读取文件
            store_path = os.path.join(base_dir, 'dataset/upload_codes.json')
            with open(store_path, 'w', encoding='utf-8') as f:
                f.write(file_content)
            results = check_files_memory_leak(file_path=store_path, model=model, dataset=dataset)
            return jsonify(results)
        else:
            raise ValueError("error: Unsupported file type. Only .c and .json files are supported.")
    # 处理代码片段
    elif code:
        print("now processing single code snippets")
        result = check_code_memory_leak(code=code, model=model, dataset=dataset)
        return jsonify(result)
    else: 
        raise ValueError("error: No code or file(s) provided.")


if __name__ == '__main__':
    app.run(host='127.0.0.1', port=5050)