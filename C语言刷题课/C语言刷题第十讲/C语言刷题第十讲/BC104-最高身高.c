#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//KiKi���n��m�еķ���������ҵ������ߵ��˵�λ�ã��������������������
//
//��������:
//��һ�а�����������n��m����ʾ���������а���n��m�С���2��n+1�У�ÿ������m����������Χ-231~231-1�����ÿո�ָ���������n*m��������ʾ�����е������˵���ߣ���֤������߶�����ͬ����(1��x��n��10��1��y��m��10)
//
//�������:
//һ�У���������������ÿո�ָ�����ʾ�����������ߵ������ڵ��кź��кš�
//ʾ��1
//����
//2 2
//175 180
//176 185
//���
//2 2

//��ʾһ
#include<stdio.h>
int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int i=0;
    int hi=0;//���
    int max=0;
    int x=0;//����
    int y=0;//����
    for(i=1;i<=n;i++)
    {
        int j=0;
        for(j=1;j<=m;j++)
        {
            scanf("%d",&hi);
            if(hi>max)
            {
                max=hi;
                x=i;
                y=j;
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}

//��ʾ��
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int hi = 0;//���
	int max = 0;
	int x = 0;//����
	int y = 0;//����
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &hi);
			if (hi>max)
			{
				max = hi;
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d\n", x+1, y+1);
	return 0;
}