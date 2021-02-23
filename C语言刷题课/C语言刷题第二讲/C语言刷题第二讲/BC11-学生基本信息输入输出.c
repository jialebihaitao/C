#define _CRT_SECURE_NO_WARNINGS
//题目描述
//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩。
//输入描述:
//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
//输出描述:
//学号，3科成绩，输出格式详见输出样例。
//示例1
//输入
//17140216;80.845,90.55,100.00
//输出
//The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.
#include<stdio.h>
int main()
{
    int xuehao=0;
    float C_score=0.0;
    float math_score=0.0;
    float english_score=0.0;
    scanf("%d;%f,%f,%f",&xuehao,&C_score,&math_score,&english_score);//题目要求输入;
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",xuehao,C_score,math_score,english_score);
	//%.2f   小数点后输出两位
    return 0;
}
//答案解析：
//这个题的最大坑，也是格式的指定，还有空格的控制，必须和题目要求的输出结果一致，比如：of的后
//边有2个空格。
//浮点数打印要指定小数点后边的位数为2位。