#include <stdio.h>

int Strlen(char* arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	return 1 + Strlen(++arr);
}

int Strlen1(char* arr)
{
	if (*arr != '\0')
		return 1 + Strlen1(arr + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello would";
	
	printf("%d\n", Strlen1(arr));

	return 0;
}