#include <stdio.h>

int main()
{
	int n = 0;
	long sum = 1L;
	long sum_n = 0L;
	int i = 0;

	scanf("%d", &n);

	// 如果输入是负数，显示错误
    if (n < 0)
	{
		printf("Error! 负数没有阶乘jiechen");
		return 0;
	}
        
	for (i = 1; i <= n; i++)
	{
		sum *= i;
		sum_n += sum;
	}

	printf("n!=%d\n", sum);
	printf("n!=%d\n", sum_n);

	return 0;
}

#include <stdio.h>

int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n - 1);
    else return 1;

 }

int main()
{
    int m;
  
    printf("输入一个正整数m：");
    scanf_s("%d", &m);

    printf("m的阶乘是%d", factorial(m));
   
    return 0;
}
// bug 问题
int main()
{
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ret *= j;//
		}	
		sum += ret;
	}

	printf("%d", sum);
	return 0;
}
//输入 3 sum=15 应该等于9来着，为什么？

int main()
{
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;

	for (i = 1; i <= 3; i++)
	{
		ret = 1;//问题在这里，没有重新给ret赋值
		for (j = 1; j <= i; j++)
		{
			ret *= j;//重新循环时，ret没有从1开始乘，而是累计之前的值继续乘，就产生了bug
		}	
		sum += ret;
	}

	printf("%d", sum);
	return 0;
}
