#define _CRT_SECURE_NO_WARNINGS
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
//2.读取一行

//方法一
#include<stdio.h>
int main()
{
	int ch = 0;
	int count_a = 0;
	int count_b = 0;
	//一个字符一个字符读取
	while (((ch = getchar()) != '0')&&ch!=EOF)
	{
		if (ch == 'A')
		{
			count_a++;
		}
		if (ch == 'B')
		{
			count_b++;
		}
	}
	if (count_a == count_b)
	{
		printf("E\n");
	}
	else if (count_a > count_b)
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
	int ch = 0;
	int count = 0;
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch == 'A')
		{
			count++;
		}
		if (ch == 'B')
		{
			count--;
		}
	}
	if (count > 0)
	{
		printf("A\n");
	}
	else if (count == 0)
	{
		printf("E\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//方法三
#include<stdio.h>
int main()
{
	char str[100] = { 0 };
	//输入一行
	gets(str);
	int i = 0;
	int count = 0;
	while (str[i] != '0')
	{
		if (str[i] == 'A')
		{
			count++;
		}
		if (str[i] == 'B')
		{
			count--;
		}
		i++;
	}
	if (count > 0)
	{
		printf("A\n");
	}
	else if (count == 0)
	{
		printf("E\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}

//答案解析
//1. 本题有很多解法。
//2. 主要就是读取输入数据的问题要解决好，输入有2个结束条件（遇到读取结束EOF，或者'0'）。
//3. 剩余的工作就是统计个数后，然后根据情况按照格式输出。