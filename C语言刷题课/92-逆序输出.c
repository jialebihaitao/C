//��Ŀ����
//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
//��������:
//һ�У�����10����������Χ-231~231-1�����ÿո�ָ���
//�������:
//һ�У�������������10���������ÿո�ָ���
//ʾ��1
//����
//1 2 3 4 5 6 7 8 9 10
//���
//10 9 8 7 6 5 4 3 2 1
//����һ
//#include<stdio.h>
//int main()
//{
//    int arr[10]={0};
//    int i=0;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//
//    }
//    for(i=9;i>=0;i--)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//������
#include<stdio.h>
int main()
{
    int arr[10]={0};
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=9;
    while(left<right)
    {
        int t=arr[left];
        arr[left]=arr[right];
        arr[right]=t;
        left++;
        right--;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
