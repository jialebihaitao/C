//3. дһ��������ʵ��һ��������������Ķ��ֲ���
//���ֲ��� ��һ�����������в��Ҿ����ĳ����
//����ҵ���,�����±�
//���û�ҵ�,����-1
#include<stdio.h>
//�����Ϻ�������������ָ��
int binary_search(int arr[], int k, int sz)
{
	//�㷨��ʵ��
	int left = 0;
	int right = sz - 1;
//int mid = (left + right) / 2;���ܷ�������
	while (left <= right)//����:<=
	{
        int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//�Ҳ��������

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;//������Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
	int ret = binary_search(arr, k, sz);
	//���ݵ��������һ��Ԫ��
	if (ret == -1)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�±���%d\n", ret);
	}
	return 0;
}
