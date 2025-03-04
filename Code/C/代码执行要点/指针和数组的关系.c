#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	printf("\n");

	for (i = 0; i < sz; i++)
	{
		printf("%p => %d == %d <> %d\n", &*(arr + i), *(arr + i), *(p + i), *p + i);
	}
	return 0;
}