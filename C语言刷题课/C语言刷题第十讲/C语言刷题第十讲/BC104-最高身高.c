#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
//
//输入描述:
//第一行包含两个整数n和m，表示这个方阵队列包含n行m列。从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示方阵中的所有人的身高（保证输入身高都不相同）。(1≤x≤n≤10，1≤y≤m≤10)
//
//输出描述:
//一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号。
//示例1
//输入
//2 2
//175 180
//176 185
//输出
//2 2

//表示一
#include<stdio.h>
int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int i=0;
    int hi=0;//身高
    int max=0;
    int x=0;//坐标
    int y=0;//坐标
    for(i=1;i<=n;i++)
    {
        int j=0;
        for(j=1;j<=m;j++)
        {
            scanf("%d",&hi);
            if(hi>max)
            {
                max=hi;
                x=i;
                y=j;
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}

//表示二
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int hi = 0;//身高
	int max = 0;
	int x = 0;//坐标
	int y = 0;//坐标
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &hi);
			if (hi>max)
			{
				max = hi;
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d\n", x+1, y+1);
	return 0;
}