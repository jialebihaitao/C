//2021-03-08
//����һ����д����ʵ�ֽ�������
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);
    int t=0;
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
    return 0;
}
