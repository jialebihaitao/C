//��ϰ2:��д�������ַ����ĳ��ȡ�
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//    int count=0;
//    while(*str!='\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//	char arr[] = "bit";
////	int len = strlen(arr);//���ַ�������
////	printf("%d\n", len);
//    int len =my_strlen(arr);//arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//    printf("len=%d\n",len);
//
//	return 0;
//}
//��ϰ2:��д��������������ʱ���������ַ����ĳ��ȡ�
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
    //�Ѵ��»�С
    //my_strlen("bit");
    //1+my_strlen("it");
    //1+1+my_strlen("t");
    //1+1+1+my_strlen("\0");
    //1+1+1+0-3
    if(*str!='\0')//��������
    {
        return 1+my_strlen(str+1);//ÿ�εݹ����֮��Խ��Խ�ӽ��������������
    }
    else return 0;
}
int main()
{
	char arr[] = "bit";
//	int len = strlen(arr);//���ַ�������
//	printf("%d\n", len);
    int len =my_strlen(arr);//arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
    printf("len=%d\n",len);

	return 0;
}
