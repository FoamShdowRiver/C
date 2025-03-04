
//数字金字塔
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    return 0;
}

//数字倒金字塔
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

//数字空心金字塔
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1) {
                printf("%d", i + 1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//字母金字塔
#include <stdio.h>

int main() {
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c", ch + i);
        }
        printf("\n");
    }
    return 0;
}
//倒置字母金字塔
#include <stdio.h>

int main() {
    int n = 5;
    char ch = 'A';
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("%c", ch + n - i);
        }
        printf("\n");
    }
    return 0;
}

//字母空心金字塔
#include <stdio.h>

int main() {
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1) {
                printf("%c", ch + i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

