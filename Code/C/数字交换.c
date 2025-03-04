//交换两个数的值

#include <stdio.h>

//利用第三个变量
int main()
{
	int a=3;
	int b=5;
	
	printf("a=%d,b=%d\n",a,b);
	
	int tmp=a;
	a=b;
	b=a;
	
	printf("a=%d,b=%d\n",a,b);
	
	return 0；
}

//不利用第三变量
//加减运算
int main()//有bug
{
	int a=3;
	int b=5;
	
	printf("a=%d,b=%d\n",a,b);
	
	a=a+b;//当交换数字过大时，相加会出现溢出问题
	b=a-b;
	a=a-b;
	
	printf("a=%d,b=%d\n",a,b);
	
	return 0；
}

//利用位异或操作符 - ^ 
// 3^3 =0  俩个相同异或为0
// 3^0 =3  0和非0异或为非0本身
// 3^3^5=5 3^5^3=5 得出异或操作符具有交换律
//特点：只适用整型，有很大的局限性，可读性不高
int main()
{
	int a=3;
	int b=5;
	
	printf("a=%d,b=%d\n",a,b);
	
	a=a^b;//a=3^5
	b=a^b;//3^5 ^ 5 -- b=3
	a=a^b;//3^5 ^ 3 -- a=5
	
	printf("a=%d,b=%d\n",a,b);
	
	return 0；
}