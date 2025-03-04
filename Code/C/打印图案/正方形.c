
//正方形
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//空心正方形（嵌套正方形）
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

//双边框
#include <stdio.h>

int main() {
    int n;
    printf("请输入正方形边长（建议≥6）：");
    scanf("%d", &n);

    // 双边框逻辑：外层边框（首末两行/列） + 内层边框（第二行/倒数第二行，第二列/倒数第二列）
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (
                // 外层边框：首行、末行、首列、末列
                i == 0 || i == n - 1 || j == 0 || j == n - 1 ||
                // 内层边框：第二行、倒数第二行、第二列、倒数第二列
                i == 1 || i == n - 2 || j == 1 || j == n - 2
                ) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}