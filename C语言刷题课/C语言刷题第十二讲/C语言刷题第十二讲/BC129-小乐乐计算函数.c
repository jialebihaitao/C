#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//С����ѧ�����Զ��庯����BoBo��ʦ�������˸����⣬�������¹�ʽ����m��ֵ��
//
//���� max3����Ϊ���������������ֵ���磺 max3(1, 2, 3) ���ؽ��Ϊ3��
//��������:
//һ�У����������������ÿո�������ֱ��ʾa, b, c��
//�������:
//һ�У�һ����������С���㱣��2λ��Ϊ�����m��ֵ��
//ʾ��1
//����
//1 2 3
//���
//0.30

#include<stdio.h>
int max3(int x, int y, int z)
{
	int max = x > y ? x : y;
	int ret = max > z ? max : z;
	return ret;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	float m = 0.0;
	m = ((float)max3(a + b, b, c)) / (max3(a,b+c,c)+max3(a, b, b + c));
	printf("%.2f\n", m);
	return 0;
}