//1. дһ�����������ж�һ�����ǲ�������
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	//2->n-1
	int j = 0;
	for (j = 2; j <= sqrt(n); j+=2)
	{
		if (n%j == 0)
		{
		    return 0;
		}
	}
    return 1;//j=n
}
int main()
{
	int i = 0;
	//��ӡ100-200֮����������
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)//������ ����1 �������� ����0
			printf("%d ",i);
	}
	return 0;
}
