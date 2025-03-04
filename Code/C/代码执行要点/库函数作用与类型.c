
//各函数注意事项
 
//fabs() sqrt() fmod() pow() 类型都是double型 #include <math.h>

// double ceil(double/float x) 返回 不小于x的最小整数值
// double floor(double x) 返回小于或等于 x 的最大的整数值
// double modf(double x, double *integer) 返回值为小数部分（小数点后的部分），并设置 integer 为整数部分。
// int abs(int x) 返回 x 的绝对值。
// long int labs(long int x) 返回 x 的绝对值。

printf()库函数 规格 https://www.nowcoder.com/tutorial/10002/dca3d59a33034326a2bf09a0e279fca7
printf scanf 类型为int https://www.nowcoder.com/tutorial/10002/33c50a8764f24d688251d662ea673ba1
puts gets 一样
	
int scanf(const char *format, ...) scanf("%d",&a);这个取地址符 & 千万不能掉

char *strcpy(char *dest, const char *src) #include <string.h>
把 src 所指向的字符串复制到 dest。
int strcmp(const char *str1, const char *str2) 
把 str1 所指向的字符串和 str2 所指向的字符串进行比较。

char *strcat(char *dest, const char *src) #include <string.h>
把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。

size_t strlen(const char *str) #include <string.h>
计算字符串 str 的长度，直到空结束字符，但不包括空结束字符。

int strncmp(const char *str1, const char *str2, size_t n) #include <string.h>
把 str1 和 str2 进行比较，最多比较前 n 个字节。以上都可以这么做





也可以 初始化一个变量 time_t t;  srand((unsigned int)time(&t))
void srand(unsigned int seed) #include <stdlib.h>
播种由函数 rand 使用的随机数发生器。 srand((unsigned int)time(NULL))

time_t time(time_t *t) #include <time.h>

