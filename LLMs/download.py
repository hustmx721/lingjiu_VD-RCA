from modelscope import snapshot_download
import os
base_dir = os.path.dirname(os.path.abspath(__file__))

#  qwen -- codeqwen1.5-7b-chat / Qwen2-7b / Qwen2.5-7B-Instruct
#  swift -- llava-1.5-7b-hf
model_id = snapshot_download('qwen/Qwen2-7b', local_dir=os.path.join(base_dir, 
                                    'PretrainModels/Qwen2-7b/'))
