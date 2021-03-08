#define _CRT_SECURE_NO_WARNINGS
//题目描述
//KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵。请编程帮他解答。
//
//输入描述:
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//
//从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
//接下来一行输入k，表示要执行k次操作（1≤k≤5）。接下来有k行，每行包括一个字符t和两个数a和b，中间用空格格分隔，t代表需要执行的操作，当t为字符'r'时代表进行行变换，当t为字符'c'时代表进行列变换，a和b为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10）。
//
//
//输出描述:
//输出n行m列，为矩阵交换后的结果。每个数后面有一个空格。
//示例1
//输入
//2 2
//1 2
//3 4
//1
//r 1 2
//输出
//3 4 
//1 2 

////表示一
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };//1≤n≤10,1≤m≤10
	scanf("%d %d", &n, &m);
	//输入矩阵数据
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int k = 0;//操作次数
	scanf("%d", &k);//1 \n 输入缓冲区
	int r = 0;
	for (r = 0; r < k; r++)//转置k次
	{
		//一次转置
		char t = 0;
		int a = 0;
		int b = 0;
		getchar();
		scanf("%c %d %d", &t, &a, &b);//%c前面有空格:消除\n
		//r 2 3 把第二行 第三行交换一下
		//c 1 2 把第一列 第二列交换一下
		if (t == 'r')
		{
			//行的交换
			i = 0;
			for (i = 0; i < m; i++)//列的元素交换
			{
				//arr[a-1][i]
				//arr[b-1][i]
				int tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		else if (t == 'c')
		{
			//列的交换
			i = 0;
			for (i = 0; i < n; i++)
			{
				//arr[i][a-1]
				//arr[i][b-1]
				int tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}

	}
	//打印转置之后的矩阵
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//表示二
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };//1≤n≤10,1≤m≤10
	scanf("%d %d", &n, &m);
	//输入矩阵数据
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int k = 0;//操作次数
	scanf("%d", &k);//1 \n 输入缓冲区
	int r = 0;
	for (r = 0; r < k; r++)//转置k次
	{
		//一次转置
		char t = 0;
		int a = 0;
		int b = 0;
		scanf(" %c %d %d", &t, &a, &b);//%c前面有空格:消除\n
		//r 2 3 把第二行 第三行交换一下
		//c 1 2 把第一列 第二列交换一下
		if (t == 'r')
		{
			//行的交换
			i = 0;
			for (i = 0; i < m; i++)//列的元素交换
			{
				//arr[a-1][i]
				//arr[b-1][i]
				int tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		else if (t == 'c')
		{
			//列的交换
			i = 0; 
			for (i = 0; i < n; i++)
			{
				//arr[i][a-1]
				//arr[i][b-1]
				int tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}
		
	}
	//打印转置之后的矩阵
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//a=1 b=2                       a=1 b=2
//    | 0 | 1 | 2              | a-1 | b-1 |
//--------------              --------------------
//a-1 | 1 | 2 | 3            0 |  1  |  2  |  3  
//----------------           ---------------------
//b-1 | 4 | 5 | 6            1 |  4  |  5  |  6
//----------------           ----------------------
//    | 7 | 8 | 9            2 |  7  |  8  |  9

//答案解析：
//1. 如果是%c读取字符，一定要清理前面输入时留下的空白字符
//2. 注意二维数组的下标