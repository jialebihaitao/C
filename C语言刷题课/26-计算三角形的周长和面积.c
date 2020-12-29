//题目描述
//根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积。
//输入描述:
//一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//输出描述:
//一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
//示例1
//输入
//3 3 3
//输出
//circumference=9.00 area=3.90
#include<stdio.h>
#include<math.h>
int main()
{
    //输入
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    //计算
    double p=(a+b+c)/2.0;//海伦公式
    double circumference=a+b+c;
    double area=sqrt(p*(p-a)*(p-b)*(p-c));//sqrt 开平方
    printf("circumference=%.2lf area=%.2lf",circumference,area);
    return 0;
}
