#define _CRT_SECURE_NO_WARNINGS
//题目描述
//复制代码
//请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212。
//输入描述:
//无。
//输出描述:
//(-8+22)×a-10+c÷2计算之后的结果，为一个整数。
#include<stdio.h>
int main()
{
    int a=40;
    int c=212;
    int ret=(-8+22)*a-10+c/2;
    printf("%d",ret);
    return 0;
}
//答案解析：
//按照操作符的优先级直接设计表达式，计算输出就行。