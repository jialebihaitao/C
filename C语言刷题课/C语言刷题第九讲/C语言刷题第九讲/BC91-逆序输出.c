#define _CRT_SECURE_NO_WARNINGS
//题目描述
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//输入描述:
//一行，输入10个整数（范围-231~231-1），用空格分隔。
//输出描述:
//一行，逆序输出输入的10个整数，用空格分隔。
//示例1
//输入
//1 2 3 4 5 6 7 8 9 10
//输出
//10 9 8 7 6 5 4 3 2 1

//方法一 倒序打印
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	//输入
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//输出
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//不仅仅是逆序输出，而是要把数组中的数据逆序存放
#include<stdio.h>
int main()
{
    int arr[10]={0};
    int i=0;
	//输入
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=9;//下标是0~9
    while(left<right)
    {
        int t=arr[left];
        arr[left]=arr[right];
        arr[right]=t;
        left++;
        right--;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

