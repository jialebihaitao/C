#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//
//输入描述:
//输入一个正整数n  (1 ≤ n ≤ 109)
//
//输出描述:
//输出一个值，为求和结果。
//示例1
//输入
//1
//输出
//1
//示例2
//输入
//10
//输出
//55

//方法一
#include<stdio.h>
int main()
{
	long long i = 0;
	long long sum = 0;
	long long n = 0;
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	printf("%lld", (1 + n)*n / 2);
	return 0;
}