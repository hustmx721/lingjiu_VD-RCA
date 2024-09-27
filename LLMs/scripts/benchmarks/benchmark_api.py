import aiohttp
import asyncio
import time
from tqdm import tqdm

url = 'http://chery-bigmodel-sh1.1958236818556677.cn-shanghai.pai-eas.aliyuncs.com/v1/chat/completions'
token = 'YWY3ZGZjOGM1NmE1ZGJiMTc4YzIxZGZjMDNjMDY5NTM0YzI3MWZkZg=='

async def fetch(session, url):
    """
    参数:
        session (aiohttp.ClientSession): 用于请求的会话。
        url (str): 要发送请求的 URL。
    
    返回:
        tuple: 包含完成 token 数量和请求时间。
    """
    start_time = time.time()

    # 固定请求的内容
    json_payload = {
        "model": "Qwen/Qwen2-72B-Instruct-GPTQ-Int4",
        "messages": [{"role": "user", "content": "Why is the sky blue?"}],
        "stream": False,
        "temperature": 0.7 # 参数使用 0.7 保证每次的结果略有区别
    }
    headers = {'content-type': 'application/json', 'Authorization': f'Bearer {token}'}
    async with session.post(url, json=json_payload, headers = headers) as response:
        response_json = await response.json()
        end_time = time.time()
        request_time = end_time - start_time
        completion_tokens = response_json['usage']['completion_tokens'] # 从返回的参数里获取生成的 token 的数量
        return completion_tokens, request_time

async def bound_fetch(sem, session, url, pbar):
    # 使用信号量 sem 来限制并发请求的数量，确保不会超过最大并发请求数
    async with sem:
        result = await fetch(session, url)
        pbar.update(1)
        return result

async def run(load_url, max_concurrent_requests, total_requests):
    """
    通过发送多个并发请求来运行基准测试。
    
    参数:
        load_url (str): 要发送请求的URL。
        max_concurrent_requests (int): 最大并发请求数。
        total_requests (int): 要发送的总请求数。
    
    返回:
        tuple: 包含完成 token 总数列表和响应时间列表。
    """
    # 创建 Semaphore 来限制并发请求的数量
    sem = asyncio.Semaphore(max_concurrent_requests)
    
    # 创建一个异步的HTTP会话
    async with aiohttp.ClientSession() as session:
        tasks = []
        
        # 创建一个进度条来可视化请求的进度
        with tqdm(total=total_requests) as pbar:
            # 循环创建任务，直到达到总请求数
            for _ in range(total_requests):
                # 为每个请求创建一个任务，确保它遵守信号量的限制
                task = asyncio.ensure_future(bound_fetch(sem, session, load_url, pbar))
                tasks.append(task)  # 将任务添加到任务列表中
            
            # 等待所有任务完成并收集它们的结果
            results = await asyncio.gather(*tasks)
        
        # 计算所有结果中的完成token总数
        completion_tokens = sum(result[0] for result in results)
        
        # 从所有结果中提取响应时间
        response_times = [result[1] for result in results]
        
        # 返回完成token的总数和响应时间的列表
        return completion_tokens, response_times

if __name__ == '__main__':
    import sys

    if len(sys.argv) != 3:
        print("Usage: python3 benchmark_api.py <C> <N>")
        sys.exit(1)

    C = int(sys.argv[1])  # 最大并发数
    N = int(sys.argv[2])  # 请求总数


    start_time = time.time()
    completion_tokens, response_times = asyncio.run(run(url, C, N))
    end_time = time.time()

    # 计算总时间
    total_time = end_time - start_time
    # 计算每个请求的平均时间
    avg_time_per_request = sum(response_times) / len(response_times)
    # 计算每秒生成的 token 数量
    tokens_per_second = completion_tokens / total_time

    print(f'Performance Results:')
    print(f'  Total requests            : {N}')
    print(f'  Max concurrent requests   : {C}')
    print(f'  Total time                : {total_time:.2f} seconds')
    print(f'  Average time per request  : {avg_time_per_request:.2f} seconds')
    print(f'  Tokens per second         : {tokens_per_second:.2f}')

