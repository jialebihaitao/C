//题目描述
//输入一个字符，用它构造一个三角形金字塔。
//输入描述:
//输入只有一行，一个字符。
//输出描述:
//该字符构成的三角形金字塔。
//示例1
//输入
//
//1
//输出
//
//    1
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1
#include<stdio.h>
int main()
{
    //输入
    char n=0;
    int i=0;
    int j=0;
    scanf("%c",&n);
    //输出
    for(i=0;i<5;i++)
    {
        //每次进来打印一行
        //先打印空格
        for(j=0;j<5-i-1;j++)
        {
            printf(" ");
        }
        //再打印1
        for(j=0;j<=i;j++)
        {
            printf("%c ",n);
        }
        printf("\n");
    }
    return 0;
}
