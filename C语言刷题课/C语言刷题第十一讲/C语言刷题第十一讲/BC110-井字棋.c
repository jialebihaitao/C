#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ�����ӣ����ܻ�ʤ�����������״̬���жϵ�ǰ��Ӯ��
//
//��������:
//�������е��ַ�Ԫ�أ���������״̬���ַ�Ԫ���ÿո�ֿ�������ǰ���̣�����Ԫ��ΪK����KiKi��ҵ����ӣ�ΪO��ʾû�����ӣ�ΪB����BoBo��ҵ����ӡ�
//�������:
//���KiKi��ʤ�������KiKi wins!����
//���BoBo��ʤ�������BoBo wins!����
//���û�л�ʤ�������No winner!����
//ʾ��1
//����
//K O B
//O K B
//B O K
//���
//KiKi wins!

#include<stdio.h>
int main()
{
	char arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	char flag = 0;//�ж���Ӯ
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%c", &arr[i][j]);
			getchar();
		}
	}
	//�ж���Ӯ
	//�ж�����
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			flag=arr[i][0];
			break;
		}
	}
	//�ж�����
	for (i = 0; i < 3; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			flag = arr[0][i];
			break;
		}
	}
	//�ж϶Խ���
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		flag = arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		flag = arr[1][1];
	}
	if (flag == 'K')
	{
		printf("KiKi wins!\n");
	}
	else if (flag == 'B')
	{
		printf("BoBo wins!\n");
	}
	else
	{
		printf("No winner!\n");
	}
	return 0;
}