#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //关机命令 shutdown -s -t 60
    //system() 执行系统命令
    char input[20]={0};
    system("shutdow -s -t 60");
    again:
    printf("请注意 您的电脑在1min后关机,如果输入;xuhaitao,就取消关机\n请输入>:");
    scanf("%s",&input);
    if(strcmp(input,"xuhaitao")==0)//比较两个字符串-strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
