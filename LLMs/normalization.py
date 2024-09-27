# coding=utf-8
import re
import os
import tqdm
import time
import json
from typing import List
import warnings

warnings.filterwarnings("ignore")
base_dir = os.path.dirname(os.path.abspath(__file__))

# Sets for operators
operators3 = {'<<=', '>>='}
operators2 = {
    '->', '++', '--', '!~', '<<', '>>', '<=', '>=', '==', '!=', '&&', '||',
    '+=', '-=', '*=', '/=', '%=', '&=', '^=', '|='
}
operators1 = {
    '(', ')', '[', ']', '.', '+', '-', '*', '&', '/', '%', '<', '>', '^', '|',
    '=', ',', '?', ':', ';', '{', '}', '!', '~'
}

# keywords up to C11 and C++17; immutable set
keywords = frozenset({
    '__asm', '__builtin', '__cdecl', '__declspec', '__except', '__export',
    '__far16', '__far32', '__fastcall', '__finally', '__import', '__inline',
    '__int16', '__int32', '__int64', '__int8', '__leave', '__optlink',
    '__packed', '__pascal', '__stdcall', '__system', '__thread', '__try',
    '__unaligned', '_asm', '_Builtin', '_Cdecl', '_declspec', '_except',
    '_Export', '_Far16', '_Far32', '_Fastcall', '_finally', '_Import',
    '_inline', '_int16', '_int32', '_int64', '_int8', '_leave', '_Optlink',
    '_Packed', '_Pascal', '_stdcall', '_System', '_try', 'alignas', 'alignof',
    'and', 'and_eq', 'asm', 'auto', 'bitand', 'bitor', 'bool', 'break', 'case',
    'catch', 'char', 'char16_t', 'char32_t', 'class', 'compl', 'const',
    'const_cast', 'constexpr', 'continue', 'decltype', 'default', 'delete',
    'do', 'double', 'dynamic_cast', 'else', 'enum', 'explicit', 'export',
    'extern', 'false', 'final', 'float', 'for', 'friend', 'goto', 'if',
    'inline', 'int', 'long', 'mutable', 'namespace', 'new', 'noexcept', 'not',
    'not_eq', 'nullptr', 'operator', 'or', 'or_eq', 'override', 'private',
    'protected', 'public', 'register', 'reinterpret_cast', 'return', 'short',
    'signed', 'sizeof', 'static', 'static_assert', 'static_cast', 'struct',
    'switch', 'template', 'this', 'thread_local', 'throw', 'true', 'try',
    'typedef', 'typeid', 'typename', 'union', 'unsigned', 'using', 'virtual',
    'void', 'volatile', 'wchar_t', 'while', 'xor', 'xor_eq', 'NULL'
})

# ! 修改脚本文件的地址
with open(os.path.join(base_dir, "API.txt"), "r") as f:
    a = f.read().split(',')
keywords = keywords.union(a)  # frozenset不可以直接增删，可以执行集合操作
main_set = frozenset({'main'}) # holds known non-user-defined functions; immutable set
main_args = frozenset({'argc', 'argv'}) # arguments in main function; immutable set


def clean_gadget(file:str, gadget: List[str]):  # 数组元素以代码行为单位

    type = file.split('/')[-1].split('_')[0]  # 有无漏洞
    norm_dict = {}
    norm_dict['type'] = type

    fun_symbols = {}  # 自定义函数名---> symbol name + number
    var_symbols = {}  # 自定义变量名---> symbol name + number

    fun_count = 1  # 记录自定义函数名的个数
    var_count = 1  # 记录自定义变量名的个数

    rx_fun = re.compile(r'\b([_A-Za-z]\w*)\b(?=\s*\()')  # 用于匹配函数名的模式串
    rx_var = re.compile(r'\b([_A-Za-z]\w*)\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()') # 用于匹配变量名的模式串

    cleaned_gadget = []  # 用于保存规范化后的代码

    for line in gadget:
        ascii_line = re.sub(r'[^\x00-\x7f]', r'', line) # 删除所有的非ASCII字符和空字符

        user_fun = rx_fun.findall(ascii_line)  # 以数组形式返回所有的函数
        user_var = rx_var.findall(ascii_line)  # 以数组形式返回所有的变量名

        # 自定义函数名规范化
        for fun_name in user_fun:  
            if len({fun_name}.difference(main_set)) != 0 and len({fun_name}.difference(keywords)) != 0:  # 确保函数名不属于系统函数名、main
                if fun_name not in fun_symbols.keys():
                    fun_symbols[fun_name] = 'FUN' + str(fun_count)
                    fun_count += 1
                ascii_line = re.sub(r'\b(' + fun_name + r')\b(?=\s*\()',
                                    fun_symbols[fun_name], ascii_line)  # 确保仅仅是函数名被替换（而不是变量名或者声明符）

        # 自定义变量名规范化
        for var_name in user_var:
            if len({var_name}.difference(keywords)) != 0 and len({var_name}.difference(main_args)) != 0: # 确保变量名不属于系统函数名、特殊的变量名
                if var_name not in var_symbols.keys():
                    var_symbols[var_name] = 'VAR' + str(var_count)
                    var_count += 1
                ascii_line = re.sub(
                    r'\b(' + var_name +
                    r')\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()',
                    var_symbols[var_name], ascii_line)  # 确保仅仅是变量名被替换（而不是函数名或者声明符）

        cleaned_gadget.append(ascii_line)
    
    norm_dict["func"] = fun_symbols
    norm_dict["var"] = var_symbols

    return cleaned_gadget, norm_dict  # 以代码行为单位返回规范化后的代码


def main():
    time_start = time.time()
    # ! 修改漏洞文件路径

    file_path = os.path.join(base_dir, "/dataset/path/of/raw/code")        # 漏洞文件路径
    pred_path = os.path.join(base_dir, "/dataset/path/of/normalized/code")      # 正则化后文件保存路径
    """ 
    eg:
    file_path = "/data2/tyl/LingJiu_Vuln/dataset/TestList/raw"         # 漏洞文件路径
    pred_path = "/data2/tyl/LingJiu_Vuln/dataset/TestList/norm"      # 正则化后文件保存路径
    """

    num = 0
    for dirname in tqdm.tqdm(os.listdir(file_path)):
        for file_name in os.listdir(file_path+'/'+dirname):
            func_file = os.path.join(file_path, dirname, file_name)

            if func_file.endswith(".txt"):
                continue

            with open(func_file, "r") as f:
                strings = f.read()
            
            # 去除注释
            result1 = re.sub(r'//.*','',strings) # 删除行级注释
            result2 = re.sub(r'/\*.*?\*/','',result1,flags=re.DOTALL) # 删除块级注释

            # 规范化
            raw_code = result2.split('\n')  # 以行为单位切分整个代码
            medi_code = []
            for line in raw_code:
                nostrlit_line = re.sub(r'".*?"', 'STRING', line)             # 删除所有的字符串
                nocharlit_line = re.sub(r"'.*?'", 'CHAR', nostrlit_line)     # 删除所有的字符
                medi_code.append(nocharlit_line.rstrip())              # 去除空字符串
        
            code = [i for i in medi_code if i != '']  # 去除空字符
            nor_code, norm_dict = clean_gadget(func_file, code)  # 对代码行进行规范化

            if not os.path.exists(os.path.join(pred_path, dirname)):
                os.makedirs(os.path.join(pred_path, dirname))

            # with open(os.path.join(pred_path, dirname,file_name.split('/')[-1].split('.')[0]+'.json'), "w", encoding="utf-8") as f:
            #     f.write(json.dumps(norm_dict, indent=4, ensure_ascii=False))

            # 保存没有重复的代码
            code_str = '\n'.join(str(i) for i in nor_code)  # 数组形式的代码转化为字符串
            num +=1

            pred_file = os.path.join(pred_path, dirname, file_name)
            if not os.path.exists(os.path.dirname(pred_file)):
                os.makedirs(os.path.dirname(pred_file))
            with open(pred_file, "w") as f:
                f.write(code_str)
            
    print("正则化后的函数个数：{}".format(num))
    print("正则化处理完成!")
    end_time = time.time()
    print("总耗时：{:.4f}s".format(end_time-time_start))


if __name__ == '__main__':
    main()