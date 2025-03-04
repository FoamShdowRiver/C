#include <stdio.h>

int print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
	
}

int main()
{
	unsigned int num = 1234;
	print(num);

	return 0;
}