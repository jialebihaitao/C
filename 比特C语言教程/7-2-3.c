//3. ��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n);
//����:��v[0]<=v[1]<=v[2]<= ....<=v[n-1]�������в���x.
//����һ
//#include<stdio.h>
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8.9,10};
//    int k=7;//��Ҫ�ҵ�Ԫ��
//    int i=0;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    for(i=0;i<sz;i++)
//    {
//        if(k==arr[i])
//        {
//            printf("�ҵ���,�±���:%d\n",i);
//            break;
//        }
//    }
//    if(i==sz)
//    {
//        printf("�Ҳ���\n");
//    }
//    return 0;
//}
//������:�۰�����㷨(���ֲ����㷨)
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int k = 7;//��Ҫ�ҵ�Ԫ��
	int left = 0;//���±�
	int right = sz - 1;//���±�:Ԫ�ظ���-1
	while (left <= right)//�ж�����:��<��
	{
		int mid = (left + right) / 2;//�м�Ԫ���±�:�����±����
		if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���,�±�:%d\n", mid);
			break;
		}

	}
        if (left>right)
		{
			printf("�Ҳ���\n");
		}

		return 0;
}
