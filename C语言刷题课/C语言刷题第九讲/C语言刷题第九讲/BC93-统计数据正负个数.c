#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//����10���������ֱ�ͳ����������������ĸ�����
//��������:
//����10����������Χ-231~231-1�����ÿո�ָ���
//�������:
//���У���һ�������������ڶ��и��������������ʽ��������
//ʾ��1
//����
//-1 2 3 -6 7 8 -1 6 8 10
//���
//positive:7
//negative:3

#include<stdio.h>
int main()
{
    int i=0;
    int zheng=0;
    int fu=0;
    int t=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&t);
        if(t>0)
        {
            zheng++;
        }
        else
        {
            fu++;
        }
    }
    printf("positive:%d\nnegative:%d\n",zheng,fu);
    return 0;
}