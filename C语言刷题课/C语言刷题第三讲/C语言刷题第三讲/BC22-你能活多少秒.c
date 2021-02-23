#define _CRT_SECURE_NO_WARNINGS
//题目描述
// 问题：一年约有3.156×107s，要求输入您的年龄，显示该年龄合多少秒。
//输入描述:
//一行，包括一个整数age(0<age<=200)。
//输出描述:
//一行，包含一个整数，输出年龄对应的秒数。
//示例1
//输入
//20
//输出
//631200000
#include<stdio.h>
int main()
{
    int age=0;
    scanf("%d",&age);
    long long sec=age*3.156e7;
    printf("%lld\n",sec);
    return 0;
}