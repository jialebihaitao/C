#define _CRT_SECURE_NO_WARNINGS
//题目描述
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//
//输入描述:
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述:
//一行，输出5个数的平均数（保留一位小数）。
//示例1
//输入
//75 80 43 67 96
//输出
//72.2
//方法一
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
    int score[5]={0};
	//数组输入
    for(i=0;i<5;i++)
    {      
        scanf("%d",&score[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+score[i];
    }
    printf("%.1f\n",sum/5.0);
    return 0;
}

//方法二 优先
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		int score = 0;
		scanf("%d", &score);
		sum += score;
	}
	printf("%.1f\n", sum / 5.0);
	return 0;
}

//答案解析：
//在获取输入数据的同时，计算成绩总和，然后求出平均值，按照格式输出就行。
