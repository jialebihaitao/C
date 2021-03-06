#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
//输入描述:
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述:
//输出为一行，如果序列有序输出sorted，否则输出unsorted。
//示例1
//输入
//5
//1 6 9 22 30
//输出
//sorted
//示例2
//输入
//5
//3 4 7 2 10
//输出
//unsorted

#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[50]={0};//3≤N≤50
    int i=0;
    int flag1=1;//升序有序
    int flag2=1;//降序有序
    for(i=0;i<n;i++)       
    {
        scanf("%d",&arr[i]);
    }
	//判断是否有序
    for(i=0;i<n-1;i++)//n-1对
    {
        //判断是否是升序
        if(arr[i]>=arr[i+1])
        {
            flag1=0;//不是升序
        }
        //判断是否是降序
        if(arr[i]<arr[i+1])
        {
            flag2=0;//不是降序
        }
    }
    if(flag1+flag2==1)
    {
        printf("sorted\n");
    }
    else
    {
        printf("unsorted\n");
    }
    return 0;
}

//答案解析：
//1. 题目中设置2个标记变量，flag1，flag2，满足相邻2个元素升序把flag1设置为1，满足相邻2个元
//素降序把flag2设置为1.如果flag1和flag2都是1，那就是乱序。