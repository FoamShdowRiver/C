#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//断言：判断src是否不为空指针，如果表达式为假就报错
//	assert(src != NULL);
//
//	while (*dest++ = *src++)//字符内容拷贝，把src拷贝到dest
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, const char* src)//利用const防止拷贝变量错误
//{
//	//断言：判断src是否不为空指针，如果表达式为假就报错
//	assert(src != NULL);
//
//	//字符内容拷贝，把src拷贝到dest
//	while (*src++ = *dest++)//因为使用的const,src不能改变，编译器直接报错
//	{
//		;
//	}
//}

//为什么返回char*呢？
//是为了实习链式访问，这个时候，这个函数的返回值就可以作为其他函数的参数
//strcpy 函数返回的是目标空间的起始地址
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//断言：判断src是否不为空指针，如果表达式为假就报错
	assert(src != NULL);//assert(src);

	while (*dest++ = *src++)//字符内容拷贝，把src拷贝到dest
		;
	//return dest;//--err
	return (ret);
}


int main()
{
	char arr1[20] = "XXXXXXXXXXXXXXXXXXX";
	char arr2[] = "hello bit";

	char* p = NULL;
	//strcpy在拷贝字符串的时候，会把源字符串中的'\0'也拷贝过去
	//my_strcpy(arr1, p);
	//my_strcpy(arr1, arr2);

	//printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2));//也就是strcpy
	//printf("%s\n", strcpy(arr1, arr2));

	return 0;
}

//求字符串长度

int my_strlen(const char* str)
{
	int count = 0;
	assert(str);

	while (str != '\0')
	{
		count++;
		str++;
	}
	
	return count;
}