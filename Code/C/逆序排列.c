 #include <stdio.h>
 #include <string.h>
 
 //方法一-Written by me&ai
 void Reverse1(char* arr,int n)
{
    if (n <= 1) 
	{
        return; // 递归终止条件
    }

    // 交换首尾字符
    char tmp = *arr;
    *arr = *(arr + n - 1);
    *(arr + n - 1) = tmp;

    // 递归处理中间部分
    Reverse1(arr + 1, n - 2);//前面arr+1,加的n也要多减一个
}
//方法二-Written by me
void Reverse1(char* arr, int n)
{
    if (n > 1) {//一定要先判断条件，再执行语句
        // 交换首尾字符
        char tmp = *arr;
        *arr = *(arr + n - 1);
        *(arr + n - 1) = tmp;
        // 递归处理中间部分
        Reverse1(arr + 1, n - 2);
    }
}
//方法三
void Reverse3(char* arr)
{
	char tmp = *arr;
	int len = strlen(arr);

	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';

	if(strlen(arr + 1)>=2)
		Reverse3(arr + 1);

	*(arr + len - 1) = tmp;
}
//方法四-这个代码是存在潜在问题的，如果字符串长度是偶数的时候，会出现问题--最后两个字符会重新交换回
//交换的在前面，判断的在后面，即使判断条件已经达到，程序还是会执行一次
//说明，写代码要仔细一点，要多测试几次
void Reverse4(char arr[], int left, int right)
{
    char tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;

    if (left < right)
        Reverse4(arr, left + 1, right - 1);
}
//改正的版本
void Reverse4(char arr[], int left, int right)
{
    if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		Reverse4(arr, left + 1, right - 1);
	}
}


int main()
{
	char arr[] = "abcdef";//[a b c d e f \0]
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	Reverse1(arr, sz - 1);
	// Reverse2(arr, sz - 1);
	// Reverse3(arr);
	
	// int left = 0;
    // int right = strlen(arr) - 1;//别忘记加库函数的头文件 string.h
	// Reverse4(arr, left, right);

	printf("%s\n", arr);

	return 0;
}
