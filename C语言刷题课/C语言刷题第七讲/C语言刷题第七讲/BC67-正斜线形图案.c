#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正斜线形图案。
//输入描述:
//多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量。
//输出描述:
//针对每行输入，输出用“*”组成的正斜线。
//示例1
//输入
//4
//输出
//   *
//  * 
// *  
//*   
//示例2
//输入
//5
//输出
//    *
//   * 
//  *  
// *   
//* 

//方法一
#include <stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		//打印一行
		for (i = 0; i<n; i++)
		{
			//先打印空格
			int j = 0;
			for (j = 0; j < n - 1 - i; j++)
			{
				printf(" ");
			}
			//再打印*
			printf("*");
			//最后打印空格
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i=0;
        for(i=0;i<n;i++)
        {
            int j=0;
            for(j=0;j<n;j++)
            {
                if(i+j==n-1)//输入4,则为0.1.2.3,即n-1
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
    }
    return 0;
}

//答案解析：
//1. 多组输入
//2. 控制好每行的打印，前面是空格，后边是*
//3. *的后边还有空格，一行要打印够n和字符的
//4. 方法2找出打印*的行号和列好的规律是i + j == n - 1