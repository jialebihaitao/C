#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
//��������:
//�������룬ÿ���������һ���ַ���
//�������:
//���ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO����
//ʾ��1
//����
//H
//9
//���
//YES
//NO
//����һ
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
		//�ж���ĸ
        //�жϴ�Сд
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        //����\n
        getchar();
    }
    return 0;
}
//������   �⺯��isalpha
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		//�ж���ĸ
		//�жϴ�Сд
		if (isalpha(ch))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		//����\n
		getchar();
	}
	return 0;
}
//���������
//1. �����Ƕ������룬һ��Ҫע��ѭ�����������
//2. �ַ����жϿ����Լ�д��Ҳ���Խ����ڿ⺯����Ҫ��Ϥ�⺯��������Щ