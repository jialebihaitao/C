//2021-03-08
//����������һ����λ�����ĸ�������λ
#include<stdio.h>
int main()
{
    int a=0;
    int t=0;
    scanf("%d",&a);
    int i=0;
    for(i=0;i<4;i++)
    {
        t=a%10;
        printf("%d\n",t);
        a=a/10;
    }
    return 0;
}
