#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//С���ֻ��4������������������ҵ���������
//��������:
//һ�У�4���������ÿո�ֿ���
//�������:
//һ�У�һ��������Ϊ�����4������������������
//ʾ��1
//����
//5 8 2 5
//���
//8

#include<stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	for (i = 0; i<4; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	int max = arr[0];
	for (i = 1; i<4; i++)
	{
		if (arr[i]> max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}