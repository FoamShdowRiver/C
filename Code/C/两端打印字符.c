#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	srand();
	int left = 0;
	int right = strlen(arr2) - 1;//sizeof(arr2)/sizeof(arr2[0])
	//因为是arr2[],所以会多包括一个元素'\0',考虑到这个情况，所以使用strlen()函数最好

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠一秒
		system("cls");//清空屏幕，这个库函数要使用stdlib.h
		left++;
		right--;
	}

	return 0;
}