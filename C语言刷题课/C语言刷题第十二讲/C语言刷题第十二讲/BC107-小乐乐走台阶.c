#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//
//输入描述:
//输入包含一个整数n (1 ≤ n ≤ 30)
//输出描述:
//输出一个整数，即小乐乐可以走的方法数。
//示例1
//输入
//2
//输出
//2
//示例2
//输入
//10
//输出
//89

#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//斐波那契数列