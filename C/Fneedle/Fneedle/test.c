#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p1, p2, p3;// == int *p1,p2,p3;  <> int *p1,*p2,*p3;
//
//	printf("%d\n", a++);
//	return 0;
//}

////ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[20];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","121421223" };
//	//��ӡ
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//
//	return 0;
//}

//int main()
//{
//	int odd = 0;
//
//	scanf("%d", &odd);
//
//	if (odd % 2)
//	{
//		printf("%d��һ������\n", odd);
//	}
//	else
//	{
//		printf("%d����һ������\n", odd);
//	}
//
//	return 0;
//}
// 
//int main()
//{
//	int odd = 0;
//
//	while (odd++ < 100)
//	{
//		if (odd % 2)
//		{
//			printf("%d��һ������\n", odd);
//		}
//		else
//		{
//			printf("%d����һ������\n", odd);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	
//	while (i++ < 4)
//	{
//		switch (i)
//		{
//		case 1:
//			printf("%d ", i);
//			
//		case 2:
//			printf("%d ", i);
//			
//		default:
//			printf("%d\n", i);
//			break;
//		case 3:
//			printf("%d ", i);
//			
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//
//
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//ת��scaii��Ϊ��Ӧ�ַ������
//int main()
//{
//	int arr[] = { 73,80,97,49,32,100 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr) - ����������ֵ��ܴ�С����λ���ֽ�
//	//sizeof(arr[0]) - �����������Ԫ�صĴ�С
//
//	while (i < sz)
//	{
//		printf("%c", arr[i++]);
//	}
//	return 0;
//}

//����������ڣ��������շֱ����
//1990<=year<=2015,1<=month<=12,1<=day<=30
//int main()
//{
//	int birth = 0;
//	
//	scanf("%d", &birth);//19900811
//
//	printf("year=%d\nmonth=%d\nday=%d\n", birth / 10000, birth % 1000 / 100, birth % 10000%100);
//
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%4d%2d%2d", &year, &month, &day);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//
//	return 0;
//}


//ѧ����Ϣ�������

//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d,%f,%f,%f", &id, &c, &math, &eng);
//
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f\n", id, c, math, eng);
//
//	return 0;
//}

////printf�ķ���ֵ�����printf()���ý����ķ���ֵ
//int main()
//{
//	int n = printf("hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}

//ʹ��printf���c��c++����������
//printf("Hello World!\n");
//cout << "Hello Word!" << end
//
//int main()
//{
//	printf("printf(\"Hello World!\\n\");\n");
//	printf("cout << \"Hello Word!\" << endl;\n");
//
//	return 0;
//}

//�������
//
//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	//����4������
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//�����ֵ
//	int max = arr[0];// max =0;
//	i = 1;//i=0
//	while(i < 4)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("max=%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int max = 0;
//
//	//����4������
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (max < n)//�����ֵ
//		{
//			max = n;
//		}
//		i++;
//	}
//
//	printf("max=%d\n", max);
//
//	return 0;
//}

////����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	int n = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		n++;
//	}
//
//	printf("%d", n);
//	return 0;
//}

int main()
{
	char* a[2] = { "one","two" }, **p = a;
	printf("%s,", *(p++) + 1);
	printf("%c\n", **p - 1);
	
	int b = 10;
	int* p1 = &b;
	*p1 = 2;
	int c = 100;
	int **p2 = c;

	printf("%d,%p,%p\n", b, &b, p1);
	printf("%d %p\n", p2, p2);

	return 0;
}

////n�Ľ׳�
//
//int main()
//{
//	int n = 0;
//	long sum = 1L;
//	long sum_n = 0L;
//	int i = 0;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		sum_n += sum;
//	}
//
//	printf("n!=%d\n", sum);
//	printf("n!=%d\n", sum_n);
//
//	return 0;
//}

////�����������в���ĳ������n �ö��ֲ���
//int main()
//{
//	int arr[7] = { 1,4,12,26,33,74,89 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int number = 0;
//
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &number);
//
//	while(left<=right)
//	{
//		//int mid = (right + left) / 2;//����д������right��left��Ӻ󣬿��ܻ��������bug
//		int mid = (right - left) / 2 + left;
//
//		if (arr[mid] < number)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > number)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("number���±�Ϊ��%d\n", mid);
//			break;//������ӵĻ���������ѭ����ѡ������һֱprintf
//		}
//	}
//
//	if (left > right)//���ҵ���ʱ��Ҳ��û���ҵ���ʱ��
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//���˴�ӡ�ַ�
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	srand();
//	int left = 0;
//	int right = strlen(arr2) - 1;//sizeof(arr2)/sizeof(arr2[0])--->��Ϊ��arr2[],���Ի�����һ��Ԫ��'\0',���ǵ���������ʹ��strlen()�������
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ������⺯��Ҫʹ��stdlib.h
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//����
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i-1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d������\n", i);
//	}
//
//	return 0;
//}

// 
// 
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d������\n", i);
//	}
//
//	return 0;
//}
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//			printf("%d������\n", i);
//	}
//
//	return 0;
//}

//����
//int main()
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//}
//int main()
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//int is_leap_year(int y)//��������Ҫ��һ
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}