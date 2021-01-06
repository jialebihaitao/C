//题目描述
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入描述:
//两行，第一行为n，表示n个成绩，不会大于10000。
//
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出描述:
//一行，输出n个成绩中最高分数和最低分数的差。
//示例1
//输入
//10
//98 100 99 97 95 99 98 97 96 100
//输出
//5
#include<stdio.h>
int main()
{
    int n=0;
    int max=0;
    int min=100;
    scanf("%d",&n);
    int i=0;
    int t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>max)
        {
            max=t;
        }
        if(t<min)
        {
           min=t;
        }
    }
    printf("%d\n",max-min);
    return 0;
}
