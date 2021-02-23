#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//
//输入描述:
//两行，
//
//第1行，正整数n（1≤n≤100）
//
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述:
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
//示例1
//输入
//5
//99.5 100.0 22.0 60.0 88.5
//输出
//100.00 22.00 74.00

#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    double max=0.0;
    double min=100.0;
    double score=0;
    double sum=0.0;
	int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&score);
        sum+=score;
        if(score>max)
        {
            max=score;
        }
        if(min>score)
        {
            min=score;
        }
    }
    printf("%.2lf %.2lf %.2lf\n",max,min,sum/n);
    return 0;
}

//答案解析：
//1. 输入的同时就最大值最小值和求和，然后计算想要的结果。