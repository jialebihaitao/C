//4. ��д���룬��ʾ����ַ��������ƶ������м���
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "!!!!!�ſ����Ǵ���Ů!!!!!!";
	char arr2[] = "#########################";
	int left = 0;
	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//��������\0,������Ҫ��ȥ2
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ�� 1000
		Sleep(600);//����Ϊ��λ
		//��Ϣһ����
		system("cls");//ִ��ϵͳ�����һ������
		//cls:�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
