#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
//��������:
//��
//�������:
//һ�У�һ����������ʾ������λ�����У��ж��ٸ�������

//����һ
#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= n - 1; j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}

//������
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}