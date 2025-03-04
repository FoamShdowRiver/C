#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//真正使用,只用其中的9X9的格子
#define ROW 9
#define COL 9
//棋盘大小
#define ROWS ROW+2
#define COLS COL+2

//雷的多少
#define EASY_COUNT 9


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void Display(char board[ROWS][COLS], int row, int col);
//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);