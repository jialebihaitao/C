#define _CRT_SECURE_NO_WARNINGS
//题目描述
//
//输入两个整数，范围-231~231-1，交换两个数并输出。
//
//输入描述:
//输入只有一行，按照格式输入两个整数，范围，中间用“,”分隔。
//输出描述:
//把两个整数按格式输出，中间用“,”分隔。
//示例1
//输入
//a=1,b=2
//输出
//a=2,b=1
//备注:
//如果格式控制串中有非格式字符则输入时也要输入该非格式字符。
//方法一
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("a=%d,b=%d",&a,&b);
//    //交换两个值
//    int t=0;
//    t=a;
//    a=b;
//    b=t;
//    //输出

    printf("a=%d,b=%d\n",b,a);
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("a=%d,b=%d",&a,&b);

    //交换两个值
    int t=0;
    t=a;
    a=b;
    b=t;

    //输出
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

//答案解析：
//输入和输出格式的控制，如果格式控制串中有非格式字符则输入时也要输入该非格式字符。