//��Ŀ����
//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
//��������:
//�������룬ÿһ������һ����ĸ��
//�������:
//���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
//ʾ��1
//����
//a
//A
//Z
//���
//A
//a
//z
//����һ
#include<stdio.h>
int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if(ch>='a'&&ch<='z')
        {
            printf("%c\n",ch-32);
        }
        else
        {
            printf("%c\n",ch+32);
        }
        getchar();
    }

    return 0;
}
//������ �ж�Сд��ĸislower �жϴ�д��ĸisupper
//#include<stdio.h>
////#include<ctype.h>
//int main()
//{
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        if(islower(ch))
//        {
//            printf("%c\n",ch-32);
//            //Сдת��д
//            //printf("%c\n",toupper(ch));
//        }
//        else if(isupper(ch))
//        {
//            printf("%c\n",ch+32);
//            //��дתСд
//            // printf("%c\n",tolower(ch));
//        }
//        getchar();
//    }
//
//    return 0;
//}
