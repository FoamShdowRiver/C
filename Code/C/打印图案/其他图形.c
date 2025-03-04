
//蝴蝶形状
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//箭头形状
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}

//心形
#include <stdio.h>

int main() {
    int n = 6;
    for (int i = n / 2; i <= n; i += 2) {
        // 打印左上角的空格
        for (int j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        // 打印左上角的星星
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // 打印中间的空格
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 打印右上角的星星
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 打印下半部分
    for (int i = n; i >= 1; i--) {
        // 打印前面的空格
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // 打印下半部分的星星
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//空心心形
#include <stdio.h>

int main() {
    int n = 6;
    for (int i = n / 2; i <= n; i += 2) {
        // 打印左上角的空格
        for (int j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        // 打印左上角的星星
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // 打印中间的空格
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 打印右上角的星星
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 打印下半部分
    for (int i = n; i >= 1; i--) {
        // 打印前面的空格
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // 打印下半部分的星星
        for (int j = 1; j <= (i * 2) - 1; j++) {
            if (j == 1 || j == (i * 2) - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
