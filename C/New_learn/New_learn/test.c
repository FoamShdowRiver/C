#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("%c,%c\n", '\130', '\x63');
//	printf("%d\n", '\x20');
//
//	return 0;
//}

//int main()
//{
//	int count=0;
//	for (int i = 5; i < 100; i += 10)
//	{
//		if (i % 3 == 0)
//		{
//			count++;
//			printf("%d\t", i);
//		}
//	}
//
//	printf("\n\n%d\n", count);
//	
//	return 0;
//}

//int main()
//{
//	int c = 7 % -2;
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//#include "add.h"
//
//#pragma comment(lib,"Pragram.lib")
//
//int main()
//{
//	printf("%d\n", Add(3, 6));
//
//	return;
//}
//
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//	
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//
//	return 0;
//}

//���ַ���
//
//int Strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	return 1 + Strlen(++arr);
//}
//
//int Strlen1(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + Strlen1(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello would";
//	
//	printf("%d\n", Strlen1(arr));
//
//	return 0;
//}

//�׳�

//

//��ŵ��
//void Hanoi(int n,int a, int b, int c)
//{
//	if (1 == n)
//	{
//		printf("�� ��1 ��%c->%c\n", a, c);
//		return 0;
//	}
//	Hanoi(n - 1, a, c, b);
//	printf("�� ��%d ��%c->%c\n", n, a, c);
//	Hanoi(n - 1, b, a, c);
//}
//
//int main()
//{
//	Hanoi(3, 'A', 'B', 'C');
//
//	return 0;
//}

//���Լ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d%d", &a, &b);
//
//	//while (a%b)
//	//{
//	//	int c = a % b;
//	//	a = b;
//	//	b = c;
//	//}
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("���Լ��Ϊ��%d\n", b);
//
//	return 0;
//}
// 
// 

//��������
// 
void Reverse(char* arr,int n)
{
    if (n <= 1) {
        return; // �ݹ���ֹ����
    }

    // ������β�ַ�
    char tmp = *arr;
    *arr = *(arr + n - 1);
    *(arr + n - 1) = tmp;

    // �ݹ鴦���м䲿��
    Reverse(arr + 1, n - 2);//ǰ��arr+1,�ӵ�nҲҪ���һ��
}

void Reverse1(char* arr, int n)
{
    if (n <= 1) {
        return; // �ݹ���ֹ����
    }

    // ������β�ַ�
    char tmp = *arr;
    *arr = *(arr + n - 1);
    *(arr + n - 1) = tmp;

    // �ݹ鴦���м䲿��
    Reverse1(arr + 1, n - 2);//ǰ��arr+1,�ӵ�nҲҪ���һ��
}
//
void Reverse1(char* arr, int n)
{
    if (n > 1) {
        // ������β�ַ�
        char tmp = *arr;
        *arr = *(arr + n - 1);
        *(arr + n - 1) = tmp;
        // �ݹ鴦���м䲿��
        Reverse1(arr + 1, n - 2);
    }
}

int main()
{
    char arr[] = "abcdefg";
    char arr1[] = "abcdefg";
	int sz = sizeof(arr) / sizeof(arr[0]);
	//int sz=strlen(arr)-1;//�����Ǽӿ⺯����ͷ�ļ� string.h

    Reverse(arr, sz - 1);//sz
    Reverse1(arr1, sz - 1);//sz

    printf("%s\n", arr);
    printf("%s\n", arr1);

	return 0;
}
//#include <string.h>
//
//void Reverse(char* arr)
//{
//	char tmp = *arr;
//	int len = strlen(arr);
//
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//
//	if(strlen(arr + 1)>=2)
//		Reverse(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	Reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//void reverse(char arr[], int left, int right)
//{
//    char tmp = arr[left];
//    arr[left] = arr[right];
//    arr[right] = tmp;
//
//    if (left < right)
//        reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//    char arr[] = "abcdef";//[a b c d e f \0]
//    int left = 0;
//    int right = strlen(arr) - 1;
//
//    reverse(arr, left, right);
//
//    printf("%s\n", arr);
//
//    return 0;
//}