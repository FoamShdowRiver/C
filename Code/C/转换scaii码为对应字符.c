#include <stdio.h>

int main()
{
	int arr[] = { 73,80,97,49,32,100 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr) - 计算的是数字的总大小，单位是字节
	//sizeof(arr[0]) - 计算的是数组元素的大小

	while (i < sz)
	{
		printf("%c", arr[i++]);
	}
	return 0;
}