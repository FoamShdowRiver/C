#include <stdio.h>

int main()
{
	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}

	return 0;
}
}
int main()
{
	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}

	return 0;
}

int main()
{
	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;

//模块化
int is_leap_year(int y)//函数功能要单一
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year)
		{
			printf("%d ", year);
		}
	}
	return 0;
}