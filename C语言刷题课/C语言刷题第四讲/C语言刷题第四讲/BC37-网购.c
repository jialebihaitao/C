#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//输入描述:
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。
//输出描述:
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
//示例1
//输入
//1000.0 11 11 1
//输出
//650.00
//示例2
//输入
//999.8 12 12 0
//输出
//799.84
//示例3
//输入
//66.6 11 11 1
//输出
//0.00

//方法一
#include<stdio.h>
int main()
{
	float price = 0.0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%f %d %d %d", &price, &m, &d, &flag);
	if ((m == 11) && (d == 11))
	{
		price *= 0.7;
		if (flag == 1)//优惠券只能在双十一或者双十二使用
		{
			price -= 50;
		}
	}
	if ((m == 12) && (d == 12))
	{
		price *= 0.8;
		if (flag == 1)//优惠券只能在双十一或者双十二使用
		{
			price -= 50;
		}
	}
	if (price < 0.0)
	{
		price = 0.0;
	}
	printf("%.2f\n", price);//保留两位小数
	return 0;
}
//方法二
#include<stdio.h>
int main()
{
    float price=0.0;
    int m=0;//月
    int d=0;//天
    int flag=0;//优惠卷
    float cut=1.0;//折扣 0.0错误,表示白给
    scanf("%f %d %d %d",&price,&m,&d,&flag);
    if((m==11)&&(d==11))
    {
        cut=0.7;
    }
    else if((m==12)&&(d==12))
    {
        cut=0.8;
    }
    price=price*cut-flag*50;
    if(price<0.0)
        price=0.0;
    printf("%.2f\n",price);

    return 0;
}

//答案解析
//1. 本地理解好题目意思，然后计算机就可以
//2. 注意抵扣完后价格小于0，只能按照0计算
//3. 按照格式输出