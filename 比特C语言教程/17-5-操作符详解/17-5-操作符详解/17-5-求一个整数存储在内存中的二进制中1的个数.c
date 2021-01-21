//编写代码实现：求一个整数存储在内存中的二进制中1的个数。(补码)
//方法一:存在问题,负数不可以
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
//统计num的补码中有几个一
	int count = 0;		//计数
	while (num != 0)
	{
		if (num % 2 == 1)
		{		//余数
			count++;
		}
		num = num / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}

//方法二:
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int count = 0;		//计数
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
//方法三
#include <stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;		//计数
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}
