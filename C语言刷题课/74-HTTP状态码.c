//��Ŀ����
//KiKi������վ���õ�HTTP״̬�룬������֪��ʲô���壬BoBo��ʦ����������HTTP״̬�룺200��OK�������ѳɹ�����202��Accepted���������ѽ������󣬵���δ������400��Bad Request������������󣩣�403��Forbidden������ֹ����404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�502��Bad Gateway���������أ���
//
//��������:
//�������룬һ�У�һ��������100~600������ʾHTTP״̬�롣
//�������:
//���ÿ�������HTTP״̬�������״̬���Ӧ�ĺ��壬�����Ӧ���£�
//200-OK
//202-Accepted
//400-Bad Request
//403-Forbidden
//404-Not Found
//500-Internal Server Error
//502-Bad Gateway
//ʾ��1
//����
//200
//���
//OK
#include<stdio.h>
int main()
{
    int ret=0;
    while(~scanf("%d",&ret))
    {
        switch(ret)
        {
            case 200:
            printf("OK\n");
            break;
            case 202:
            printf("Accepted\n");
            break;
            case 400:
            printf("Bad Request\n");
            break;
            case 403:
            printf("Forbidden\n");
            break;
            case 404:
            printf("Not Found\n");
            break;
            case 500:
            printf("Internal Server Error\n");
            break;
            case 502:
            printf("Bad Gateway\n");
            break;
        }
    }
    return 0;
}
