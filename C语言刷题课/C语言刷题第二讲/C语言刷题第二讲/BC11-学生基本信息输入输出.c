#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���
//��������:
//ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
//�������:
//ѧ�ţ�3�Ƴɼ��������ʽ������������
//ʾ��1
//����
//17140216;80.845,90.55,100.00
//���
//The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.
#include<stdio.h>
int main()
{
    int xuehao=0;
    float C_score=0.0;
    float math_score=0.0;
    float english_score=0.0;
    scanf("%d;%f,%f,%f",&xuehao,&C_score,&math_score,&english_score);//��ĿҪ������;
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",xuehao,C_score,math_score,english_score);
	//%.2f   С����������λ
    return 0;
}
//�𰸽�����
//���������ӣ�Ҳ�Ǹ�ʽ��ָ�������пո�Ŀ��ƣ��������ĿҪ���������һ�£����磺of�ĺ�
//����2���ո�
//��������ӡҪָ��С�����ߵ�λ��Ϊ2λ��