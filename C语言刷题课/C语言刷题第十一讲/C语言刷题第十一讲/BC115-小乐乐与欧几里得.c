#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//
//��������:
//ÿ�������������������n��m��(1 �� n �� 109��1 �� m �� 109)
//
//�������:
//����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�
//ʾ��1
//����
//10 20
//���
//30
//ʾ��2
//����
//15 20
//���
//65

//����һ:̫��
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	//��max�����Լ��:Сֵ�Լ�
	int max = n > m ? m : n;
	//��min�����Լ��:��ֵ�Լ�
	int min = n > m ? n : m;
	while (1)
	{
		if (m%max == 0 && n%max == 0)
		{
			break;
		}
		max--;
	}
	while (1)
	{
		if (min%m == 0 && min%n == 0)
		{
			break;
		}
		min++;
	}
	printf("%d\n", max+min);
	return 0;
}

//������:շת�����
  //n��m k���Լ��
  //��С������ m*n/k
    //24%18=6
    //18%6=0
    //n%m!=0->n%m=t
    //n=m;
    //m=t;
#include<stdio.h>
int main()
{
	long long n = 0;
	long long m = 0;
	long long tmp = 0;

	scanf("%lld %lld", &n, &m);
	int a = n;
	int b = m;
	while (tmp = a%b)
	{
		a = b;
		b = tmp;
	}
	printf("%lld\n", b + m*n / b);
	return 0;
}
