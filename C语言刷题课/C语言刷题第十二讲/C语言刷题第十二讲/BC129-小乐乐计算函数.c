#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。
//
//其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
//输入描述:
//一行，输入三个整数，用空格隔开，分别表示a, b, c。
//输出描述:
//一行，一个浮点数，小数点保留2位，为计算后m的值。
//示例1
//输入
//1 2 3
//输出
//0.30

#include<stdio.h>
int max3(int x, int y, int z)
{
	int max = x > y ? x : y;
	int ret = max > z ? max : z;
	return ret;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	float m = 0.0;
	m = ((float)max3(a + b, b, c)) / (max3(a,b+c,c)+max3(a, b, b + c));
	printf("%.2f\n", m);
	return 0;
}