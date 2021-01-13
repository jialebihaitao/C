//求最大值
//求10个整数中最大值
#include<stdio.h>
int main()
{
    int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int max=arr[0];//最大值应该选择数组中某个元素,第一个最好
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<sz;i++)//i=1 原因:max为arr[0]
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
