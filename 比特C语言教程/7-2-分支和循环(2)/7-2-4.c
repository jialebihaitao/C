//4. 编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "!!!!!张凯齐是大美女!!!!!!";
	char arr2[] = "#########################";
	int left = 0;
	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//最右面是\0,所以需要减去2
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒 1000
		Sleep(600);//毫秒为单位
		//休息一分钟
		system("cls");//执行系统命令的一个函数
		//cls:清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
