#include<stdio.h>
int main()
{
int a[5];
int i,j,t;
for(i=0;i<5;i++)
   scanf("%d",&a[i]);
for(i=0,j=4;i<j;i++,j--)
{t=a[i];
 a[i]=a[j];
 a[j]=t;
}
    printf("逆置之后数组为：");
	for (i = 0; i < 5;i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
