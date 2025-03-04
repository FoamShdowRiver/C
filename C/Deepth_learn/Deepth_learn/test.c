#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////		k>0,n*Pow(n,k-1)
////Pow 	k==0,1
////		k<0,1.0/Pow(n,-k)
//double Pow(int n, int k)//1234
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//
//	scanf("%d %d", &n, &k);
//
//	double sum = Pow(n, k);
//
//	printf("%lf\n", sum);
//
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换（数组一样大）

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };

	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//内容交换
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	//打印两个数组的内容
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n"); 
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}