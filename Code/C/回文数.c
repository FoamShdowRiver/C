
//判断回文数

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // 处理特殊情况：负数或末尾为0的非零数
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reverted = 0;
    // 当原始数字大于反转后的数字时继续处理
    while (x > reverted) {
        reverted = reverted * 10 + x % 10;
        x /= 10;
    }

    // 偶数位直接比较，奇数位去掉中间位比较
    return x == reverted || x == reverted / 10;
}

int fanzhuan(int n)
{
	int s = 0;
	while (n != 0)
	{
		int s1 = n % 10;//每次都得到最低位上的数字
		s = s * 10 + s1;
		n = n / 10;//递归降位
	}
	return s;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	// if (isPalindrome(a))
	if (fanzhuan(a) == a)
	{
		printf("%d是回文数\n",a);
	}
	else
	{
		printf("%d不是回文数\n", a);

	}
	return 0;
}