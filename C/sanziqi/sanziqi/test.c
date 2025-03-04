#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*****  1. play  0. exit *****\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board, ROW, COL);
	DispalyBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);

		//判断玩家输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DispalyBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);

		//判断电脑输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DispalyBoard(board, ROW, COL);
	}
	//判断最终局况
	if (ret == '*')
	{
		printf("Congratulation! 本局玩家获胜！\n");
	}
	else if (ret == '#')
	{
		printf("Warnning! 本局电脑获胜！\n");
	}
	else
	{
		printf("滋滋滋...Eerror,本局双方共同获胜！\n");
	}
	DispalyBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点的

	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (input);

	return 0;
}

