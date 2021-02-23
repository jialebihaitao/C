#define _CRT_SECURE_NO_WARNINGS
//题目描述
//每个人都想成为大V (VIP：Very Important Person)，但要一点一点积累才行，先从小v做起。要求输出由小写字母v组成的大V。
//输入描述:
//无
//输出描述:
//v   v
// v v
//  v
//
//备注:
//换行使用转义字符‘\n’
//方法一
#include <stdio.h>
//代码1
int main()
{
	printf("v   v\n");
	printf(" v v\n");
	printf("  v\n");
	return 0;
}
//方法二
#include<stdio.h>
int main()
{
    printf("v   v\n v v\n  v\n");
    
    return 0;
}
//答案解析：
//这个题也是没有输入要求的题目，所以相对比较简单。
//题目中只要能够找到输出的规律和掌握 \n 的使用就没问题。
//这里简单提及：转义字符，可以做一个拓展。