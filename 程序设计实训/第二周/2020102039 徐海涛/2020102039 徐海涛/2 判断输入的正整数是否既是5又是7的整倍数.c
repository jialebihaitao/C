#define _CRT_SECURE_NO_WARNINGS

//2����д����ʵ�֣��ж�������������Ƿ����5����7�������������ǣ������yes���������no��
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