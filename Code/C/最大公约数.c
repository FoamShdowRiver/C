#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d%d", &a, &b);

	//while (a%b)
	//{
	//	int c = a % b;
	//	a = b;
	//	b = c;
	//}
	if(a < b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}

	while (c = a % b)
	{
		a = b;
		b = c;
	}

	printf("最大公约数为：%d\n", b);

	return 0;
}

32 12
12 8
8 4

//利用 for
#include <stdio.h>

int main()
{
    int n1, n2, i, gcd;

    printf("输入两个正整数，以空格分隔: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // 判断 i 是否为最大公约数
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("%d 和 %d 的最大公约数是 %d", n1, n2, gcd);

    return 0;
} 

//利用 while
#include <stdio.h>
int main()
{
    int n1, n2;

    printf("输入两个数，以空格分隔: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}

//利用递归
#include <stdio.h>
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
	//return b != 0 ? gcd(b, a % b) : a;
}
int main()
{
    int num1, num2, result;
    printf("请输入两个整数");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("最小公倍数为%d", result);
    return 0;
}