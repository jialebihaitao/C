#define _CRT_SECURE_NO_WARNINGS
//题目描述
//BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。
//
//输入描述:
//无
//输出描述:
//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
//备注:
//printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
#include<stdio.h>
int main()
{
    printf("%15d\n",0XABCDEF);
    return 0;
}
//答案解析：
//本题考查的就是%d的格式控制域宽指定