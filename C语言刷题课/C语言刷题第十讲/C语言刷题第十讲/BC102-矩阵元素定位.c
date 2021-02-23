#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
//
//输入描述:
//第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示矩阵中的元素。接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
//
//输出描述:
//一行，输出一个整数值，为KiKi想知道的值。
//示例1
//输入
//2 3
//1 2 3
//4 5 6
//1 2 
//输出
//2

#include<stdio.h>
int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int arr[10][10]={0};//1≤x≤n≤10，1≤y≤m≤10
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x=0;
    int y=0;
    scanf("%d %d",&x,&y);
    printf("%d\n",arr[x-1][y-1]);//二维数组下标是从0开始的
    return 0;
}