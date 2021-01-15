//练习3：求n的阶乘。（不考虑溢出）
//循环
//#include<stdio.h>
//int Facl(int n)
//{
//    int i=0;
//    int ret=1;
//    for(i=1;i<=n;i++)
//    {
//        ret*=i;
//    }
//    return ret;
//}
//int main()
//{
//    //求n的阶乘
//    int n=0;
//    int ret=0;
//    scanf("%d",&n);
//    ret=Facl(n);//循环的方式
//    printf("%d\n",ret);
//    return 0;
//}
//递归
//          n<=1  ->1
//Fac(n)
//          n>1   ->n*Fac(n-1)
#include<stdio.h>
int Fac2(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*Fac2(n-1);
    }
}
int main()
{
    //求n的阶乘
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=Fac2(n);//循环的方式
    printf("%d\n",ret);
    return 0;
}
