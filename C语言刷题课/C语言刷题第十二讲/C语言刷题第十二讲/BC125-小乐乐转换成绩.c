#define _CRT_SECURE_NO_WARNINGS
//题目描述
//小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’。如果输入的成绩不在0-100之间，输出’F’。
//输入描述:
//一行，一个整数表示的成绩。
//输出描述:
//一行，转换后的等级。
//示例1
//输入
//78
//输出
//C

#include <stdio.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	
	if (score >= 90 && score <= 100)
		printf("A\n");
	else if (score >= 80 && score <= 89)
		printf("B\n");
	else if (score >= 70 && score <= 79)
		printf("C\n");
	else if (score >= 60 && score <= 69)
		printf("D\n");
	else if (score<=59&&score>=0)
		printf("E\n");
	else
		printf("F\n");
	return 0;
}