//��Ŀ����
//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//
//��������:
//һ�У�һ��������N����1��N��100,000��
//�������:
//һ�У�1~N֮�������ĸ�����ż���ĸ������ÿո�ֿ���
//ʾ��1
//����
//5
//���
//3 2
//����һ
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int i=0;
//    int odd=0;//�����ĸ���
//    int even=0;//ż���ĸ���
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
//������
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int i=0;
//    int odd=0;//�����ĸ���
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
//������
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
