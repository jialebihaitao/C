#define _CRT_SECURE_NO_WARNINGS
//题目描述
//实现字母的大小写转换。多组输入输出。
//输入描述:
//多组输入，每一行输入大写字母。
//输出描述:
//针对每组输入输出对应的小写字母。
//示例1
//输入
//复制
//A
//B
//输出
//复制
//a
//b
//备注:
//多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。
//方法一
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        putchar(ch+32);
        getchar();//清理\n
        printf("\n");
    }
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", ch + 32);
		getchar();//清理\n
	}
	return 0;
}
//EOF end of file
//答案解析：
//1. 多组数据输入的问题。
//2. getchar 清理缓冲区的问题，这里得理解 输入缓冲区 的问题。
//3.结束 ctrl+z

//例子
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//把输入缓冲区的数组元素获取,剩\n
	printf("请确认密码(Y/N):>");
	getchar();//消除回车影响
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}