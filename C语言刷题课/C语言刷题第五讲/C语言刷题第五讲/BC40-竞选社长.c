#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//��������:
//һ�У��ַ����У�����A��B���������ַ�0������
//�������:
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
//ʾ��1
//����
//ABBABBAAB0
//���
//B

//һ���ַ�
//1.һ���ַ�һ���ַ���ȡ
//2.��ȡһ��

//����һ
#include<stdio.h>
int main()
{
	int ch = 0;
	int count_a = 0;
	int count_b = 0;
	//һ���ַ�һ���ַ���ȡ
	while (((ch = getchar()) != '0')&&ch!=EOF)
	{
		if (ch == 'A')
		{
			count_a++;
		}
		if (ch == 'B')
		{
			count_b++;
		}
	}
	if (count_a == count_b)
	{
		printf("E\n");
	}
	else if (count_a > count_b)
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//������
#include<stdio.h>
int main()
{
	int ch = 0;
	int count = 0;
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch == 'A')
		{
			count++;
		}
		if (ch == 'B')
		{
			count--;
		}
	}
	if (count > 0)
	{
		printf("A\n");
	}
	else if (count == 0)
	{
		printf("E\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//������
#include<stdio.h>
int main()
{
	char str[100] = { 0 };
	//����һ��
	gets(str);
	int i = 0;
	int count = 0;
	while (str[i] != '0')
	{
		if (str[i] == 'A')
		{
			count++;
		}
		if (str[i] == 'B')
		{
			count--;
		}
		i++;
	}
	if (count > 0)
	{
		printf("A\n");
	}
	else if (count == 0)
	{
		printf("E\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//�𰸽���
//1. �����кܶ�ⷨ��
//2. ��Ҫ���Ƕ�ȡ�������ݵ�����Ҫ����ã�������2������������������ȡ����EOF������'0'����
//3. ʣ��Ĺ�������ͳ�Ƹ�����Ȼ�����������ո�ʽ�����