//题目描述
//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//输入描述:
//输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。
//
//输出描述:
//输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔。
//
//示例1
//输入
//5
//10 12 93 12 75
//输出
//10 12 93 75
//方法一 数组内不可能有0
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[1000]={0};
    int i=0;
    //输入
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //去重
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
    }
    //输出
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
//方法二 任何元素都可以
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[1000]={0};
    int i=0;
    //输入
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //去重
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                //把下标为j的位置覆盖掉
                int k=0;
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    //输出
    for(i=0;i<n;i++)
    {

            printf("%d ",arr[i]);

    }
    return 0;
}
