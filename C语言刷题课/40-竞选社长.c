//��Ŀ����
//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//��������:
//һ�У��ַ����У�����A��B���������ַ�0������
//�������:
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
//ʾ��1
//����
//ABBABBAAB0
//���
//B
//һ���ַ�
//1.һ���ַ�һ���ַ���ȡ
#include<stdio.h>
int main()
{
    int ch=0;
    int a=0;
    int b=0;
    while(((ch=getchar())!='0')&&ch!=EOF)//getchar��ȡ�ַ���������ĸ��ASCILֵ����int ����
    {
        if(ch=='A')
        {
            a++;
        }
        if(ch=='B')
        {
            b++;
        }

    }
    if(a==b)
        {
            printf("E\n");
        }
    else if(a>b)
        {
            printf("A\n");
        }
    else
        {
            printf("B\n");
        }
    return 0;
}


//2.��ȡһ��
#include<stdio.h>
int main()
{
    char str[100]={0};
    gets(str);
    int i=0;
    int count=0;
    while(str[i]!='0')
    {
        if(str[i]=='A')
        {
            count++;
        }
        else if(str[i]=='B')
        {
            count--;
        }
        i++;
    }
    if(count>0)
    {
        printf("A\n");
    }
    else if(count<0)
    {
        printf("B\n");

    }
    else
    {
        printf("E\n");
    }

    return 0;
}
//������
//#include<stdio.h>
//int main()
//{
//    int ch=0;
//    int count=0;
//    while(((ch=getchar())!='0')&&ch!=EOF)
//    {
//        if(ch=='A')
//        {
//            count++;
//        }
//        if(ch=='B')
//        {
//            count--;
//        }
//    }
//    if(count>0)
//    {
//        printf("A\n");
//    }
//    else if(count<0)
//    {
//        printf("B\n");
//
//    }
//    else
//    {
//        printf("E\n");
//    }
//
//    return 0;
//}
