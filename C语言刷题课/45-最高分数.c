//题目描述
//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//输入描述:
//多组输入，每行输入包括三个整数表示的分数（0~100），用空格分隔。
//输出描述:
//针对每行输入，输出为一行，即三个分数中的最高分。
//示例1
//输入
//94 98 99
//100 88 60
//输出
//99
//100
//方法一
#include<stdio.h>
int main()
{
    int s1=0;
    int s2=0;
    int s3=0;

    while(~scanf("%d %d %d",&s1,&s2,&s3))
    {
        int max=0;
        if(s1>max)
        {
            max=s1;
        }
        if(s2>max)
        {
            max=s2;
        }
        if(s3>max)
        {
            max=s3;
        }
    printf("%d\n",max);
    }

    return 0;
}
//方法二
#include<stdio.h>
int main()
{
    int s[3]={0};
    while(~scanf("%d %d %d",&s[0],&s[1],&s[2]))
    {
        int max=0;
        int i=0;
        for(i=0;i<3;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
            }
        }
    printf("%d\n",max);
    }

    return 0;
}
