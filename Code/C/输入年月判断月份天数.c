
//获得月份天数
#include <stdio.h>

int is_leap_year(int y)
{
	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
}
//C语言中，0表示假，非0表示真
//逻辑操作符 && || ！的结果，如果是真，就是1，如果是假就是0
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	while (scanf("%d%d", &y, &m) == 2)//输入不等于两个字符结束
	{
		int d = days[m];
		
		if ((is_leap_year(y) == 1) && (m == 2))//is_leap_year(y) && (m==2)
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}
 
 //无需使用swtich 那一套