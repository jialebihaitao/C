#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//����һ����������Ҫ��õ��ø������ĸ�λ����
//
//��������:
//һ�У�����һ����������
//�������:
//һ�У�����һ��������Ϊ���븡������Ӧ�ĸ�λ����
//ʾ��1
//����
//13.141
//���
//3
//����һ
#include<stdio.h>
int main()
{
    int n=0;//int��ֱ�Ӱ�С������ɾ����
    scanf("%d",&n);
    printf("%d\n",n%10);
    return 0;
}
//������
#include<stdio.h>
int main()
{
	float n = 0;
	scanf("%f", &n);
	printf("%d\n", ((int)n) % 10);
	return 0;
}