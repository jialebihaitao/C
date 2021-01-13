//计算1到10的阶乘
//方法一
//#include<stdio.h>
//int main()
//{
//    int i=0;
//    int n=0;
//
//    int sum=0;
//    for(n=1;n<=10;n++)
//    {
//        int ret=1;//0的阶乘是1
//        for(i=1;i<=n;i++)
//          {
//             ret=ret*i;
//
//          }
//    sum=sum+ret;
//    }
//
//    printf("sum=%d\n",sum);
//    return 0;
//}
//方法二
#include<stdio.h>
int main()
{
    int n=0;
    int sum=0;
    int ret=1;
    for(n=1;n<=10;n++)
    {
       ret=ret*n;
       sum=sum+ret;
    }

    printf("sum=%d\n",sum);
    return 0;
}
