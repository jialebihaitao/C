//4. 写一个函数，每调用一次这个函数，就会将num的值增加1。
#include<stdio.h>
void Add(int *p)
{
    (*p)++;
}
int main()
{
    int num=0;
    Add(&num);
    printf("num=%d\n",num);//1
    Add(&num);
    printf("num=%d\n",num);//2
    Add(&num);
    printf("num=%d\n",num);//3
    return 0;
}
