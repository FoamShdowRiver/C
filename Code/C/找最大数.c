#include <stdio.h>

int main()
{
	int arr[4] = { 0 };
	//0 1 2 3
	int i = 0;
	//输入4个整数
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	//找最大值
	int max = arr[0];// max =0;
	i = 1;//i=0
	while(i < 4)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		i++;
	}
	printf("max=%d\n", max);

	return 0;
}

int main()
{
	int n = 0;
	int i = 1;
	int max = 0;

	//输入4个整数
	scanf("%d", &max);
	while (i < 4)
	{
		scanf("%d", &n);
		if (max < n)//找最大值
		{
			max = n;
		}
		i++;
	}

	printf("max=%d\n", max);

	return 0;
}