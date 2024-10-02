document.getElementById('checkButton').addEventListener('click', function(e) {
    e.preventDefault();  // 阻止默认的表单提交行为

    const chatContainer = document.getElementById('chatContainer');
    chatContainer.innerHTML = "";  // 清空之前的展示结果

    // 向后端发送请求，执行检测
    fetch('/check_code', {
        method: 'POST',  // 使用POST方法
        headers: {
            'Content-Type': 'application/json'  // 请求头，表示发送JSON数据
        }
    })
    .then(response => response.json())  // 解析响应为JSON格式
    .then(data => {
        if (data.error) {
            // 如果后端返回错误，显示错误信息
            chatContainer.innerHTML += `<div class="chat-entry bot">Error: ${data.error}</div>`;
        } else {
            // 处理后端返回的数据，展示每个文件的预测结果
            if (Array.isArray(data)) {
                data.forEach((result, index) => {
                    const fileCode = result.file || 'No code provided';
                    const hasLeak = result.has_leak ? '×, 这段代码存在漏洞泄漏' : '√, 这段代码没问题';
                    const filename = result.filename || 'No filename provided';
                    // chatContainer.innerHTML += `<div class="chat-entry bot">文件${index + 1}/50 -- ${filename} : ${hasLeak}<br></div>`;
                    chatContainer.innerHTML += `<div class="chat-entry bot">文件${index + 1}/50 -- ${filename}  :  ${hasLeak}<br> ${fileCode}</div>`;
                });
            } else {
                chatContainer.innerHTML += `<div class="chat-entry bot">Unexpected data format returned.</div>`;
            }
        }
    })
    .catch(error => {
        // 处理请求中的任何错误
        console.error('There was a problem with the request:', error);
        chatContainer.innerHTML += `<div class="chat-entry bot">An error occurred: ${error.message}</div>`;
    });

    // 确保滚动到聊天记录的底部
    chatContainer.scrollTop = chatContainer.scrollHeight;
});
