#define _CRT_SECURE_NO_WARNINGS
//1����д����ʵ�ִӼ���������һ���ַ���������Ǵ�д��ĸ�������ת����Сд��ĸ���������ֱ�������
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