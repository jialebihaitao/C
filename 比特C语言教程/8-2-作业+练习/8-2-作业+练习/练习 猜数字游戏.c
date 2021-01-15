//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
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
    printf("猜数字");
    int ret=0;
    int guess=0;//接收猜的数字
    //1.生成一个随机数 rand()
    //拿时间戳设置随机数的生成起始点

    ret=rand()%100+1;//生成1~100之间随机数
    //时间戳 当前计算机的时间-计算机的起止时间(1970.1.1.0:0:0)=(xxxx)秒
//    printf("%d\n",ret);
    //2.猜数字
    while(1)
    {
        printf("请猜数字:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你猜对了\n");
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
        printf("请选择>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();//猜游戏数字过程
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;

        }

    }while(input);
    return 0;
}
