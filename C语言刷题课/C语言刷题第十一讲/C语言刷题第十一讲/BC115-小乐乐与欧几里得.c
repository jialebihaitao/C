#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//
//输入描述:
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//
//输出描述:
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
//示例1
//输入
//10 20
//输出
//30
//示例2
//输入
//15 20
//输出
//65

//方法一:太慢
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	//设max是最大公约数:小值自减
	int max = n > m ? m : n;
	//设min是最大公约数:大值自加
	int min = n > m ? n : m;
	while (1)
	{
		if (m%max == 0 && n%max == 0)
		{
			break;
		}
		max--;
	}
	while (1)
	{
		if (min%m == 0 && min%n == 0)
		{
			break;
		}
		min++;
	}
	printf("%d\n", max+min);
	return 0;
}

//方法二:辗转相除法
  //n和m k最大公约数
  //最小公倍数 m*n/k
    //24%18=6
    //18%6=0
    //n%m!=0->n%m=t
    //n=m;
    //m=t;
#include<stdio.h>
int main()
{
	long long n = 0;
	long long m = 0;
	long long tmp = 0;

	scanf("%lld %lld", &n, &m);
	int a = n;
	int b = m;
	while (tmp = a%b)
	{
		a = b;
		b = tmp;
	}
	printf("%lld\n", b + m*n / b);
	return 0;
}
