#define _CRT_SECURE_NO_WARNINGS
//题目描述
//确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）。 
//输入描述:
//无
//输出描述:
//不同整型数据类型在内存中占多大（字节），具体格式详见输出样例，输出样例中的?为不同整型数据类型在内存中占的字节数。输出样例如下：
//The size of short is ? bytes.
//The size of int is ? bytes.
//The size of long is ? bytes.
//The size of long long is ? bytes.
#include<stdio.h>
int main()
{
	//sizeof-操作符 不是函数
    printf("The size of short is %d bytes.\n",sizeof(short));
    printf("The size of int is %d bytes.\n",sizeof(int));
    printf("The size of long is %d bytes.\n",sizeof(long));
    printf("The size of long long is %d bytes.\n",sizeof(long long));
    return 0;
}
//答案解析：
//这类入门的题目基本都是没有输入操作的。
//本题的关键是要掌握C语言的 sizeof 这个操作符。
//sizeof 是C语言的一个单目操作符，用来计算不同类型数据所占内存空间的大小，单位是字节