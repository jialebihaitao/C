#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//ȷ����ͬ���������������ڴ���ռ����ֽڣ��������ͬ���������������ڴ���ռ����ֽڣ��� 
//��������:
//��
//�������:
//��ͬ���������������ڴ���ռ����ֽڣ��������ʽ��������������������е�?Ϊ��ͬ���������������ڴ���ռ���ֽ���������������£�
//The size of short is ? bytes.
//The size of int is ? bytes.
//The size of long is ? bytes.
//The size of long long is ? bytes.
#include<stdio.h>
int main()
{
	//sizeof-������ ���Ǻ���
    printf("The size of short is %d bytes.\n",sizeof(short));
    printf("The size of int is %d bytes.\n",sizeof(int));
    printf("The size of long is %d bytes.\n",sizeof(long));
    printf("The size of long long is %d bytes.\n",sizeof(long long));
    return 0;
}
//�𰸽�����
//�������ŵ���Ŀ��������û����������ġ�
//����Ĺؼ���Ҫ����C���Ե� sizeof �����������
//sizeof ��C���Ե�һ����Ŀ���������������㲻ͬ����������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�