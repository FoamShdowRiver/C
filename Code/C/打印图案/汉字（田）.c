
//田字
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int isBorder = 0;
            for (int k = 0; k <= (n - 1) / 2; k += 2) { // 假设每层间隔2单位
                if (i == k || i == n - 1 - k || j == k || j == n - 1 - k) {
                    isBorder = 1;
                    break;
                }
            }
            if (isBorder) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}