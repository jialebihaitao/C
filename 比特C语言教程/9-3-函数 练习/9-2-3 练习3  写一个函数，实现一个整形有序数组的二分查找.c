//3. 写一个函数，实现一个整形有序数组的二分查找
//二分查找 在一个有序数组中查找具体的某个数
//如果找到了,返回下标
//如果没找到,返回-1
#include<stdio.h>
//本质上函数里的数组就是指针
int binary_search(int arr[], int k, int sz)
{
	//算法的实现
	int left = 0;
	int right = sz - 1;
//int mid = (left + right) / 2;不能放在这里
	while (left <= right)//条件:<=
	{
        int mid = (left + right) / 2;//中间元素下标
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
	return -1;//找不到的情况

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;//待查找元素
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	int ret = binary_search(arr, k, sz);
	//传递的是数组第一个元素
	if (ret == -1)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("下标是%d\n", ret);
	}
	return 0;
}
