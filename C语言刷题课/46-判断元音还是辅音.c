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
    while((ch=getchar())!=EOF)
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
#include<stdio.h>
int main()
{
    int ch=0;
    char s[]="AaEeIiOoUu";
    while(scanf(" %c,&ch")!=EOF)
        //while(scanf("%c\n,&ch")!=EOF)
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

    }
    return 0;
}
