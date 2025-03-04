//□□□+□□□=□□□，请将1～9这9个阿拉伯数字分别填入9个□中使等式成立，
//每个数字只能使用一次。如何用C语言解决

//只利用指针
#include <stdio.h>

// 检查数字是否重复
int isUnique(int a, int b, int c) 
{
    int used[10] = {0}; // 记录数字是否被使用过
    int *ptr = &a;      // 使用指针遍历数字

    // 遍历a、b、c的每一位
    for (int i = 0; i < 3; i++) 
	{
        int digit = *ptr % 10;
        if (used[digit]) return 0; // 如果数字重复，返回0
        used[digit] = 1;
        *ptr /= 10;
    }

    ptr = &b;
    for (int i = 0; i < 3; i++) 
	{
        int digit = *ptr % 10;
        if (used[digit]) return 0;
        used[digit] = 1;
        *ptr /= 10;
    }

    ptr = &c;
    for (int i = 0; i < 3; i++) 
	{
        int digit = *ptr % 10;
		
        if (used[digit]) 
		{
			return 0;
		}
		
        used[digit] = 1;
        *ptr /= 10;
    }
    return 1; // 如果没有重复，返回1
}

int main() {
    for (int a = 100; a <= 999; a++) 
	{
        for (int b = 100; b <= 999; b++) 
		{
            int c = a + b;
			
            if (c >= 100 && c <= 999 && isUnique(a, b, c))
			{
                printf("%d + %d = %d\n", a, b, c);
            }
        }
    }
    return 0;
}

//迭代
#include <stdio.h>
#include <stdbool.h>//bool变量

bool used[10] = {false}; // 记录数字是否被使用过

bool check(int a, int b, int c) 
{
    return a + b == c;
}

void solve(int index, int nums[9]) 
{
    if (index == 9) 
	{
        int a = nums[0] * 100 + nums[1] * 10 + nums[2];
        int b = nums[3] * 100 + nums[4] * 10 + nums[5];
        int c = nums[6] * 100 + nums[7] * 10 + nums[8];
		
        if (check(a, b, c)) 
		{
            printf("%d + %d = %d\n", a, b, c);
        }
        return;
    }

    for (int i = 1; i <= 9; i++) 
	{
        if (!used[i]) 
		{
            used[i] = true;
            nums[index] = i;
            solve(index + 1, nums);
            used[i] = false;
        }
    }
}

int main() 
{
    int nums[9];
    solve(0, nums);
    return 0;
}