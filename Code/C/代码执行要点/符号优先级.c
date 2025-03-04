#include <stdio.>

int main()
{
	int a,b,c;
	
	a=5;
	c=++a;//a先自增，在赋值给c
	b=++c, c++, ++a, a++;
	//逗号表达式优先级最低，所以先赋值（c自增后把值赋给b),再做后面的运算
	b += a++ + c;//先做加法运算，此时a=8,c=8,b=7,结果为b=23,a=9,c=8
	
	printf("%d %d %d\n",a,b,c);

	return 0;
}