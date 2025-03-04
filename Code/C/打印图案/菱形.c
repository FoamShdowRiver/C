
//菱形
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
	int n = 0;

	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)//上半部分
	{
		for (j = 1; j <= n-i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (i = n-1; i > 0; i--)//下半部分
	{
		for (j = 1; j <= n-i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
//行数为主
int main()
{
	int n = 0;

	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)//上半部分
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (i = 0; i < n-1; i++)//下半部分
	{
		for (j = 0; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

//空心菱形
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//数字菱形
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    return 0;
}
