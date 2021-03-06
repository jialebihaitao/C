#define _CRT_SECURE_NO_WARNINGS
//题目描述
//给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点。两幅图像的相似度定义为相同像素点数占总像素点数的百分比。
//
//输入描述:
//第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开。1≤m≤100, 1≤n≤100。之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。之后m行，每行n个整数0或1，表示第二幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。
//输出描述:
//一个实数，表示相似度(以百分比的形式给出)，精确到小数点后两位。
//示例1
//输入
//3 3
//1 0 1
//0 0 1
//1 1 0
//1 1 0
//0 0 1
//0 0 1
//输出
//44.44

#include<stdio.h>
int main()
{
    int m=0;
    int n=0;
    int arr1[100][100]={0};
    int arr2[100][100]={0};
    scanf("%d %d",&m,&n);
    int i=0;
    int j=0;
    //读取第一个矩阵的数据
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }
        //读取第二个矩阵的数据
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
        //求相似度
        int count=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr1[i][j]==arr2[i][j])
                {
                    count++;
                }
            }
        }
        printf("%.2lf\n",count*100.0/(m*n));
    return 0;
}

//答案解析：
//1. 输入二维数组
//2. 求两个二维素组的相同元素个数
//3. 求百分比要注意*100.0，小时点后保留2位