
//两个int（32）位整数m和n的二进制表达中，有多少个位（bit）不同
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int count_diff_bit(int m,int n)//我写的
{
	int i = 0;
	int count = 0;//计数
	
	for(i = 0;i < 32;i++)
	{
		if((m>>i) & 1) != (n>>i) & 1))
		{
			count++;
		}
	}
	
	return count;
}



int count_diff_bit(int m,int n)//我写的
{
	int num = n ^ m;
	int count = 0;//计数
	
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	
	return count;
}

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d",&m,&n);
	
	int ret = count_diff_bit(m,n);
	
	printf("不同的位数有 = %d\n", ret);
	return 0;
}