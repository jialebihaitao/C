//题目描述
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//
//输入描述:
//一行，一个正整数N。（1≤N≤100,000）
//输出描述:
//一行，1~N之间奇数的个数和偶数的个数，用空格分开。
//示例1
//输入
//5
//输出
//3 2
//方法一
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int i=0;
//    int odd=0;//奇数的个数
//    int even=0;//偶数的个数
//    for(i=1;i<=n;i++)
//    {
//        if(i%2==1)
//        {
//            odd++;
//        }
//        else
//        {
//            even++;
//        }
//
//    }
//    printf("%d %d\n",odd,even);
//    return 0;
//}
//方法二
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int i=0;
//    int odd=0;//奇数的个数
//    for(i=1;i<=n;i++)
//    {
//        if(i%2==1)
//        {
//            odd++;
//        }
//
//    }
//    printf("%d %d\n",odd,n-odd);
//    return 0;
//}
//方法三
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d %d\n",n/2,n/2);
    }
    else
    {
        printf("%d %d\n",(n/2)+1,n/2);
    }
    return 0;
}
