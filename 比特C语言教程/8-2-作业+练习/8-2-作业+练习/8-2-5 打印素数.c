//��ӡ����
//дһ������:��ӡ100-200֮�������
//����һ
//#include<stdio.h>
//int main()
//{
//    int i=0;
//    int count=0;
//    for(i=100;i<=200;i++)
//    {
//        //�ж�i�Ƿ�Ϊ����
//        //�����жϹ���:ֻ�ܱ�1������������
//        //1.�Գ���
//        //����2~i-1֮�������
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
//������ ��i=a*b,��a��b֮��������һ������<=����i
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
//������ ż��������������
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

