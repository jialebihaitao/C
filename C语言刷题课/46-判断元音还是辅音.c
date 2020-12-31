//题目描述
//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述:
//多组输入，每行输入一个字母。
//输出描述:
//针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。
//示例1
//输入
//A
//b
//输出
//Vowel
//Consonant
//方法一
#include<stdio.h>
int main()
{
    int ch=0;
    char s[]="AaEeIiOoUu";
    while((ch=getchar())!=EOF)
    {
        //判断ch是不是和s数组中某个字符相同
        int i=0;
        for(i=0;i<10;i++)
        {
            if(ch==s[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i==10)
        {
            printf("Consonant\n");
        }
        //消除\n
        getchar();
    }
    return 0;
}
//方法二
#include<stdio.h>
int main()
{
    int ch=0;
    char s[]="AaEeIiOoUu";
    while(scanf(" %c,&ch")!=EOF)
        //while(scanf("%c\n,&ch")!=EOF)
    {
        //判断ch是不是和s数组中某个字符相同
        int i=0;
        for(i=0;i<10;i++)
        {
            if(ch==s[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if(i==10)
        {
            printf("Consonant\n");
        }

    }
    return 0;
}
