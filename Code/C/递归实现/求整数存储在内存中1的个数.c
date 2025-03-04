#define _CRT_SECURE_NO_WARNINGS 1

//求一个整数存储在内存中的二进制中1的个数。
//方法1
#include <stdio.h>
int main()
{
	int num = 10;
	int count = 0;//计数
	while (num)
	{
		if (num % 2 == 1)//二进制模除2判断位数，拿到1
			count++;
		num = num / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
//思考这样的实现方式有没有问题？
// 如果 num 里放一个负数，比如-1,循环走到 -1/2 ，num 等于0
// 原本 -1 在内存中存放 11111111 11111111 11111111 11111111 
// 应该输出32，结果输出为0
// 可以改为 unsigned int num，此时 -1 在内存中存储的就是非常大的正数，返回32


//方法2：
#include <stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;//计数
	for (i = 0; i < 32; i++)
	{
		if (num & (1 << i))//把1左移多少位，与匹配是否有相等的1与之对应
			count++;  //(1 & (num >> 1)) == 1
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
//思考还能不能更加优化，这里必须循环32次的。

//方法3：
#include <stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;//计数
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
//这种方式是不是很好？达到了优化的效果，但是难以想到
//num = num & (num -1) //num=15
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n => 0
//每进行一次位与运算，右边的1就去掉一个


//扩展
//如果要判断一个数是不是2的n次方
//2^1 10
//2^2 100
//2^3 1000 //发现无论是2的几次方都只有一个1
if(n&(n-1)==0 && n != 1)//执行一次，判断是否没有1
{
	printf("%d是2的n次方\n",n);
}