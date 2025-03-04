//2
<!DOCTYPE html>
<html>
<head>
    <title>结算评分系统 v2.3</title>
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
    <style>
                /* 布局样式 */
        body {
            font-family: 'Segoe UI', sans-serif;
            margin: 20px;
            display: grid;
            grid-template-columns: 1fr 1fr;
            grid-template-rows: auto auto;
            gap: 20px;
            grid-template-areas: 
                "daily stats"
                "monthly annual";
        }
        #dailyLog { grid-area: daily; }
        #statistics { grid-area: stats; }
        #monthlyChart { grid-area: monthly; }
        #annualChart { grid-area: annual; }
        
        /* 模块样式 */
        .module {
            border: 1px solid #ddd;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }
        
        /* 输入区域 */
        .input-group {
            margin-bottom: 15px;
            display: flex;
            gap: 10px;
        }
        
        /* 图表容器 */
        .chart-container {
            height: 400px;
            position: relative;
        }
        
        /* 按钮样式 */
        button {
            padding: 8px 15px;
            background: #007bff;
            color: white;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }
        
        /* 表格样式 */
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 10px;
        }
        th, td {
            padding: 12px;
            border: 1px solid #ddd;
            text-align: left;
        }
    </style>
</head>
<body>
    <!-- 每日记录模块 -->
    <div class="module" id="dailyLog">
        <h2>📝 每日评分录入</h2>
        <div class="input-group">
            <input type="date" id="inputDate" required>
            <input type="number" id="score" min="0" max="200" step="1" 
                   placeholder="输入分数 (0-200)" required>
            <button onclick="submitData()">提交评分</button>
            <button onclick="saveData()">💾 保存数据</button>
            <button onclick="document.getElementById('fileInput').click()">📂 导入数据</button>
        </div>
        <div id="todayScore">
            <h3>今日评分记录</h3>
            <table>
                <thead><tr><th>时间</th><th>分数</th></tr></thead>
                <tbody></tbody>
            </table>
        </div>
    </div>

    <!-- 统计概览模块 -->
    <div class="module" id="statistics">
        <h2>📊 统计概览</h2>
        <div class="stats-card">
            <h4>当月统计</h4>
            <p>平均分：<span id="monthAvg">0.0</span></p>
            <p>最高分：<span id="monthMax">0</span></p>
            <p>最低分：<span id="monthMin">0</span></p>
        </div>
        <div class="stats-card">
            <h4>年度统计</h4>
            <p>平均分：<span id="yearAvg">0.0</span></p>
            <p>累计分：<span id="yearTotal">0</span></p>
        </div>
    </div>

    <!-- 月趋势图 -->
    <div class="module" id="monthlyChart">
        <h2>📈 月度评级趋势</h2>
        <div class="chart-container">
            <canvas id="monthTrend"></canvas>
        </div>
    </div>

    <!-- 年趋势图 -->
    <div class="module" id="annualChart">
        <h2>📊 年度累计趋势</h2>
        <div class="chart-container">
            <canvas id="yearTrend"></canvas>
        </div>
    </div>

    <!-- 隐藏文件输入 -->
    <input type="file" id="fileInput" hidden accept=".json">
    
    <script>
        let dataCache = new Map();  // 初始化数据存储
        let dataChart = null;       // 图表实例

        function validateInput(date, score) {
            if (!date) throw new Error("请选择日期");
            if (isNaN(score) || score < 0 || score > 200) 
                throw new Error("分数需为0-200的整数");
        }

        function submitData() {
            try {
                const date = document.getElementById('inputDate').value;
                const score = parseInt(document.getElementById('score').value);
                validateInput(date, score);
                dataCache.set(date, score);
                updateDisplay();
                document.getElementById('score').value = '';
            } catch (error) {
                alert(error.message);
            }
        }

        function updateDisplay() {
            const tbody = document.querySelector('#dailyTable tbody');
            tbody.innerHTML = dataCache.size ? '' : '<tr><td colspan="2" class="no-data">暂无数据</td></tr>';
            const sortedDates = Array.from(dataCache.keys()).sort((a, b) => new Date(a) - new Date(b));
            sortedDates.forEach(date => {
                tbody.innerHTML += `<tr><td>$${date}</td><td>$${dataCache.get(date)}</td></tr>`;
            });

                // 更新统计显示
    document.getElementById('monthAvg').textContent = 
        monthData.length ? (monthData.reduce((a,b) => a+b, 0)/monthData.length).toFixed(1) : '0.0';
    document.getElementById('monthMax').textContent = 
        monthData.length ? Math.max(...monthData) : '0';
    document.getElementById('monthMin').textContent = 
        monthData.length ? Math.min(...monthData) : '0';
    
    document.getElementById('yearAvg').textContent = 
        yearData.length ? (yearData.reduce((a,b) => a+b, 0)/yearData.length).toFixed(1) : '0.0';
    document.getElementById('yearTotal').textContent = 
        yearData.reduce((a,b) => a+b, 0);
}
            
            // 修复图表初始化
            const ctx = document.getElementById('dataChart');
            if (dataChart) dataChart.destroy();
            if (sortedDates.length > 0) {
                dataChart = new Chart(ctx, {
                    type: 'line',
                    data: {
                        labels: sortedDates,
                        datasets: [{
                            label: '分数趋势',
                            data: sortedDates.map(date => dataCache.get(date)),
                            borderColor: '#007bff',
                            tension: 0.1
                        }]
                    },
                    options: { responsive: true, scales: { y: { beginAtZero: true, max: 1000 } } }
                });
            } else {
                ctx.innerHTML = '<div class="no-data">暂无图表数据</div>';
            }
        }

        // 文件上传逻辑修正
        document.getElementById('fileInput').addEventListener('change', function(e) {
            const file = e.target.files;
            if (!file) return;
            const reader = new FileReader();
            reader.onload = function(e) {
                try {
                    const jsonData = JSON.parse(e.target.result);
                    dataCache = new Map(Object.entries(jsonData));
                    updateDisplay();
                } catch (error) {
                    alert('文件解析失败，请确保选择正确的JSON文件');
                }
            };
            reader.readAsText(file);
        });

        // 初始化显示
        updateDisplay();
    </script>
</body>
</html>
