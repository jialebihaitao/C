#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述:
//一行，4个整数，用空格分开。
//输出描述:
//一行，一个整数，为输入的4个整数中最大的整数。
//示例1
//输入
//5 8 2 5
//输出
//8

#include<stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	for (i = 0; i<4; i++)
	{
		scanf("%d", &arr[i]);
	}
	//假设
	int max = arr[0];
	for (i = 1; i<4; i++)
	{
		if (arr[i]> max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}