#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKiд��һ�������Hello world!���ĳ���BoBo��ʦ������printf�����з���ֵ�����ܰ���д���������printf(��Hello world!��)�ķ���ֵ��
//��������:
//��
//�������:
//�������У�
//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ��
//����һ
#include<stdio.h>
int main()
{
	int ret = printf("Hello world!");
	printf("\n");
	printf("%d\n", ret);
}

//������
#include<stdio.h>
int main()
{
	int ret = printf("Hello world!");
	printf("\n%d\n", ret);
}
//������
#include<stdio.h>
int main()
{
    printf("\n%d\n",printf("Hello world!"));
    return 0;
}
//�𰸽�����
//������ص���Ҫ�ϸ�����ĿҪ��ĸ�ʽ�����2�У��ȴ�ӡ�ַ������ٴ�ӡ�ַ������ȡ������Ҫ��
//�ƺø�ʽ��д���Ƚ϶ࡣ
//��չ
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d"), 43));//4321
	//C����ˢ���2 25:00��
	return 0;
}