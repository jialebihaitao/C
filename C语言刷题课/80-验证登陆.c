//��Ŀ����
//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬�ж��Ƿ��¼�ɹ���
//��������:
//����������ݣ�ÿ���������ÿո�ֿ����ַ�������һ��Ϊ�û������ڶ���λ���롣
//�������:
//���ÿ������������ݣ����Ϊһ�У�һ���ַ�������Login Success!����Login Fail!������
//ʾ��1
//����
//admin admin
//���
//Login Success!
//ʾ��2
//����
//admin abc
//���
//Login Fail!
#include<stdio.h>
int main()
{
    char name[20]={0};
    char password[20]={0};
    while(~scanf("%s %s",name,password))
    {
        //�ַ����Ƚϲ���ʹ��=�Ƚ�
        //Ӧ��ʹ��strcmp
        if(strcmp(name,"admin")==0&&strcmp(password,"admin")==0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}
