#define _CRT_SECURE_NO_WARNINGS
//题目描述
//在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题。大家都知道China的英文缩写是CHN，那么给你一个字符串s，你需要做的是统计s中子串“CHN”的个数。
//子串的定义：存在任意下标a < b < c，那么“s[a]s[b]s[c]”就构成s的一个子串。如“ABC”的子串有“A”、“B”、“C”、“AB”、“AC”、“BC”、“ABC”。
//
//
//输入描述:
//输入只包含大写字母的字符串s。(1 ≤ length ≤ 8000)
//输出描述:
//输出一个整数，为字符串s中字串“CHN”的数量。
//示例1
//输入
//CCHNCHN
//输出
//7
//示例2
//输入
//CCHNCHNCHNCHN
//输出
//30

#include<stdio.h>
int main()
{
	char arr[8000] = { 0 };
	scanf("%s", arr);
	long long c = 0;
	long long ch = 0;
	long long chn = 0;
	char* p = arr;//数组名表示数组首元素地址
	while (*p)
	{
		if (*p == 'C')
		{
			c++;
		}
		else if (*p == 'H')
		{
			ch += c;
		}
		else if (*p == 'N')
		{
			chn += ch;
		}
		p++;
	}
	printf("%lld\n", chn);
	return 0;
}

//答案解析
//这个题的难度在于理解题目的意思
//不是连续的子串
//只要在字符串中找到几个字符能组合成子串就算是“子串”//ch的个数其实和前面出现的c的个数有关，chn的个数和n之前ch的个数有关。