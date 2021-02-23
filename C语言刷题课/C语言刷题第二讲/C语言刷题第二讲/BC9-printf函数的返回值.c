#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述:
//无
//输出描述:
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。
//方法一
#include<stdio.h>
int main()
{
	int ret = printf("Hello world!");
	printf("\n");
	printf("%d\n", ret);
}

//方法二
#include<stdio.h>
int main()
{
	int ret = printf("Hello world!");
	printf("\n%d\n", ret);
}
//方法三
#include<stdio.h>
int main()
{
    printf("\n%d\n",printf("Hello world!"));
    return 0;
}
//答案解析：
//本题的重点是要严格按照题目要求的格式，输出2行，先打印字符串，再打印字符串长度。这里就要控
//制好格式，写法比较多。
//拓展
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d"), 43));//4321
	//C语言刷题课2 25:00处
	return 0;
}