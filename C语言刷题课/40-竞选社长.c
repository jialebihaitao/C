//题目描述
//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述:
//一行，字符序列，包含A或B，输入以字符0结束。
//输出描述:
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
//示例1
//输入
//ABBABBAAB0
//输出
//B
//一行字符
//1.一个字符一个字符读取
#include<stdio.h>
int main()
{
    int ch=0;
    int a=0;
    int b=0;
    while(((ch=getchar())!='0')&&ch!=EOF)//getchar读取字符返回了字母的ASCIL值，用int 接收
    {
        if(ch=='A')
        {
            a++;
        }
        if(ch=='B')
        {
            b++;
        }

    }
    if(a==b)
        {
            printf("E\n");
        }
    else if(a>b)
        {
            printf("A\n");
        }
    else
        {
            printf("B\n");
        }
    return 0;
}


//2.读取一行
#include<stdio.h>
int main()
{
    char str[100]={0};
    gets(str);
    int i=0;
    int count=0;
    while(str[i]!='0')
    {
        if(str[i]=='A')
        {
            count++;
        }
        else if(str[i]=='B')
        {
            count--;
        }
        i++;
    }
    if(count>0)
    {
        printf("A\n");
    }
    else if(count<0)
    {
        printf("B\n");

    }
    else
    {
        printf("E\n");
    }

    return 0;
}
//方法三
//#include<stdio.h>
//int main()
//{
//    int ch=0;
//    int count=0;
//    while(((ch=getchar())!='0')&&ch!=EOF)
//    {
//        if(ch=='A')
//        {
//            count++;
//        }
//        if(ch=='B')
//        {
//            count--;
//        }
//    }
//    if(count>0)
//    {
//        printf("A\n");
//    }
//    else if(count<0)
//    {
//        printf("B\n");
//
//    }
//    else
//    {
//        printf("E\n");
//    }
//
//    return 0;
//}
