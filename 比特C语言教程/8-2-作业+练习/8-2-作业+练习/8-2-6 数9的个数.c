//��9�ĸ���
//��д������һ��1~100�����������г��ֶ��ٸ�����9
//��λ��9 %9=0
//ʮλ��9 /9=0
#include<stdio.h>
int main()
{
    int i=0;
    int count=0;
    for(i=0;i<=100;i++)
    {
        if(i%10==9)
            count++;
        if(i/10==9)
            count++;
    }
    printf("count=%d\n",count);
    return 0;
}
