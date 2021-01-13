//打印素数
//写一个代码:打印100-200之间的素数
//方法一
//#include<stdio.h>
//int main()
//{
//    int i=0;
//    int count=0;
//    for(i=100;i<=200;i++)
//    {
//        //判断i是否为素数
//        //素数判断规则:只能被1和它本身整除
//        //1.试除法
//        //产生2~i-1之间的数字
//        int j=2;
//        for(j=2;j<=i-1;j++)
//        {
//            if(i%j==0)
//            {
//                break;
//            }
//        }
//        if(j==i)
//        {
//            count++;
//            printf("%d ",i);
//        }
//    }
//    printf("\ncount=%d",count);
//    return 0;
//}
//方法二 若i=a*b,则a和b之间至少有一个数字<=根号i
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i=0;
//    int count=0;
//    for(i=100;i<=200;i++)
//    {
//
//        int j=2;
//        //for(j=2;j<i/2;j++)
//        for(j=2;j<=sqrt(i);j++)
//        {
//            if(i%j==0)
//            {
//                break;
//            }
//        }
//        if(j>sqrt(i))
//        {
//            count++;
//            printf("%d ",i);
//        }
//    }
//    printf("\ncount=%d",count);
//    return 0;
//}
//方法三 偶数不可能是素数
#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    int count=0;
    for(i=101;i<=200;i+=2)
    {

        int j=2;
        //for(j=2;j<i/2;j++)
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    printf("\ncount=%d",count);
    return 0;
}

