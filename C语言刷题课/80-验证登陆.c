//题目描述
//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
//输入描述:
//多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个位密码。
//输出描述:
//针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）。
//示例1
//输入
//admin admin
//输出
//Login Success!
//示例2
//输入
//admin abc
//输出
//Login Fail!
#include<stdio.h>
int main()
{
    char name[20]={0};
    char password[20]={0};
    while(~scanf("%s %s",name,password))
    {
        //字符串比较不能使用=比较
        //应该使用strcmp
        if(strcmp(name,"admin")==0&&strcmp(password,"admin")==0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}
