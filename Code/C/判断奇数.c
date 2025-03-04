#include <stdio.h>

int main()
{
	int odd = 0;

	scanf("%d", &odd);

	if (odd % 2)
	{
		printf("%d是一个奇数\n", odd);
	}
	else
	{
		printf("%d不是一个奇数\n", odd);
	}
	}

	return 0;
}
 
// int main()
// {
	// int odd = 0;

	// while (odd++ < 100)
	// {
		// if (odd % 2)
		// {
			// printf("%d是一个奇数\n", odd);
		// }
		// else
		// {
			// printf("%d不是一个奇数\n", odd);
		// }
	// }

	// return 0;
// }

#include <stdio.h>


// 判断一个数是否为奇数的函数
int isOdd(int num) {
    return num % 2 != 0;
}

int main()
{
    int number = 0;
    
    printf("请输入一个整数: ");
    scanf("%d", &number);
    
    if (isOdd(number))
    {
        printf("%d是一个奇数\n", number);
    }
    else
    {
        printf("%d不是一个奇数\n", number);
    }

    return 0;
}