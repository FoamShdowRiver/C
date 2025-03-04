#include <stdio.h>
#include <ctype.h>

//字符大小写转换
int main()
{
	char ch = 0;
	//scanf读取成功的时候，返回的是读取的个数
	//scanf读取失败的时候，返回的是EOF(end of file)
	while (scanf("%c", &ch) == 1)//scanf("%c", &ch) != EOF
	{
		// if (ch >= 'a' && ch <= 'z')
		// {
			// printf("%c\n", ch - 32);
		// }
		// else if (ch >= 'A' && ch <= 'Z')
		// {
			// printf("%c\n", ch + 32);
		// }
		// else
		// {
			// printf("%c\n", ch);
		// }

		//库函数中有判断大小写字母的函数,要使用库函数-ctype.h
		//islower()  isupper()
		//有转换大小写字母的函数
		//tolower() toupper()

		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
		else if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}

		getchar();
	}
	return 0;
}