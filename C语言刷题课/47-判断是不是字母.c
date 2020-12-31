//题目描述
//KiKi想判断输入的字符是不是字母，请帮他编程实现。
//
//输入描述:
//多组输入，每一行输入一个字符。
//输出描述:
//针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
//示例1
//输入
//A
//6
//输出
//A is an alphabet.
//6 is not an alphabet.
//方法一
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            printf("%c is an alphabet.\n",ch);

        }
        else
        {
            printf("%c is not an alphabet.\n",ch);
        }
        getchar();
    }
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            printf("%c is an alphabet.\n",ch);

        }
        else
        {
            printf("%c is not an alphabet.\n",ch);
        }
        getchar();
    }
    return 0;
}
