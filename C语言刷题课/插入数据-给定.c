#include<stdio.h>
int main()
{int shuru;
 int a[10]={1,3,5,7,9,11,13,15,17};
 int i,j,t;
 int end=8;
 scanf("%d",&shuru);
 while(shuru<a[end])
 {a[end+1]=a[end];
 end--;}
 a[end+1]=shuru;
 printf("最后结果是:\n");
 for(i=0;i<10;i++)
     printf("%d ",a[i]);
 printf("\n");
 return 0;}
