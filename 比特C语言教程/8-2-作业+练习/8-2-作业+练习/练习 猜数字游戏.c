//��������Ϸ
//1.���Ի�����һ�������
//2.������
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
{
    printf("**************************************\n");
    printf("******   1.play          0.exit*******\n");
    printf("**************************************\n");
}
void game()
{
    printf("������");
    int ret=0;
    int guess=0;//���ղµ�����
    //1.����һ������� rand()
    //��ʱ��������������������ʼ��

    ret=rand()%100+1;//����1~100֮�������
    //ʱ��� ��ǰ�������ʱ��-���������ֹʱ��(1970.1.1.0:0:0)=(xxxx)��
//    printf("%d\n",ret);
    //2.������
    while(1)
    {
        printf("�������:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("�´���\n");
        }
        else if(guess<ret)
        {
            printf("��С��\n");
        }
        else
        {
            printf("��ϲ��¶���\n");
            break;
        }
    }

}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();//����Ϸ���ֹ���
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����\n");
            break;

        }

    }while(input);
    return 0;
}
