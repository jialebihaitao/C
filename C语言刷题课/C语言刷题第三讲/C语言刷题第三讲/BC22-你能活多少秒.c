#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
// ���⣺һ��Լ��3.156��107s��Ҫ�������������䣬��ʾ������϶����롣
//��������:
//һ�У�����һ������age(0<age<=200)��
//�������:
//һ�У�����һ����������������Ӧ��������
//ʾ��1
//����
//20
//���
//631200000
#include<stdio.h>
int main()
{
    int age=0;
    scanf("%d",&age);
    long long sec=age*3.156e7;
    printf("%lld\n",sec);
    return 0;
}