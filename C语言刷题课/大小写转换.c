#include<stdio.h>
int main()
{//只能处理一个字符
	//int ch=getchar();
	//ch=ch+32;
	//putchar(ch);
	int ch = 0;
	//EOF end of file
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
        printf("\n");
		getchar();//清理'\n'
	}
	return 0;

}
