#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>

//判断是否是字母
int main()
{
	char ch = 0;

	while (scanf("%c", &ch) == 1)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			printf("%c is an alphabet.\n", ch);
		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
	}
	getchar();

	return 0;
}

int main()
{
	char ch = 0;
	//%c前面加空格，作用是跳过下一个字符之前的所有空白字符
	while (scanf(" %c", &ch) == 1)
	{
		if (isalpha(ch))//isalpha函数判断一个字符是不是字母
		{
			printf("%c is an alphabet.\n", ch);
		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
	}

	return 0;
}