#define _CRT_SECURE_NO_WARNINGS
//�Ӵ�С���
//д���뽫�������Ӵ�С���
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	//�㷨ʵ��
	//a�з����ֵ
	//��֮
	//c�з���Сֵ
	if (a < b)
	{
		int t = a;
		a = b; 
		b = t;
	}
	if (a < c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		int t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}