#include <stdio.h>

//在有序数组中查找某个数字n 用二分查找
int main()
{
	int arr[7] = { 1,4,12,26,33,74,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int number = 0;

	printf("请输入要查找的数：");
	scanf("%d", &number);

	while(left<=right)
	{
		//int mid = (right + left) / 2;//这种写法，当right和left相加后，可能会有溢出的bug
		int mid = (right - left) / 2 + left;

		if (arr[mid] < number)
		{
			left = mid + 1;
		}
		else if(arr[mid] > number)
		{
			right = mid - 1;
		}
		else
		{
			printf("number的下标为：%d\n", mid);
			break;//如果不加的话，就是死循环，选择语句会一直printf
		}
	}

	if (left > right)//有找到的时候，也有没有找到的时候
	{
		printf("没找到\n");
	}
	return 0;
}