//��ϰ3����n�Ľ׳ˡ��������������
//ѭ��
//#include<stdio.h>
//int Facl(int n)
//{
//    int i=0;
//    int ret=1;
//    for(i=1;i<=n;i++)
//    {
//        ret*=i;
//    }
//    return ret;
//}
//int main()
//{
//    //��n�Ľ׳�
//    int n=0;
//    int ret=0;
//    scanf("%d",&n);
//    ret=Facl(n);//ѭ���ķ�ʽ
//    printf("%d\n",ret);
//    return 0;
//}
//�ݹ�
//          n<=1  ->1
//Fac(n)
//          n>1   ->n*Fac(n-1)
#include<stdio.h>
int Fac2(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*Fac2(n-1);
    }
}
int main()
{
    //��n�Ľ׳�
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=Fac2(n);//ѭ���ķ�ʽ
    printf("%d\n",ret);
    return 0;
}
