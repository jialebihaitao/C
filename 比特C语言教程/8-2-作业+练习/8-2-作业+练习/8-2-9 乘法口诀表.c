//�˷��ھ���
//����Ļ�����9*9�ĳ˷��ھ���
#include<stdio.h>
int main()
{
    int i=0;
    for(i=1;i<=9;i++)//��ӡ9��
    {
        //��ӡһ��
        int j=1;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);
        }
        printf("\n");

    }
    return 0;
}
