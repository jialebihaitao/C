//最大公约数
//给定两个数,求这两个书的最大公约数
//辗转相除法
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
