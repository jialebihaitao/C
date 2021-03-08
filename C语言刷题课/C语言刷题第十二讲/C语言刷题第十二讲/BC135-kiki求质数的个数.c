#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
//输入描述:
//无
//输出描述:
//一行，一个整数，表示所有三位整数中，有多少个质数。

//方法一
#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= n - 1; j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}

//方法二
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}