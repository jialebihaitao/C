#include<stdio.h>
int main()
{//ֻ�ܴ���һ���ַ�
	//int ch=getchar();
	//ch=ch+32;
	//putchar(ch);
	int ch = 0;
	//EOF end of file
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
        printf("\n");
		getchar();//����'\n'
	}
	return 0;

}
