#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。
//输入描述:
//一行，输入两个整数n和m，用空格分隔，第二行包含n*m个整数（范围-231~231-1）。(1≤n≤10, 1≤m≤10)
//输出描述:
//输出规划后n行m列的矩阵，每个数的后面有一个空格。
//示例1
//输入
//2 3
//1 2 3 4 5 6
//输出
//1 2 3
//4 5 6

#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int t = 0;
	for (i = 1; i <= n*m; i++)
	{
		scanf("%d", &t);
		printf("%d ", t);
		if (i%m == 0)
		{
			printf("\n");
		}
	}
	return 0;
}