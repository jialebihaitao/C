//题目描述
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//输入描述:
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述:
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。
//输出时如果月份或天数为1位数，需要在1位数前面补0。
//示例1
//输入
//20130225
//输出
//year=2013
//month=02
//date=25
//备注:
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），
//按此宽度截取所需数据；通过printf函数的%0格式控制符，
//输出数值时指定左面不使用的空位置自动填0。
#include<stdio.h>
int main()
{
    int y=0;
    int m=0;
    int d=0;
    scanf("%4d%2d%2d",&y,&m,&d);//指定域宽
    printf("year=%d\n",y);
    printf("month=%02d\n",m);//通过printf函数的%0格式控制符,并指定域宽
    printf("date=%02d\n",d);//通过printf函数的%0格式控制符,并指定域宽
    return 0;
}
