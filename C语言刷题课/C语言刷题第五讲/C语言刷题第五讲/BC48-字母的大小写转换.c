#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
//�������� :
//�������룬ÿһ������һ����ĸ��
//������� :
//���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
//ʾ��1
//����
//a
//A
//Z
//���
//A
//a
//z

//����һ
#include<stdio.h>
int main()
{
	int ch = 0;
	while (~scanf(" %c", &ch))
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch - 32);//Сдת��д
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);//��дתСд
		}
	}
	return 0;
}

//������
#include<stdio.h>
#include<ctype.h>
int main()
{
	int ch = 0;
	while (~scanf(" %c", &ch))
	{
		if (islower(ch))//islower�ж��ǲ���Сд��ĸ
		{
			printf("%c\n", toupper(ch));//Сдת��д
		}
		else if (isupper(ch))//�ж��ǲ��Ǵ�д��ĸ
		{
			printf("%c\n", tolower(ch));//��дתСд
		}
	}
	return 0;
}
