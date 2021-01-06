//题目描述
//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
//
//
//输入描述:
//每行有两个用空格分开的字符串，第一个为密码，第二个为重复密码。
//输出描述:
//每组输出一个字符串（“same”或“different”）。
//示例1
//输入
//abc abc
//输出
//same
#include<stdio.h>
int main()
{
    char s1[100]={0};
    char s2[100]={0};
    scanf("%s %s",s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    return 0;
}
