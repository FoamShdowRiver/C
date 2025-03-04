
//用户输入两个数，求这两个数的最小公倍数
#include <stdio.h>

int main()
{
    int i=0;
	int j=0; //最小公倍数
	int a=0;
	int b=0;

    printf("输入两个正整数:");
    scanf("%d%d",&a,&b);

    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)//求最大公约数
        {
            j = i;
            break;
        }
    }
    printf("%d和%d的最小公倍数是%d\n",a,b,j);

    return 0;
}

#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;

    printf("输入两个正整数:");
    scanf("%d%d",&a,&b);

	int lcm=0;
	int tmp_a=a;
	int tmp_b=b;
	
	if(a<b)
	{
		a=a^b;
		b=a^b;
		a=a^b;
	}

	while(c=a%b)
	{
		a=b;
		b=c
	}
	
	lcm=(tmp_a*tmp_b)/b;//(a*b)/(a和b的最大公约数)
	
	printf("%d和%d的最小公倍数是%d\n",a,b,j);
}

#include <stdio.h>

int main()
{
    int n1, n2, minMultiple;
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);

    // 判断两数较大的值，并赋值给 minMultiple
    minMultiple = (n1>n2) ? n1 : n2;

    // 条件为 true
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("%d 和 %d 的最小公倍数为 %d", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}

#include<stdio.h>
int main(void)
{
	int a, b, i = 1;
	printf("请输入两个正整数：");
	// scanf_s("%d %d", &a, &b);
	while (a * i % b!=0)
		i++;
	printf("最小公倍数是：%d", a * i);

	return 0;
}

#include <stdio.h>
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int num1, num2, result;
    printf("请输入两个整数");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("最小公倍数为%d", (num1 * num2) / result);
    return 0;
}