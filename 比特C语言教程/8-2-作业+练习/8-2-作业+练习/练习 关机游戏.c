#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //�ػ����� shutdown -s -t 60
    //system() ִ��ϵͳ����
    char input[20]={0};
    system("shutdow -s -t 60");
    again:
    printf("��ע�� ���ĵ�����1min��ػ�,�������;xuhaitao,��ȡ���ػ�\n������>:");
    scanf("%s",&input);
    if(strcmp(input,"xuhaitao")==0)//�Ƚ������ַ���-strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
