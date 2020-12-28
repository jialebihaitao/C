#include<stdio.h>
int main()
{
	int i, j, k, a[10], max, min;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	max = min = a[0];
	j = k = 0;
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			j = i;
		}
		if (min > a[i])
		{
			min = a[i];
			k = i;
		}
	}
	printf("最大值%d，对应下标%d\n", max, j);
	printf("最小值%d，对应下标%d\n", min, k);
	return 0;
}
