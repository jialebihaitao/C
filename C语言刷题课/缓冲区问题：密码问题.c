#include<stdio.h>
int main()
{
    char password[20]={0};
    printf("���������룺");
    scanf("%s",&password);
    printf("��ȷ��(Y/N)");
    getchar();
    int ch=getchar();
    if(ch=='Y')
        printf("ȷ������ɹ�\n");
    else
        printf("����ȷ��\n");
    return 0;
}
//EOF end of file
