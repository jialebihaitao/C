#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//�ڼ���BMI��BodyMassIndex ����������ָ�����İ��������ϣ��ж��������ݳ̶ȡ�BMI�й���׼���±���ʾ��
//
//
//��������:
//�������룬ÿһ�а��������������ÿո�������ֱ�Ϊ���أ��������ߣ����ף���
//�������:
//���ÿ�����룬���Ϊһ�У��������ݳ̶ȣ������ࡣ
//ʾ��1
//����
//80 170
//60 170
//90 160
//50 185
//���
//Overweight
//Normal
//Obese
//Underweight

#include<stdio.h>
int main()
{
	int w = 0;//����
	int h = 0;//���
	while (~scanf("%d %d", &w, &h))
	{
		float bmi = w / (h*h / 100.0 / 100.0);
		if (bmi < 18.5)
		{
			printf("Underweight\n");
		}
		else if (bmi >= 18.5&&bmi <= 23.9)
		{
			printf("Normal\n");
		}
		else if (bmi>23.9&&bmi <= 27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}
	return 0;
}

//�𰸽�����
//1. ��������
//2. ����������Ҫ��֤���ŵ�����������һ��������