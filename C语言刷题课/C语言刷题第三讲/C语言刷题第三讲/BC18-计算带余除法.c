#define _CRT_SECURE_NO_WARNINGS
//题目描述
//给定两个整数a和b (－10,000 < a,b < 10,000)，计算a除以b的整数商和余数。
//输入描述:
//一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述:
//一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
//示例1
//输入
//15 2
//输出
//7 1
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int m=a/b;
    int n=a%b;
    printf("%d %d\n",m,n);
	//printf("%d %d",a/b,a%b);
    return 0;
}
//答案解析：
//掌握 % 和 / 两个操作符的使用，按照格式输出就行。