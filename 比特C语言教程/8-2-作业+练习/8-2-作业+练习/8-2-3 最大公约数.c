//���Լ��
//����������,��������������Լ��
//շת�����
#include<stdio.h>
int main()
{
    int m=0;
    int n=0;
    scanf("%d%d",&m,&n);
    int r=0;
    while(r=m%n)
    {
        m=n;
        n=r;
    }
    printf("%d",n);
    return 0;
}
