#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//����ʹ��,ֻ�����е�9X9�ĸ���
#define ROW 9
#define COL 9
//���̴�С
#define ROWS ROW+2
#define COLS COL+2

//�׵Ķ���
#define EASY_COUNT 9


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void Display(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);