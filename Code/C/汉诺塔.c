#include <stdio.h>

void Hanoi(int n,int a, int b, int c)
{
	if (1 == n)
	{
		printf("把 盘1 从%c->%c\n", a, c);
		return 0;
	}
	Hanoi(n - 1, a, c, b);
	printf("把 盘%d 从%c->%c\n", n, a, c);
	Hanoi(n - 1, b, a, c);
}

int main()
{
	Hanoi(3, 'A', 'B', 'C');

	return 0;
}