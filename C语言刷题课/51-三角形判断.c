//��Ŀ����
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//��������:
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//�������:
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
//ʾ��1
//����
//2 3 2
//3 3 3
//���
//Isosceles triangle!
//Equilateral triangle!
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        if((a+b>c)&&(a+c>b)&&(b+c>a))
        {
            if(a==b&&b==c)
            {
                printf("Equilateral triangle!\n");
            }
            else if(((a==b)&&(b!=c))||((a==c)&&(c!=b))||((b==c)&&(c!=a)))
            {
                printf("Isosceles triangle!\n");
            }
            else
        {
            printf("Ordinary triangle!\n");
        }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}
