#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//ʵ����ĸ�Ĵ�Сдת�����������������
//��������:
//�������룬ÿһ�������д��ĸ��
//�������:
//���ÿ�����������Ӧ��Сд��ĸ��
//ʾ��1
//����
//����
//A
//B
//���
//����
//a
//b
//��ע:
//�������������Ҫע�⡰�س���Ҳ����ĸ������Ҫ�����ա�(getchar())������ĸ��
//����һ
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        putchar(ch+32);
        getchar();//����\n
        printf("\n");
    }
    return 0;
}
//������
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", ch + 32);
		getchar();//����\n
	}
	return 0;
}
//EOF end of file
//�𰸽�����
//1. ����������������⡣
//2. getchar �������������⣬�������� ���뻺���� �����⡣
//3.���� ctrl+z

//����
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//�����뻺����������Ԫ�ػ�ȡ,ʣ\n
	printf("��ȷ������(Y/N):>");
	getchar();//�����س�Ӱ��
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}