#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include <stdbool.h>

#include <assert.h>



////求字符串长度
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//
//	while (str != '\0')
//	{
//		count++;
//		str++;
//	}
//	
//	return count;
//}
//






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
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//断言：判断src是否不为空指针，如果表达式为假就报错
//	assert(src != NULL);//assert(src)
//
//	while (*dest++ = *src++)//字符内容拷贝，把src拷贝到dest
//		;
//	//return dest;//--err
//	return (ret);
//}
//
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	char* p = NULL;
//	//strcpy在拷贝字符串的时候，会把源字符串中的'\0'也拷贝过去
//	//my_strcpy(arr1, p);
//	//my_strcpy(arr1, arr2);
//
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//也就是strcpy
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 3; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}	
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}







//bool ishuiwen(int s)
//{
//	int num = 0;
//
//	if ((s < 0) || (s % 10 == 0 && s != 0))
//	{
//		return false;
//	}
//
//	while (s > num)
//	{
//		num = num * 10 + s % 10;
//		s /= 10;
//	}
//
//	return s == num || s == num / 10;
//}
//
//bool isPalindrome(int x) {
//	// 处理特殊情况：负数或末尾为0的非零数
//	if (x < 0 || (x % 10 == 0 && x != 0)) {
//		return false;
//	}
//
//	int reverted = 0;
//	// 当原始数字大于反转后的数字时继续处理
//	while (x > reverted) {
//		reverted = reverted * 10 + x % 10;
//		x /= 10;
//	}
//
//	// 偶数位直接比较，奇数位去掉中间位比较
//	return x == reverted || x == reverted / 10;
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	if (isPalindrome(n))
//		printf("%d是回文\n", n);
//	else
//		printf("%d不是回文数\n", n);
//
//	return 0;
//}






//#include <stdbool.h>
//
//bool isPalindrome(int x) {
//	// 处理特殊情况：负数或末尾为0的非零数
//	if (x < 0 || (x % 10 == 0 && x != 0)) {
//		return false;
//	}
//
//	int reverted = 0;
//	// 当原始数字大于反转后的数字时继续处理
//	while (x > reverted) {
//		reverted = reverted * 10 + x % 10;
//		x /= 10;
//	}
//
//	// 偶数位直接比较，奇数位去掉中间位比较
//	return x == reverted || x == reverted / 10;
//}
//
//int fanzhuan(int n)
//{
//	int s = 0;
//	while (n != 0)
//	{
//		int s1 = n % 10;//每次都得到最低位上的数字
//		s = s * 10 + s1;
//		n = n / 10;//递归降位
//	}
//	return s;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (isPalindrome)
//	{
//		printf("%d是回文数\n",a);
//	}
//	else
//	{
//		printf("%d不是回文数\n", a);
//
//	}
//	return 0;
//}

////获得月份天数
//
//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	while (scanf("%d%d", &y, &m) == 2)//输入不等于两个字符结束
//	{
//		int d = days[m];
//		if ((is_leap_year(y) == 1) && (m == 2))//is_leap_year(y) && (m==2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}

//无需使用swtich 那一套
//
//int main() {
//    int n = 6; // 控制心形的大小
//
//    // 上半部分（两个半圆）
//    for (int i = n / 2; i <= n; i += 2) {
//        // 打印左上角的空格
//        for (int j = 1; j < n - i; j += 2) {
//            printf(" ");
//        }
//        // 打印左上角的边框
//        printf("*");
//        // 打印左上角的空心部分
//        for (int j = 1; j < i; j++) {
//            printf(" ");
//        }
//        // 打印中间连接的星号
//        printf("*");
//        // 打印右上角的空格
//        for (int j = 1; j < n - i; j++) {
//            printf(" ");
//        }
//        // 打印右上角的边框
//        printf("*");
//        // 打印右上角的空心部分
//        for (int j = 1; j < i; j++) {
//            printf(" ");
//        }
//        // 打印右边的星号
//        printf("*");
//        printf("\n");
//    }
//
//    // 下半部分（倒三角形）
//    for (int i = n; i >= 1; i--) {
//        // 打印前面的空格
//        for (int j = i; j < n; j++) {
//            printf(" ");
//        }
//        // 打印左边的星号
//        printf("*");
//        // 打印中间的空心部分
//        for (int j = 1; j < (i * 2) - 1; j++) {
//            printf(" ");
//        }
//        // 打印右边的星号
//        if (i != 1) { // 最后一行只有一个星号
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//
//全局变量，静态变量都是放在静态区。
//全局变量，静态变量不初始化的时候默认会被初始化为零。
//局部变量是放在栈区，不初始化默认值是随机值。 
//
//int i;
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//	//当int 与 unsigned int 比较，会进行整型提升，-1就会被理解为一个非常大的正数
//	if (i > sizeof(i)) //所以此时 -1 > 4 的结果是 真，printf 输出 >
//	{
//		printf(">\n");//right
//	}
//	else
//	{
//		printf("<\n");
//	}
//}

//获取一个整数二进制序列中所有的偶数位和奇数位。，分别打印出两个二进制序列。 
//
//10
//00000000000000000000000000000001010
//                        ...87654321  
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//
//	scanf("%d", &num);
//	//获取奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

////两个int（32）位整数m和n的二进制表达中，有多少个位（bit）不同
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//
//	int num = n ^ m;
//	int count = 0;//计数
//
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//
//	printf("不同的位数有 = %d\n", count);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数。
//方法1
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)//二进制模除2判断位数
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//思考这样的实现方式有没有问题？
//方法2：
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))//把1左移多少位，与匹配是否有相等的1与之对应
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//思考还能不能更加优化，这里必须循环32次的。
//方法3：
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//这种方式是不是很好？达到了优化的效果，但是难以想到

////迭代法（高效）
//int climbStairs(int n) {
//    if (n <= 0) return 0;
//    if (n <= 2) return n;
//    if (n == 3) return 4;
//
//    int a = 1, b = 2, c = 4, d;
//    for (int i = 4; i <= n; i++) {
//        d = a + b + c;
//        a = b;
//        b = c;
//        c = d;
//    }
//    return c;
//}
//
//int main() {
//    int n;
//    printf("请输入台阶数n: ");
//    scanf("%d", &n);
//    //printf("走到第 %d 阶的方法数是: %d\n", n, countWays(n));
//    printf("走到第 %d 阶的方法数是: %d\n", n, climbStairs(n));
//    return 0;
//}

//水仙花数
//变种水仙花数（0-10000）
//把任意的数字，从中间拆分成两个数字
//比如 1461 拆成 （1和461）（14和61）（146和1)
//如果所有拆分之后的乘积等于自身，则是一个 Lily Number.
//例如：655=6*55+65*5  1461=1*461+14*41+146*1
//12345
//1			=>12345/10000	|2345		=>12345%10000
//12		=>12345/1000	|345		=>12345%1000
//123		=>12345/100		|45			=>12345%100
//1234		=>12345/10		|5			=>12345%10
//int main()
//{
//	int k = 0;
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//	
//		for (j = 1; j <= 4; j++)
//		{
//			//int x = i / (int)pow(10, j);//pow函数返回的是double类型，需要强制转换
//			//int y = i % (int)pow(10, j);
//			//sum += x * y;
//			//可以简化成:
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d is Lily Number\n", i);
//		}
//	}
//	return 0;
//}


////判断是否是字母
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	getchar();
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	//%c前面加空格，作用是跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)
//	{
//		if (isalpha(ch))//isalpha函数判断一个字符是不是字母
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//
//	return 0;
//}

////字符大小写转换
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的个数
//	//scanf读取失败的时候，返回的是EOF(end of file)
//	while (scanf("%c", &ch) == 1)//scanf("%c", &ch) != EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else
//		{
//			printf("%c\n", ch);
//		}
//
//		//库函数中有判断大小写字母的函数,要使用库函数-ctype.h
//		//islower()  isupper()
//		//有转换大小写字母的函数
//		//tolower() toupper()
//
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//
//		getchar();
//	}
//	return 0;
//}



//int main()
//{
//	int k = 2;
//	int arr[6] = { 1,2,6,3,8,0 };
//	int tmp = -1;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		if (k == arr[i])
//		{
//			tmp = i;
//			break;
//		}
//	}
//
//	if (tmp != -1)
//	{
//		for (i = tmp; i < n - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		n--;
//	}
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,4,2,39,34,224,24,3,7,10 };//保存一行数组
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int del = 0;
//	scanf("%d", &del);
//
//	int j = 0;//作为下标确定为止存放不删除的数据
//	for (j = 0; i < n; i++);
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[j];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int climbStairs(int n) {
//    if (n <= 2) return n;
//    int a = 1, b = 2, c;
//    for (int i = 3; i <= n; i++) {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return b;
//}


//int main()
//{
//	int num1 = 3;
//	int num2 = -5;
//
//	printf("%d\n", ~num2);//4
//	printf("%d\n",~num1);//4
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}s;
//
//void set_stu(struct Stu* ss)
//{
//	ss->name[0] = 's';
//	ss->name[2] = 's';
//	ss->name[1] = 's';
//
//	ss->age = 20;
//	ss->score = 100.0;
//}
//
//int printf_stu(struct Stu* s)
//{
//	printf("%s %d %lf\n", s->name, s->age, s->score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	printf_stu(&s);
//
//	return 0;
//}

//实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
////尝试在
