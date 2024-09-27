# 训练集生成



## llamafactory_qa.py 

### 用途

用于生成llamfactory 文本问题任务的训练集

### 使用方法 

```
usage: llamafactory_qa.py [-h] [-i [INPUT_FILE]] [-o [OUTPUT_FILE]]
                          [-c [EXAMPLE_COUNT]]

generate train data.

options:
  -h, --help            show this help message and exit
  -i [INPUT_FILE], --input_file [INPUT_FILE]
                        The input file (default: test.txt)
  -o [OUTPUT_FILE], --output_file [OUTPUT_FILE]
                        The output file (default: {input_file_name}_output.json)
  -c [EXAMPLE_COUNT], --example_count [EXAMPLE_COUNT]
                        The example count
```

