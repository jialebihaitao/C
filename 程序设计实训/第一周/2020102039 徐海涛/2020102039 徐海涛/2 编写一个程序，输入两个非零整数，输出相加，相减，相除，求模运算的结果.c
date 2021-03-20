#define _CRT_SECURE_NO_WARNINGS
//2.编写一个程序，输入两个非零整数，输出相加，相减，相除，求模运算的结果。
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d/%d=%d\n", a, b, a / b);
	printf("%d%%%d=%d\n", a, b, a%b);
	return 0;
}
