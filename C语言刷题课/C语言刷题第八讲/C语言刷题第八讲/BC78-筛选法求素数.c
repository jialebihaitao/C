#define _CRT_SECURE_NO_WARNINGS
//题目描述
//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
//输入描述:
//多组输入，每行输入一个正整数（不大于100）。
//输出描述:
//针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
//
//第二行，输出数组中2之后0 的个数。每行输出后换行。
//示例1
//输入
//20
//输出
//2 3 5 7 11 13 17 19
//11

//方法一 筛选法求素数
#include<stdio.h>
int main()
{
    int n=0;
    int arr[101]={0};//1-100
	//0 1 2 3 4
	//0 1 2 3 4
	//目的:数字与下标相同
    int count=0;//个数
    while(~scanf("%d",&n))
    {
        int i=0;
        //0-n之间的数字存放到数组中
        for(i=0;i<n;i++)
        {
            arr[i]=i;
        }
        //筛选
        for(i=2;i<=n;i++)
        {
            int j=0;
            for(j=i+1;j<=n;j++)
            {
                if(arr[j]%i==0)
                {
                    arr[j]=0;
                }
            }
        }
        for(i=2;i<=n;i++)
        {
			if (arr[i] == 0)
			{
				count++;
			}
			else
			{
				printf("%d ", arr[i]);
			}
        }
        printf("\n%d\n",count);
    }
    return 0;
}

//方法二:试除法求素数
#include<stdio.h>
//判断i是否为素数
//素数:只能被1和他本身整除 
  //拿2~i-1的数字试除I
    //如果整除,i不是素数
    //如果所有的2~i-1之间的素数都不能整除i,i就是素数
//如果是素数返回1
//不是素数返回0

int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
    int count=0;
	scanf("%d", &n);
	//打印n以内所有素数
	//1~n之间是素数就打印
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		//判断i是不是素数
		if (is_prime(i))
		{
			printf("%d ", i);
            count++;
            
		}
	}
    printf("\n%d\n",n-count-1);
	return 0;
}