#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
//
//��������:
//�������룬ÿһ������һ���ַ���
//�������:
//���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
//ʾ��1
//����
//A
//6
//���
//A is an alphabet.
//6 is not an alphabet.

//����һ
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
		{
			printf("%c is an alphabet.\n", ch);

		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
		//����\nӰ��
		getchar();
	}
	return 0;
}

//������ isalpha
#include<stdio.h>
#include<ctype.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            printf("%c is an alphabet.\n",ch);

        }
        else
        {
            printf("%c is not an alphabet.\n",ch);
        }
        getchar();
    }
    return 0;
}
