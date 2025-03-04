#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	printf("-------扫雷游戏-----\n");
	for (i = 0; i <= row; i++)//打印列数
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行数

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏-----\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//雷的数量
	//1~9  row
	//1~9
	while (count)
	{
		int x = rand() % row + 1;  //%9->0~8 +1=>  1~9
		int y = rand() % col + 1;
		//放雷的设置
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//注意放雷后要减少
		}
	}

}