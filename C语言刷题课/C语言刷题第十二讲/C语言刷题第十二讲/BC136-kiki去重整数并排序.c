#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//����һ���������У�KiKi������е��ظ�������ȥ��������ȥ�غ�����д�С�������������
//��������:
//��һ�У�����һ������n����ʾ������n��������
//�ڶ�������n��������ÿ���������ڵ���1��С�ڵ���1000��������֮���ÿո�ָ���
//�������:
//ȥ�ز��Ҵ�С�������е��������У�����֮���ÿո�ָ���
//ʾ��1
//����
//6
//5 3 3 4 2 2
//���
//2 3 4 5

//����1
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	for (i = 0; i<n - 1; i++)
	{
		int j = 0;
		for (j = 0; j<n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//ȥ��-�Ƚ�n-1��
	int j = 0;
	for (i = 0; i<n - 1; i++)
	{
		//��i+1��ߵ�Ԫ����ǰ�ƶ�
		if (arr[i] == arr[i + 1])
		{
			int k = 0;
			for (k = i; k<n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	//��ӡ
	for (i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//����2��
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[1001] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &m);
		arr[m] = m;
	}
	for (i = 0; i<1001; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
	return 0;
}