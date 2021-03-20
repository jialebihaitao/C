#define _CRT_SECURE_NO_WARNINGS
//3、编写程序实现：对于给定的百分制成绩转换成等级制。输入成绩，90分以上为A，80-89为B，70—79为C，60—69为D，60以下为E。要求用switch语句和if两种方法实现
//方法一
#include <stdio.h>
int main()
{
	int score=0;
	scanf("%d", &score);
	if (score<0 || score>100)
	{
		printf("error\n");
	}
	else if (score >= 90) 
	{
		printf("A\n");
	}
	else if (score >= 80)
	{
		printf("B\n");
	}
	else if (score >= 70) 
	{
		printf("C\n");
	}
	else if (score >= 60) 
	{
		printf("D\n");
	}
	else 
	{
		printf("E\n");
	}
	return 0;
}

//方法二
#include<stdio.h> 
int main()
{
	int score = 0;
	scanf("%c", &score);
	if (score>100||score<0)
	{
		printf("error\n");
	}
	score = score / 10;
	switch (score)
	{
	case'10': 
	case'9': 
		printf("A\n"); 
		break;
	case'8': 
		printf("B\n"); 
		break;
	case'7': 
		printf("C\n"); 
		break;
	case'6': 
		printf("D\n");
		break;
	default:
		printf("E\n");
		break;
	}
	return 0;	
}
