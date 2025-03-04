#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//		k>0,n*Pow(n,k-1)
//Pow 	k==0,1
//		k<0,1.0/Pow(n,-k)
double Pow(int n, int k)//1234
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	double sum = Pow(n, k);

	printf("%lf\n", sum);

	return 0;
}