#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;
	int flag = 1;

	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i-1; j++)//j<=i/2
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			printf("%d是素数\n", i);
	}

	return 0;
}

int main()
{
	int i = 0;
	int j = 0;
	//flag = 1;

	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				//flag = 0;
				break;
			}
		}
		if (j > sqrt(i))//flag
			printf("%d是素数\n", i);
	}

	return 0;
}

//模块化
int is_prime(int n)
{
	int j = 0;

	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i = 0;

	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
			printf("%d是素数\n", i);
	}

	return 0;
}