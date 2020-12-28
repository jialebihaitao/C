//题目描述
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述:
//无
//输出描述:
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。
//方法一
//#include<stdio.h>
//int main()
//{
//    int ret=printf("Hello world!");
//    printf("\n");
//    printf("%d",ret);
//    return 0;
//}
//方法二
//#include<stdio.h>
//int main()
//{
//    int ret=printf("Hello world!");
//    printf("\n%d",ret);
//    return 0;
//}
//方法三
#include<stdio.h>
int main()
{

    printf("\n%d\n",printf("Hello world!"));
    return 0;
}
