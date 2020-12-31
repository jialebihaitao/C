//题目描述
//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//输入描述:
//多组输入，每行输入包括一个整数表示的智商。
//输出描述:
//针对每行输入，输出“Genius”。
//示例1
//输入
//160
//输出
//Genius
//方法一
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=140)
        {
            printf("Genius\n");
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
        if(n>=140)
        {
            printf("Genius\n");
        }
    }
    return 0;
}
