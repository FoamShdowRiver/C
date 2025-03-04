#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("*****   1. play      ****\n");
	printf("*****   0. exit      ****\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定的内容
	// char mine[ROWS][COLS] = { '0' };这样是不行的，不完全初始化，只初始化了一个值
	//mine 数组在没有布置雷的时候，都是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show 数组在没有排查雷的时候，都是'*'
	InitBoard(show, ROWS, COLS, '*');
	//Display(show, ROW, COL);
	
	//Display(mine, ROW, COL);//用来排查
	

	SetMine(mine, ROW, COL);

	Display(mine, ROW, COL);//用来排查
	//Display(show, ROW, COL);

}

int main()
{
	int input = 0;//游戏选择是否开启
	srand((unsigned int)time(NULL));//设置随机数的生成起点

	do {
		menu();//开始菜单

		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误，请重新做选择！");
			break;
		}
	} while (input);

	return 0;
}