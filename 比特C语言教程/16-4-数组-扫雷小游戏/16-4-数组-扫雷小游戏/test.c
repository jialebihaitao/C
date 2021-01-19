#define _CRT_SECURE_NO_WARNINGS
//雷的信息存储
//1.布置雷:数组 char board[9][9]->char board[11][11]
//              存放雷的信息
//2.排查雷 数组
//              排查出来的雷的信息

#include<stdio.h>
#include"game.h"
void menu()
{
	printf("****************************************\n");
	printf("************  1.play  ******************\n");
	printf("************  0.exit  ******************\n");
	printf("****************************************\n");
}
void game()
{
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
    //2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(mine, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
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
			printf("选择错误,重新选择!\n");
			break;
		}
	} while (input);//input==0
}
int main()
{
	test();
	return 0;
}