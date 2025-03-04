#include <stdio.h>
#include <stdbool.h>

#define N 8 // ���̴�С

// ��ӡ����
void printSolution(int board[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j)
                printf("Q "); // ��ӡ�ʺ�
            else
                printf(". "); // ��ӡ��λ
        }
        printf("\n");
    }
    printf("\n");
}

// ��鵱ǰλ���Ƿ�ȫ
bool isSafe(int board[N], int row, int col) {
    // ���ͬһ��
    for (int i = 0; i < row; i++) {
        if (board[i] == col)
            return false;
    }

    // ������϶Խ���
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i] == j)
            return false;
    }

    // ������϶Խ���
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i] == j)
            return false;
    }

    return true; // �����ȫ������true
}

// �ݹ����˻ʺ�����
bool solveNQueens(int board[N], int row) {
    if (row == N) {
        // �ҵ�һ���⣬��ӡ����
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col; // ���ûʺ�
            res = solveNQueens(board, row + 1) || res; // �ݹ������һ��
            board[row] = -1; // ����
        }
    }

    return res;
}

int main() {
    int board[N];
    for (int i = 0; i < N; i++)
        board[i] = -1; // ��ʼ������

    if (!solveNQueens(board, 0)) {
        printf("No solution exists.\n");
    }

    return 0;
}