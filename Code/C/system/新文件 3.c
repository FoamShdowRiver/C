//3
<!DOCTYPE html>
<html>
<head>
    <title>结算评分系统 v2.3</title>
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
    <style>
        /* 新增图表容器样式 */
        .chart-container {
            position: relative;
            height: 500px; /* 固定高度 */
            width: 100%;
            min-height: 300px;
            max-height: 600px;
            overflow: hidden;
        }
        
        /* 其他原有样式保持不变 */
        body { font-family: 'Segoe UI', sans-serif; margin: 20px }
        .container { max-width: 1200px; margin: auto }
        .input-group { margin: 15px 0; display: flex; gap: 10px }
        input, button { padding: 8px; border: 1px solid #ddd; border-radius: 4px }
        button { background: #007bff; color: white; border: none; cursor: pointer }
        #dataDisplay { margin: 20px 0; display: grid; grid-template-columns: 1fr 1fr; gap: 20px }
        canvas { background: #f8f9fa; padding: 15px; border-radius: 8px }
        table { width: 100%; border-collapse: collapse }
        th, td { padding: 12px; border: 1px solid #ddd; text-align: left }
        .summary-card { background: white; padding: 15px; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1) }
        .no-data { color: #666; text-align: center; padding: 20px }
    </style>
</head>
<body>
    <!-- 保持原有HTML结构不变 -->
    <div class="container">
        <!-- ...原有内容... -->
        <div id="dataDisplay">
            <!-- ...原有内容... -->
            <div>
                <div class="summary-card">
                    <h3>📈 统计概览</h3>
                    <div id="annualSummary" class="no-data">暂无年度数据</div>
                    <div id="monthlySummary" class="no-data" style="margin-top: 15px">暂无月度数据</div>
                </div>
                <!-- 修改图表容器 -->
                <div class="chart-container">
                    <canvas id="dataChart"></canvas>
                </div>
            </div>
        </div>
        <!-- ...原有内容... -->
    </div>

<script>
// 修改后的图表初始化逻辑
function initChart() {
    const ctx = document.getElementById('dataChart').getContext('2d');
    
    // 销毁旧图表实例
    if(dataChart) {
        dataChart.destroy();
    }

    // 获取排序后的数据
    const sortedDates = Array.from(dataCache.keys()).sort((a, b) => 
        new Date(a) - new Date(b)
    );
    
    dataChart = new Chart(ctx, {
        type: 'line',
        data: {
            labels: sortedDates,
            datasets: [{
                label: '每日分数',
                data: sortedDates.map(date => dataCache.get(date)),
                borderColor: '#007bff',
                tension: 0.4,
                fill: false
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false, // 关闭宽高比锁定
            plugins: {
                legend: { position: 'top' }
            },
            scales: {
                y: {
                    beginAtZero: true,
                    max: 1000,
                    ticks: { stepSize: 200 }
                },
                x: {
                    ticks: {
                        autoSkip: true,
                        maxTicksLimit: 10,
                        callback: function(value) {
                            return this.getLabelForValue(value).substring(5);
                        }
                    }
                }
            }
        }
    });
}

// 修改后的更新显示函数
function updateDisplay() {
    // ...原有数据更新逻辑保持不变...
    
    // 更新图表
    initChart();
}
</script>
</body>
</html>
