//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����(����)
//����һ:��������,����������
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
//ͳ��num�Ĳ������м���һ
	int count = 0;		//����
	while (num != 0)
	{
		if (num % 2 == 1)
		{		//����
			count++;
		}
		num = num / 2;
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}

//������:
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int count = 0;		//����
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}
//������
#include <stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;		//����
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}
