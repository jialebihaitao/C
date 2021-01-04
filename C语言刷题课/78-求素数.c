//判断i是不是素数
//如果是素数就返回1，不是素数返回0
//素数 只能被1和它本身i整除的数
//拿2到i-1试除i
//如果整除，不是素数
//方法一
#include<stdio.h>
int is_prime(int i)
{
    int j=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d ",i);
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(is_prime(i))

        {
            printf("%d ",i);
        }
    }
    return 0;
}
//方法二 偶数一定不是素数
int is_prime(int i)
{
    int j=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d ",i);
    int i=0;
    for(i=3;i<=n;i+=2)
    {
        if(is_prime(i))

        {
            printf("%d ",i);
        }
    }
    return 0;
}
