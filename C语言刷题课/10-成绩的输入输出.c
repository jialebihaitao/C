//题目描述
//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//输入描述:
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述:
//一行，把3科成绩显示出来，输出格式详见输出样例。
//示例1
//输入
//60 80 90
//输出
//score1=60,score2=80,score3=90
#include<stdio.h>
int main()
{
    int score1=0;
    int score2=0;
    int score3=0;
    scanf("%d %d %d",&score1,&score2,&score3);
    printf("score1=%d,score2=%d,score3=%d",score1,score2,score3);
    return 0;
}
