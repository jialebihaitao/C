//������:���ܴ�����ʱ��������������������ʵ���������Ľ���
#define _CRT_SECURE_NO_WARNINGS
//���ݱȽ�Сʱ:�Ӽ���
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//���ݱȽϴ�ʱ:���ķ���
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
    a = a^b;
    b = a^b;
    a = a^b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}