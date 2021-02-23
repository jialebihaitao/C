#define _CRT_SECURE_NO_WARNINGS
//题目描述
//给定一个浮点数，要求得到该浮点数的个位数。
//
//输入描述:
//一行，包括一个浮点数。
//输出描述:
//一行，包含一个整数，为输入浮点数对应的个位数。
//示例1
//输入
//13.141
//输出
//3
//方法一
#include<stdio.h>
int main()
{
    int n=0;//int型直接把小数部分删掉了
    scanf("%d",&n);
    printf("%d\n",n%10);
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
	float n = 0;
	scanf("%f", &n);
	printf("%d\n", ((int)n) % 10);
	return 0;
}