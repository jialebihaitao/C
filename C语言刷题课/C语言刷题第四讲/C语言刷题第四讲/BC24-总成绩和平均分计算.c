#define _CRT_SECURE_NO_WARNINGS
//题目描述
//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
//输入描述:
//一行，3科成绩，成绩之间用一个空格隔开。
//输出描述:
//一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开。
//示例1
//输入
//79.5 80.0 98.0
//输出
//257.50 85.83

//方法一
#include<stdio.h>
int main()
{
	float s1 = 0.0;
	float s2 = 0.0;
	float s3 = 0.0;
	//输入
	scanf("%f %f %f", &s1, &s2, &s3);
	//计算和
	float sum = s1 + s2 + s3;
	float avg = sum / 3;
	printf("%.2f %.2f", sum, avg);
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
    int i=0;
    float sum=0.0;
    for(i=0;i<3;i++)
    {
        //读取一个成绩
        float s=0.0;
        scanf("%f",&s);
        sum=sum+s;

    }
    printf("%.2f %.2f\n",sum,sum/3);
    return 0;
}

//答案解析：
//1. 本题在接收数据的同时就可以计算分数的总和，不一定非要等数据全部接收完毕。
//2. 按照格式打印就行。