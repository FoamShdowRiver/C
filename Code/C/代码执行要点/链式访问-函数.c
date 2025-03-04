#include <stdio.h>
#include <string.h>

//printf的返回值，输出printf()调用结果后的返回值
int main()
{
	int n = printf("hello world!");
	printf("\n%d\n", n);
	return 0;
}

int main()
{
    printf("%d", printf("%d", printf("%d", 43)));
    //注：printf函数的返回值是打印在屏幕上字符的个数
	printf("%d\n", ret);
	return 0;
}


int main()
{
    char arr[20] = "hello";
	int ret = strlen(strcat(arr,"bit"));//这里介绍一下strlen函数
	
	printf("%d\n", ret);
	return 0;
}