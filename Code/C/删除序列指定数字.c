#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//我自己打的
int main()
{
	int k = 2;
	int arr[6] = { 1,2,6,3,8,0 };
	int tmp = -1;
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (k == arr[i])
		{
			tmp = i;
			break;
		}
	}

	if (tmp != -1)
	{
		for (i = tmp; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		n--;
	}
	

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int main()
{
	int arr[10] = { 1,4,2,39,34,224,24,3,7,10 };//保存一行数组
	int n = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int del = 0;
	scanf("%d", &del);//接收删除的值

	int j = 0;//作为下标锁定位置，用来存放不删除的数据
	for (j = 0; i < n; i++);
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[j];
		}
	}
	//输出
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
