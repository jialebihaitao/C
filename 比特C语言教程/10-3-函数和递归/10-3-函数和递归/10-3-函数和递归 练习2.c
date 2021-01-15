//练习2:编写函数求字符串的长度。
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
////	int len = strlen(arr);//求字符串长度
////	printf("%d\n", len);
//    int len =my_strlen(arr);//arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//    printf("len=%d\n",len);
//
//	return 0;
//}
//练习2:编写函数不允许创建临时变量，求字符串的长度。
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
    //把大事化小
    //my_strlen("bit");
    //1+my_strlen("it");
    //1+1+my_strlen("t");
    //1+1+1+my_strlen("\0");
    //1+1+1+0-3
    if(*str!='\0')//限制条件
    {
        return 1+my_strlen(str+1);//每次递归调用之后越来越接近这个限制条件。
    }
    else return 0;
}
int main()
{
	char arr[] = "bit";
//	int len = strlen(arr);//求字符串长度
//	printf("%d\n", len);
    int len =my_strlen(arr);//arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
    printf("len=%d\n",len);

	return 0;
}
