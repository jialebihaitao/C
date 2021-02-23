#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
//
//输入描述:
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//
//输出描述:
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格。
//
//示例1
//输入
//5
//输出
//        * 
//      * * 
//    * * * 
//  * * * * 
//* * * * *
//示例2
//输入
//4
//输出
//      * 
//    * * 
//  * * * 
//* * * *

//方法一
#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		//行数
		int i = 0;
		for (i = 0; i < n; i++)
		{
			//打印一行
			//空格
			int j=0;
			for (j = 0; j < n-1-i; j++)
			{
				printf("  ");
			}
			//*+空格
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		//行数
		int i = 0;
		for (i = 0; i < n; i++)
		{
			
			int j = 0;
			//打印正方形
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

//答案解析：
//1. 多组输入
//2. 理解方法2中i + j<n - 1