document.getElementById('codeForm').addEventListener('submit', function(e) {
    e.preventDefault();

    const formData = new FormData();
    const model = document.getElementById('model').value;
    const dataset = document.getElementById('dataset').value;
    const chatContainer = document.getElementById('chatContainer');

    formData.append('model', model);
    formData.append('dataset', dataset);

    // 根据选择的输入方式添加数据
    const inputMethod = document.querySelector('.input-method-btn.active').dataset.method;

    if (inputMethod === 'code') {
        const code = document.getElementById('codeInput').value;
        if (!code) {
            chatContainer.innerHTML += `<div class="chat-entry bot">Please enter some code.</div>`;
            return;
        }
        formData.append('code', code);
        chatContainer.innerHTML += `<div class="chat-entry user">You: ${code}</div>`;
    } else if (inputMethod === 'file') {
        const files = document.getElementById('fileInput').files;
        if (files.length === 0) {
            chatContainer.innerHTML += `<div class="chat-entry bot">Please upload a file.</div>`;
            return;
        }
        Array.from(files).forEach(file => {
            formData.append('file', file);
            chatContainer.innerHTML += `<div class="chat-entry user">You uploaded: ${file.name}</div>`;
        });
        displayUploadedFiles();
    }

    // 提交到服务器
    fetch('/check_code', {
        method: 'POST',
        body: formData
    })
    .then(response => response.json())
    .then(data => {
        if (data.error) {
            chatContainer.innerHTML += `<div class="chat-entry bot">Error: ${data.error}</div>`;
        } else {
            if (Array.isArray(data)) {
                data.forEach((result, index) => {
                    const filename = result.filename || 'Unknown file'; 
                    if (result.has_leak) {
                        chatContainer.innerHTML += `<div class="chat-entry bot">File: ${filename} - ×, 这段代码存在漏洞泄漏</div>`;
                    } else {
                        chatContainer.innerHTML += `<div class="chat-entry bot">File: ${filename} - √, 这段代码没问题</div>`;
                    }
                });
            } else {
                if (data.has_leak) {
                    chatContainer.innerHTML += `<div class="chat-entry bot">×, 这段代码存在漏洞泄漏</div>`;
                } else {
                    chatContainer.innerHTML += `<div class="chat-entry bot">√, 这段代码没问题</div>`;
                }
            }
        }
    })
    .catch(error => {
        chatContainer.innerHTML += `<div class="chat-entry bot">An error occurred: ${error.message}</div>`;
    });

    chatContainer.scrollTop = chatContainer.scrollHeight;
});

// 切换输入方式的按钮
document.querySelectorAll('.input-method-btn').forEach(button => {
    button.addEventListener('click', function() {
        document.querySelectorAll('.input-method-btn').forEach(btn => btn.classList.remove('active'));
        this.classList.add('active');

        if (this.dataset.method === 'code') {
            document.getElementById('codeInputContainer').style.display = 'block';
            document.getElementById('fileInputContainer').style.display = 'none';
        } else {
            document.getElementById('codeInputContainer').style.display = 'none';
            document.getElementById('fileInputContainer').style.display = 'block';
        }
    });
});

// 显示上传的文件名
function displayUploadedFiles() {
    const fileInput = document.getElementById('fileInput');
    const fileNamesDiv = document.getElementById('fileNames');
    fileNamesDiv.innerHTML = '';
    
    Array.from(fileInput.files).forEach(file => {
        fileNamesDiv.innerHTML += `<p>${file.name}</p>`;
    });
}
