
//小乐乐走台阶，一次最多走两阶，n阶可以有多少次走法
//原理和斐波那契数列很像
// 核心递推公式
// 设台阶数为n时走法总数为f(n)f(n)，则递推关系为：
// 			f(n) = f(n-1) + f(n-2)

// 初始条件
// f(1)=1（只有1阶时，只能走1步）
// f(2)=2（2阶时，可走两次1步或一次2步）
// 示例计算
// n=3时：f(3)=f(2)+f(1)=2+1=3
// n=4时：f(4)=f(3)+f(2)=3+2=5
// 以此类推，形成斐波那契数列：1, 2, 3, 5, 8, 13…

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归法
int climbStairs(int n) {
    if (n <= 2) 
		return n;
    return climbStairs(n-1) + climbStairs(n-2);
}


// 迭代法
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 走台阶变种：一次最多走三阶，问n阶可以有多少次走法？
// 当允许每次走1/2/3阶时，递推公式为：
// 		f(n) = f(n-1) + f(n-2) + f(n-3)

// 解释：最后一步可能是1阶（剩余n−1阶的走法）、
// 2阶（剩余n−2阶）或3阶（剩余n−3阶），三者相加即为总走法15。
#include <stdio.h>

int countWays(int n) //此方法vs不能使用
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int dp[n + 1];
    dp[0] = 1;//代表站在第0阶不动。
    dp[1] = 1;//代表从第0阶走到第1阶。
    dp[2] = 2;//代表从第0阶走到第2阶，可以通过1+1或2。

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    return dp[n];
}


//迭代法（高效）
int climbStairs(int n) {
    if (n <= 0) return 0;
    if (n <= 2) return n;
    if (n == 3) return 4;

    int a = 1, b = 2, c = 4, d;
    for (int i = 4; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}

int main() {
    int n;
    printf("请输入台阶数n: ");
    scanf("%d", &n);
    //printf("走到第 %d 阶的方法数是: %d\n", n, countWays(n));
    printf("走到第 %d 阶的方法数是: %d\n", n, climbStairs(n));
    return 0;
}

