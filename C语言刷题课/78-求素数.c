//�ж�i�ǲ�������
//����������ͷ���1��������������0
//���� ֻ�ܱ�1��������i��������
//��2��i-1�Գ�i
//�����������������
//����һ
#include<stdio.h>
int is_prime(int i)
{
    int j=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d ",i);
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(is_prime(i))

        {
            printf("%d ",i);
        }
    }
    return 0;
}
//������ ż��һ����������
int is_prime(int i)
{
    int j=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d ",i);
    int i=0;
    for(i=3;i<=n;i+=2)
    {
        if(is_prime(i))

        {
            printf("%d ",i);
        }
    }
    return 0;
}
