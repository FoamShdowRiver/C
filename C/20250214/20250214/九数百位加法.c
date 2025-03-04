#include <stdio.h>
#include <stdbool.h>

#define N 8 // 棋盘大小

// 打印棋盘
void printSolution(int board[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j)
                printf("Q "); // 打印皇后
            else
                printf(". "); // 打印空位
        }
        printf("\n");
    }
    printf("\n");
}

// 检查当前位置是否安全
bool isSafe(int board[N], int row, int col) {
    // 检查同一列
    for (int i = 0; i < row; i++) {
        if (board[i] == col)
            return false;
    }

    // 检查左上对角线
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i] == j)
            return false;
    }

    // 检查右上对角线
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i] == j)
            return false;
    }

    return true; // 如果安全，返回true
}

// 递归解决八皇后问题
bool solveNQueens(int board[N], int row) {
    if (row == N) {
        // 找到一个解，打印棋盘
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col; // 放置皇后
            res = solveNQueens(board, row + 1) || res; // 递归放置下一行
            board[row] = -1; // 回溯
        }
    }

    return res;
}

int main() {
    int board[N];
    for (int i = 0; i < N; i++)
        board[i] = -1; // 初始化棋盘

    if (!solveNQueens(board, 0)) {
        printf("No solution exists.\n");
    }

    return 0;
}