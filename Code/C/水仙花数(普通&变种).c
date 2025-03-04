#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//水仙花数
//求出0~100000之间的所有“水仙花数
//"水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身
//如：153=1^3+5^3+3^3,则153是一个水仙花数
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//判断i是否为水仙花数
		//1.判断n是几位数 -> n
		int n = 1;//任何一个数至少是一位数
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2.得到i的每一位，计算他的n次方之和
		tmp = i;
		while (tmp)
		{
			// sum += (int)pow(tmp % 10, n);
			sum += pow(tmp % 10, n);//精度丢失不造成影响
			tmp /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}



//变种水仙花数（0-10000）
//把任意的数字，从中间拆分成两个数字
//比如 1461 拆成 （1和461）（14和61）（146和1)
//如果所有拆分之后的乘积等于自身，则是一个 Lily Number.
//例如：655=6*55+65*5  1461=1*461+14*41+146*1
//12345
//1			=>12345/10000	|2345		=>12345%10000
//12		=>12345/1000	|345		=>12345%1000
//123		=>12345/100		|45			=>12345%100
//1234		=>12345/10		|5			=>12345%10
int main()
{
	int k = 0;
	int i = 0;
	for (i = 10000; i < 100000; i++)
	{
		int j = 0;
		int sum = 0;
	
		for (j = 1; j <= 4; j++)
		{
			//int x = i / (int)pow(10, j);//pow函数返回的是double类型，需要强制转换
			//int y = i % (int)pow(10, j);
			//sum += x * y;
			//可以简化成:
			int k = (int)pow(10, j);
			sum += (i / k) * (i % k);
		}
		if (sum == i)
		{
			printf("%d is Lily Number\n", i);
		}
	}
	return 0;
}