//��ϰ4�����n��쳲����������������������
//         n<=2 ->1
//Fib(n)
//         n>2  ->Fib(n-1)+Fib(n-2)
//����һ �ݹ� Ч��̫��
//#include<stdio.h>
//int Fib(int n)
//{
//    if(n<=2)
//    {
//        return 1;
//    }
//    else
//    {
//        return Fib(n-1)+Fib(n-2);
//    }
//}
////50
////49 48
////48 47 47 46
////47 46 46 45 46 45 45 44
////......
////Ч��̫��
//int main()
//{
//    int n=0;
//    int ret=0;
//    scanf("%d",&n);
//    ret=Fib(n);
//    printf("ret=%d",ret);
//    return 0;
//}
//������
#include<stdio.h>
int Fib(int n)
{
    int a=1;
    int b=1;
    int c=1;//쳲��������е�һ��ڶ��Ϊ1
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main()
{
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=Fib(n);
    printf("ret=%d",ret);
    return 0;
}
