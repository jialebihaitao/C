#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入10个整数，分别统计输出正数、负数的个数。
//输入描述:
//输入10个整数（范围-231~231-1），用空格分隔。
//输出描述:
//两行，第一行正数个数，第二行负数个数，具体格式见样例。
//示例1
//输入
//-1 2 3 -6 7 8 -1 6 8 10
//输出
//positive:7
//negative:3

#include<stdio.h>
int main()
{
    int i=0;
    int zheng=0;
    int fu=0;
    int t=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&t);
        if(t>0)
        {
            zheng++;
        }
        else
        {
            fu++;
        }
    }
    printf("positive:%d\nnegative:%d\n",zheng,fu);
    return 0;
}