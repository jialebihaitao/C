#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//
//��������:
//���У�
//
//��1�У�������n��1��n��100��
//
//��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
//�������:
//���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���
//ʾ��1
//����
//5
//99.5 100.0 22.0 60.0 88.5
//���
//100.00 22.00 74.00

#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    double max=0.0;
    double min=100.0;
    double score=0;
    double sum=0.0;
	int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&score);
        sum+=score;
        if(score>max)
        {
            max=score;
        }
        if(min>score)
        {
            min=score;
        }
    }
    printf("%.2lf %.2lf %.2lf\n",max,min,sum/n);
    return 0;
}

//�𰸽�����
//1. �����ͬʱ�����ֵ��Сֵ����ͣ�Ȼ�������Ҫ�Ľ����