#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//��������:
//�������룬ÿ������һ����ĸ��
//�������:
//���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����
//ʾ��1
//����
//A
//b
//���
//Vowel
//Consonant

//����һ
#include<stdio.h>
int main()
{
    int ch=0;
    char s[]="AaEeIiOoUu";
    while(~(ch=getchar()))
    {
        //�ж�ch�ǲ��Ǻ�s������ĳ���ַ���ͬ
        int i=0;
        for(i=0;i<10;i++)
        {
            if(ch==s[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i==10)
        {
            printf("Consonant\n");
        }
        //����\n
        getchar();
    }
    return 0;
}

//������
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
	while (scanf(" %c", &ch) != EOF)
	{
		int i = 0;
		for (i = 0; i<10; i++)
		{
			if (ch == arr[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}

//������
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
	//����Ϊ�´����¿հ��ַ�������
	while (scanf("%c\n", &ch) != EOF)
	{
		
		int i = 0;
		 for (i = 0; i<10; i++)
		 {
			 if (ch == arr[i])
			 {
				 printf("Vowel\n");
				 break;
			 }
		 }
		 if (i == 10)
			 printf("Consonant\n");
	}
	return 0;
}