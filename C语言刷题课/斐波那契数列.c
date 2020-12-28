#include<stdio.h>
int main()
{
	int i, f1, f2, f3, row;
	f1 = 1, f2 = 1;
	printf("输入需要输出的行数:");
	scanf("%d", &row);
	printf("\n");
	printf("%d\n%d\n", f1, f2);
	for (i = 1; i < row - 1; i++)
	{
		f3 = f2 + f1;
		printf("%d\n", f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
