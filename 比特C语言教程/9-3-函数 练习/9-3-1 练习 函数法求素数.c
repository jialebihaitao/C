//1. 写一个函数可以判断一个数是不是素数
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	//2->n-1
	int j = 0;
	for (j = 2; j <= sqrt(n); j+=2)
	{
		if (n%j == 0)
		{
		    return 0;
		}
	}
    return 1;//j=n
}
int main()
{
	int i = 0;
	//打印100-200之间所有素数
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)//是素数 返回1 不是素数 返回0
			printf("%d ",i);
	}
	return 0;
}
