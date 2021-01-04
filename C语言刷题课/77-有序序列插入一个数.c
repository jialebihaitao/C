//题目描述
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//输入描述:
//第一行输入一个整数(0≤N≤50)。
//
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行插入的一个整数。
//
//输出描述:
//输出为一行，N+1个有序排列的整数。
//示例1
//输入
//5
//1 6 9 22 30
//8
//输出
//1 6 8 9 22 30
//方法1
#include<stdio.h>
int main()
{
    int n=0;
    int arr[50]={0};
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=0;//要插入的元素
    scanf("%d",&m);
    //插入
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]>m)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=m;
            break;
        }
    }
    if(i==-1)
    {
        arr[0]=m;
    }
    //输出
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
    int n=0;
    int arr[50]={0};
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=0;//要插入的元素
    scanf("%d",&m);
    //插入
    for(i=n-1;i>=-1;i--)//如果m＜任何一个值0
    {
        if(arr[i]>m)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=m;
            break;
        }
    }

    //输出
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
