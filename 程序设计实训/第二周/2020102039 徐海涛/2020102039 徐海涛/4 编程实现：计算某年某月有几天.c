#define _CRT_SECURE_NO_WARNINGS
//4.编程实现：计算某年某月有几天。
#include<stdio.h>
int main()
{
	int y = 0;
	int m = 0;
	scanf("%d", &y);
	scanf("%d", &m);
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		printf("31\n");
		break;
	default:
		if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
		{
			printf("29\n");
		}
		else
		{
			printf("28\n");
		}
		break;

	}
	return 0;
}
