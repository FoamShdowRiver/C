//1
<!DOCTYPE html>
<html>
<head>
    <title>每日评分系统</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            display: grid;
            grid-template-columns: 1fr 1fr;
            grid-template-rows: auto auto;
            grid-gap: 20px;
            grid-template-areas: 
                "daily stats"
                "charts charts";
        }

        #dailyLog { grid-area: daily; }
        #statistics { grid-area: stats; }
        #chartContainer { 
            grid-area: charts;
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 20px;
        }

        .module {
            border: 1px solid #ccc;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }

        canvas {
            max-width: 100%;
            margin-top: 10px;
        }

        button {
            margin: 5px;
            padding: 8px 15px;
            background-color: #4CAF50;
            color: white;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 10px;
        }

        th, td {
            border: 1px solid #ddd;
            padding: 8px;
            text-align: left;
        }

        th {
            background-color: #f2f2f2;
        }
    </style>
</head>
<body>
    <div class="module" id="dailyLog">
        <h2>每日记录</h2>
        <input type="date" id="dateInput">
        <input type="number" id="scoreInput" placeholder="输入分数（1-100）" min="1" max="100">
        <button onclick="addScore()">添加评分</button>
        <button onclick="toggleHistory()" id="historyBtn">显示历史数据</button>
        <table id="scoreTable">
            <tr><th>日期</th><th>分数</th><th>操作</th></tr>
        </table>
    </div>

    <div class="module" id="statistics">
        <h2>统计概览</h2>
        <p>平均分: <span id="avgScore">0</span></p>
        <p>最高分: <span id="maxScore">0</span></p>
        <p>最低分: <span id="minScore">0</span></p>
        <p>总记录: <span id="totalRecords">0</span></p>
    </div>

    <div class="module" id="chartContainer">
        <div>
            <h3>月趋势图</h3>
            <canvas id="monthChart"></canvas>
        </div>
        <div>
            <h3>年趋势图</h3>
            <canvas id="yearChart"></canvas>
        </div>
    </div>

<script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
<script>
    let scores = JSON.parse(localStorage.getItem('scores')) || [];
    let monthlyData = JSON.parse(localStorage.getItem('monthlyData')) || Array(12).fill(0);
    let showAll = false;

    // 初始化图表
    const monthCtx = document.getElementById('monthChart').getContext('2d');
    const yearCtx = document.getElementById('yearChart').getContext('2d');
    
    const monthChart = new Chart(monthCtx, {
        type: 'line',
        data: {
            labels: Array.from({length: 30}, (_, i) => i + 1),
            datasets: [{
                label: '每日分数',
                data: [],
                borderColor: '#4CAF50',
                tension: 0.1
            }]
        }
    });

    const yearChart = new Chart(yearCtx, {
        type: 'bar',
        data: {
            labels: ['1月','2月','3月','4月','5月','6月','7月','8月','9月','10月','11月','12月'],
            datasets: [{
                label: '月总评分',
                data: monthlyData,
                backgroundColor: '#4CAF50'
            }]
        }
    });

    function updateCharts() {
        // 更新月图表
        const currentMonth = new Date().getMonth();
        const monthScores = scores.filter(score => {
            const date = new Date(score.date);
            return date.getMonth() === currentMonth;
        }).sort((a,b) => new Date(a.date) - new Date(b.date));
        
        monthChart.data.datasets.data = monthScores.map(s => s.score);
        monthChart.update();

        // 更新年图表
        yearChart.data.datasets.data = monthlyData;
        yearChart.update();
    }

    function updateMonthlyData() {
        const currentYear = new Date().getFullYear();
        monthlyData = Array(12).fill(0);
        
        scores.forEach(score => {
            const date = new Date(score.date);
            if(date.getFullYear() === currentYear) {
                const month = date.getMonth();
                monthlyData[month] += score.score;
            }
        });
        
        localStorage.setItem('monthlyData', JSON.stringify(monthlyData));
    }

    function addScore() {
        const date = document.getElementById('dateInput').value;
        const score = parseInt(document.getElementById('scoreInput').value);
        
        if (!date || score < 1 || score > 100) {
            alert('请输入有效日期和分数（1-100）');
            return;
        }

        scores.push({ date, score });
        scores.sort((a, b) => new Date(a.date) - new Date(b.date));
        localStorage.setItem('scores', JSON.stringify(scores));
        
        updateMonthlyData();
        updateDisplay();
        updateCharts();
    }

    function toggleHistory() {
        showAll = !showAll;
        document.getElementById('historyBtn').textContent = showAll ? '隐藏历史数据' : '显示历史数据';
        updateDisplay();
    }

    function updateDisplay() {
        const today = new Date().toISOString().split('T');
        const filteredScores = showAll ? scores : scores.filter(s => s.date === today);
        
        // 更新表格
        const table = document.getElementById('scoreTable');
        table.innerHTML = `<tr><th>日期</th><th>分数</th><th>操作</th></tr>`;
        
        filteredScores.forEach((score, index) => {
            const row = table.insertRow();
            row.innerHTML = `
                <td>${score.date}</td>
                <td>${score.score}</td>
                <td><button onclick="deleteScore(${index})">删除</button></td>
            `;
        });

        // 更新统计
        const scoresToShow = filteredScores.map(s => s.score);
        document.getElementById('avgScore').textContent = scoresToShow.length ? 
            (scoresToShow.reduce((a,b) => a + b, 0) / scoresToShow.length).toFixed(2) : 0;
        document.getElementById('maxScore').textContent = scoresToShow.length ? Math.max(...scoresToShow) : 0;
        document.getElementById('minScore').textContent = scoresToShow.length ? Math.min(...scoresToShow) : 0;
        document.getElementById('totalRecords').textContent = scoresToShow.length;
    }

    function deleteScore(index) {
        scores.splice(index, 1);
        localStorage.setItem('scores', JSON.stringify(scores));
        updateMonthlyData();
        updateDisplay();
        updateCharts();
    }

    // 初始化显示
    updateDisplay();
    updateCharts();
</script>
</body>
</html>
