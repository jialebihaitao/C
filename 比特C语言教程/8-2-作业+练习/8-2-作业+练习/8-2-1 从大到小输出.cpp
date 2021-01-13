#define _CRT_SECURE_NO_WARNINGS
//从大到小输出
//写代码将三个数从大到小输出
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	//算法实现
	//a中放最大值
	//次之
	//c中放最小值
	if (a < b)
	{
		int t = a;
		a = b; 
		b = t;
	}
	if (a < c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		int t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}