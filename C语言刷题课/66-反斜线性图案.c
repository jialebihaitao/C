//题目描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
//输入描述:
//多组输入，一个整数（2~20），表示输出的行数，也表示组成反斜线的“*”的数量。
//
//输出描述:
//针对每行输入，输出用“*”组成的反斜线。
//示例1
//输入
//4
//输出
//*
// *
//  *
//   *
//示例2
//输入
//5
//输出
//*
// *
//  *
//   *
//    *
//方法一 传统写法
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        //先打印空格
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<i;j++)
//            {
//                printf(" ");
//            }
//            //再打印*
//
//            printf("*");
//            //再打印空格
//            for(j=0;j<n-1-i;j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//方法二
#include<stdio.h>
int main()
{
    int n=0;
    while(~scanf("%d",&n))
    {
        int i=0;
        for(i=0;i<n;i++)
        {
            int j=0;
            for(j=0;j<n;j++)
            {
                if(i==j)
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

