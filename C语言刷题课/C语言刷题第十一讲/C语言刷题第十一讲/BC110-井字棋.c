#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。请根据棋盘状态，判断当前输赢。
//
//输入描述:
//三行三列的字符元素，代表棋盘状态，字符元素用空格分开，代表当前棋盘，其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子。
//输出描述:
//如果KiKi获胜，输出“KiKi wins!”；
//如果BoBo获胜，输出“BoBo wins!”；
//如果没有获胜，输出“No winner!”。
//示例1
//输入
//K O B
//O K B
//B O K
//输出
//KiKi wins!

#include<stdio.h>
int main()
{
	char arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	char flag = 0;//判断输赢
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%c", &arr[i][j]);
			getchar();
		}
	}
	//判断输赢
	//判断三行
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			flag=arr[i][0];
			break;
		}
	}
	//判断三列
	for (i = 0; i < 3; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			flag = arr[0][i];
			break;
		}
	}
	//判断对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		flag = arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		flag = arr[1][1];
	}
	if (flag == 'K')
	{
		printf("KiKi wins!\n");
	}
	else if (flag == 'B')
	{
		printf("BoBo wins!\n");
	}
	else
	{
		printf("No winner!\n");
	}
	return 0;
}