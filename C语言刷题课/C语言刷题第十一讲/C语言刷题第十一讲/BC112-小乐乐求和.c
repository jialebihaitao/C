#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//
//��������:
//����һ��������n  (1 �� n �� 109)
//
//�������:
//���һ��ֵ��Ϊ��ͽ����
//ʾ��1
//����
//1
//���
//1
//ʾ��2
//����
//10
//���
//55

//����һ
#include<stdio.h>
int main()
{
	long long i = 0;
	long long sum = 0;
	long long n = 0;
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);
	return 0;
}

//������
#include<stdio.h>
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	printf("%lld", (1 + n)*n / 2);
	return 0;
}