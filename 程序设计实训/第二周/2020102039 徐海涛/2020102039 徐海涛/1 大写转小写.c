#define _CRT_SECURE_NO_WARNINGS
//1、编写程序实现从键盘上输入一个字符，如果它是大写字母，则把它转换成小写字母输出，否则，直接输出。
#include<stdio.h>
int main()
{
	char ch = 0;
	scanf("%c", &ch);
	if (ch >= 'A'&&ch <= 'Z')
	{
		printf("%c\n", ch + 32);
	}
	else
	{
		printf("%c\n", ch);
	}
	return 0;
}