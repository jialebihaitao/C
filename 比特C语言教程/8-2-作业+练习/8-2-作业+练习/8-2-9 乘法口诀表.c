//乘法口诀表
//在屏幕上输出9*9的乘法口诀表
#include<stdio.h>
int main()
{
    int i=0;
    for(i=1;i<=9;i++)//打印9行
    {
        //打印一行
        int j=1;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);
        }
        printf("\n");

    }
    return 0;
}
