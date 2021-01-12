//3. 在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n);
//功能:在v[0]<=v[1]<=v[2]<= ....<=v[n-1]的数组中查找x.
//方法一
//#include<stdio.h>
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8.9,10};
//    int k=7;//需要找的元素
//    int i=0;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    for(i=0;i<sz;i++)
//    {
//        if(k==arr[i])
//        {
//            printf("找到了,下标是:%d\n",i);
//            break;
//        }
//    }
//    if(i==sz)
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}
//方法二:折半查找算法(二分查找算法)
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int k = 7;//需要找的元素
	int left = 0;//左下标
	int right = sz - 1;//右下标:元素个数-1
	while (left <= right)//判断条件:左<右
	{
		int mid = (left + right) / 2;//中间元素下标:左右下标除二
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
			printf("找到了,下标:%d\n", mid);
			break;
		}

	}
        if (left>right)
		{
			printf("找不到\n");
		}

		return 0;
}
