#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//С��������ٷ��Ƴɼ������뽫�ɼ�ת���ɵȼ��ơ�ת������Ϊ��90-100Ϊ��A����80-89Ϊ��B����70-79Ϊ��C����60-69Ϊ��D����59����Ϊ��E�����������ĳɼ�����0-100֮�䣬�����F����
//��������:
//һ�У�һ��������ʾ�ĳɼ���
//�������:
//һ�У�ת����ĵȼ���
//ʾ��1
//����
//78
//���
//C

#include <stdio.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	
	if (score >= 90 && score <= 100)
		printf("A\n");
	else if (score >= 80 && score <= 89)
		printf("B\n");
	else if (score >= 70 && score <= 79)
		printf("C\n");
	else if (score >= 60 && score <= 69)
		printf("D\n");
	else if (score<=59&&score>=0)
		printf("E\n");
	else
		printf("F\n");
	return 0;
}