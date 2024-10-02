from flask import Flask, render_template, request, jsonify
from threading import Thread
import os, sys, json, time

base_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))  # project root dir
sys.path.append(base_dir)

app = Flask(__name__)
seed = 3  # 设置随机种子
os.environ['CUDA_VISIBLE_DEVICES'] = '0'  # 设置GPU

# 修改的命令
CMD1 = "python predict_linjiu.py"
CMD2 = "python predict_linjiu_root.py"


# 根因定位, 后台执行
def run_root_cause_analysis():
    print("开始执行根因定位任务...")
    os.system(CMD2)
    os.chdir(base_dir)

    # 读取漏洞检测和根因定位结果
    with open(os.path.join(base_dir, f'result/detect_predict/result_seed{seed}.json'), 'r', encoding='utf-8') as f:
        detects = json.load(f)
    with open(os.path.join(base_dir, f'result/root_predict/result_root_seed{seed}.json'), 'r', encoding='utf-8') as f:
        roots = json.load(f)
    out = zip(detects, roots)

    # 保存结果到文件
    with open(os.path.join(base_dir, 'result/root_cause_analysis.txt'), 'w') as f:
        f.write("根因定位结果:\n")
        for idx, (detect_predict, root_predict) in enumerate(out):
            if int(detect_predict["output"]) == 0: # 预测没漏洞
                f.write(f"第{idx + 1}个文件预测结果: 这段代码没问题\n")
            elif int(detect_predict["output"]) == 1: # 预测有漏洞
                f.write(f"第{idx + 1}个文件预测结果: {root_predict['output']}\n")
            else:
                raise ValueError("error: Invalid detect result. Only 0 or 1 is allowed.")


# 处理Json文件的漏洞检测
def check_code_memory_leak():
    os.chdir(base_dir)
    print("开始执行漏洞检测任务...")
    # 漏洞检测
    os.system(CMD1)

    # 读取检测结果和源文件
    with open(os.path.join(base_dir, f'result/detect_predict/result_seed{seed}.json'), 'r', encoding='utf-8') as f:
        detects = json.load(f)

    with open(os.path.join(base_dir, 'data/testCode.json'), 'r', encoding='utf-8') as f:
        files = json.load(f)

    results = []
    for idx, (file, detect) in enumerate(zip(files, detects)):
        predict = detect['output']
        tmpresult = {
        "has_leak": True if int(predict) == 1 else False,
        "file": file['content'],
        "filename": file['filename'],
        }
        # print(f"文件{idx+1}:")
        # print(f"源码----->:\n{file['content']}")
        # print(f"检测结果: {predict}")
        results.append(tmpresult)

    # 启动后台线程执行根因定位
    Thread(target=run_root_cause_analysis).start()
    return results


@app.route('/')
def index():
    return render_template('index.html')


@app.route('/check_code', methods=['POST'])
def check_code():
    print("Request received")
    try:
        print("Processing memory leak detection...")
        # 执行检测代码，并返回结果
        detect_result = check_code_memory_leak()
        return jsonify(detect_result)
    except Exception as e:
        return jsonify({'status': 'error', 'message': str(e)}), 500


if __name__ == '__main__':
    app.run(host='127.0.0.1', port=5050)
