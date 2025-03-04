#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include <stdbool.h>
#include <assert.h>

int main()
{
	int n = 0;

	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)//上半部分
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (i = 0; i < n - 1; i++)//下半部分
	{
		for (j = 0; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)//上半部分
//	{
//		for (j = 1; j <= n-i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	for (i = n-1; i > 0; i--)//下半部分
//	{
//		for (j = 1; j <= n-i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}






//水仙花数
//求出0~100000之间的所有“水仙花数
//"水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身
//如：153=1^3+5^3+3^3,则153是一个水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//判断n是几位数 -> n
//		int n = 1;//任何一个数至少是一位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i的每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int n;
//
//	scanf("%d %d", &a, &n);// 2 5
//
//	int sum = 0;
//	double k = a * (pow(10, n) - 1) / 9;
//
//	while (k > 0)
//	{
//		sum += (int)k;
//		k /= 10;
//	}
//	printf("sum=%d", sum);
//
//	return 0;
//}