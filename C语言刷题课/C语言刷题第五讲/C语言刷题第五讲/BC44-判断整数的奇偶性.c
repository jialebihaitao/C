#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
//输入描述:
//多组输入，每行输入包括一个整数。
//输出描述:
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
//示例1
//输入
//4
//7
//输出
//Even
//Odd

//方法一
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 2 == 0)
			printf("Even\n");
		else
			printf("Odd\n");
	}
	return 0;

}

