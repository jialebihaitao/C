#define _CRT_SECURE_NO_WARNINGS
//1.编写程序,实现交换两数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int t = 0;
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}
