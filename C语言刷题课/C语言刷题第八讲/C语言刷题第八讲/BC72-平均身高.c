#define _CRT_SECURE_NO_WARNINGS
//题目描述
//从键盘输入5个人的身高（米），求他们的平均身高（米）。
//
//输入描述:
//一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
//输出描述:
//一行，输出平均身高，保留两位小数。
//示例1
//输入
//1.68 1.75 1.82 1.60 1.92
//输出
//1.75

#include<stdio.h>
int main()
{
    double hi=0.0;
    double sum=0.0;
	int i=0;
    for(i=0;i<5;i++)
    {
        scanf("%lf",&hi);
        sum+=hi;//sum=sum+hi;
    }
    printf("%.2lf",sum/5);
    return 0;
}