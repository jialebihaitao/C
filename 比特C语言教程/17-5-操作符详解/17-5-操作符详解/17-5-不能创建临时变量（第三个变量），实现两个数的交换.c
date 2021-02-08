//笔试题:不能创建临时变量（第三个变量），实现两个数的交换
#define _CRT_SECURE_NO_WARNINGS
//数据比较小时:加减法
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//数据比较大时:异或的方法
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
    a = a^b;
    b = a^b;
    a = a^b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}