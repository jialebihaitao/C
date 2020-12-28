//题目描述
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述:
//多组输入，每行输入包括一个字符。
//输出描述:
//针对每行输入，输出该字符是字母（YES）或不是（NO）。
//示例1
//输入
//H
//9
//输出
//YES
//NO

#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        //判断大小写
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        //清理\n
        getchar();
    }
    return 0;
}

