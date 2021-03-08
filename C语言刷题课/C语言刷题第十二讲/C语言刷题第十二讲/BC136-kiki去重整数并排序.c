#define _CRT_SECURE_NO_WARNINGS
//题目描述
//给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到达排序输出。
//输入描述:
//第一行，输入一个整数n，表示序列有n个整数。
//第二行输入n个整数（每个整数大于等于1，小于等于1000），整数之间用空格分隔。
//输出描述:
//去重并且从小到大排列的整数序列，整数之间用空格分隔。
//示例1
//输入
//6
//5 3 3 4 2 2
//输出
//2 3 4 5

//方法1
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//排序
	for (i = 0; i<n - 1; i++)
	{
		int j = 0;
		for (j = 0; j<n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//去重-比较n-1对
	int j = 0;
	for (i = 0; i<n - 1; i++)
	{
		//把i+1后边的元素往前移动
		if (arr[i] == arr[i + 1])
		{
			int k = 0;
			for (k = i; k<n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	//打印
	for (i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//方法2：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[1001] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &m);
		arr[m] = m;
	}
	for (i = 0; i<1001; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
	return 0;
}