#define _CRT_SECURE_NO_WARNINGS
//题目描述
//在计算BMI（BodyMassIndex ，身体质量指数）的案例基础上，判断人体胖瘦程度。BMI中国标准如下表所示。
//
//
//输入描述:
//多组输入，每一行包括两个整数，用空格隔开，分别为体重（公斤）和身高（厘米）。
//输出描述:
//针对每行输入，输出为一行，人体胖瘦程度，即分类。
//示例1
//输入
//80 170
//60 170
//90 160
//50 185
//输出
//Overweight
//Normal
//Obese
//Underweight

#include<stdio.h>
int main()
{
	int w = 0;//体重
	int h = 0;//身高
	while (~scanf("%d %d", &w, &h))
	{
		float bmi = w / (h*h / 100.0 / 100.0);
		if (bmi < 18.5)
		{
			printf("Underweight\n");
		}
		else if (bmi >= 18.5&&bmi <= 23.9)
		{
			printf("Normal\n");
		}
		else if (bmi>23.9&&bmi <= 27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}
	return 0;
}

//答案解析：
//1. 多组输入
//2. 浮点数除法要保证除号的两端至少有一个浮点数