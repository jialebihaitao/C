#define _CRT_SECURE_NO_WARNINGS
//4.任给一半经，输出圆的周长和面积（应用符号常量） 
#include<stdio.h>
#define PI 3.14
int main()
{
	int r = 0;
	int c = 0;
	int s = 0;
	scanf("%d", &r);
	printf("c=%f,s=%f", 2 * PI*r, PI*r*r);
	return 0;
}
