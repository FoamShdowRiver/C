
//沙漏状
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//空心沙漏状
#include <stdio.h>

int main() {
    int n = 5;
    // 上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // 下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}