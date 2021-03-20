#define _CRT_SECURE_NO_WARNINGS

//2、编写程序实现：判断输入的正整数是否既是5又是7的整倍数。若是，则输出yes；否则输出no。
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if ((a % 5 == 0) && (a % 7 == 0))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}