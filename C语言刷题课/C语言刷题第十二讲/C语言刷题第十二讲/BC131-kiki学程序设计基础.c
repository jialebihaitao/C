#define _CRT_SECURE_NO_WARNINGS
//题目描述
//BoBo老师教了KiKi学习程序设计基础，他知道C++是带类的C语言，这个“++”主要包含三部分内容：对C语言进行语法上的扩展、面向对象（封装、继承和多态），STL(即模板)。这学期KiKi学习了C和C++，学好他们，其他编程语言都可以很轻松掌握。C和C++的输入有区别，请帮KiKi输出C和C++输出Hello world的代码。
//
//输入描述:
//无
//输出描述:
//printf("Hello world!\n");
//cout << "Hello world!" << endl;

#include <stdio.h>
int main()
{
	//难点：要让转义字符不是转义字符
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;\n");

	return 0;
}