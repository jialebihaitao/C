//2021-03-08
//程序三：求一个四位整数的各个数据位
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
