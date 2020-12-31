//题目描述
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述:
//多组输入，每一行输入一个字母。
//输出描述:
//针对每组输入，输出单独占一行，输出字母的对应形式。
//示例1
//输入
//a
//A
//Z
//输出
//A
//a
//z
//方法一
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
//方法二 判断小写字母islower 判断大写字母isupper
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
//            //小写转大写
//            //printf("%c\n",toupper(ch));
//        }
//        else if(isupper(ch))
//        {
//            printf("%c\n",ch+32);
//            //大写转小写
//            // printf("%c\n",tolower(ch));
//        }
//        getchar();
//    }
//
//    return 0;
//}
