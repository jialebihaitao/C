//��Ŀ����
//���ݸ�����������3����a, b, c��0 < a, b, c < 100,000�������������ε��ܳ��������
//��������:
//һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո������
//�������:
//һ�У��������ܳ��������������λС�������м���һ���ո��������������ʽ������������
//ʾ��1
//����
//3 3 3
//���
//circumference=9.00 area=3.90
#include<stdio.h>
#include<math.h>
int main()
{
    //����
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    //����
    double p=(a+b+c)/2.0;//���׹�ʽ
    double circumference=a+b+c;
    double area=sqrt(p*(p-a)*(p-b)*(p-c));//sqrt ��ƽ��
    printf("circumference=%.2lf area=%.2lf",circumference,area);
    return 0;
}
