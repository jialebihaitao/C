#include<stdio.h>
int main()
{
	int shuru;
	int a[10];
	int i, j, t;
	int end = 8;
	for (i = 0; i < 9; i++)
		scanf("%d", &a[i]);
	for (i = 0; i <= 8; i++)
		for (j = i; j <= 8; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	for (i = 0; i <= 8; i++)
		printf("%d ", a[i]);
	printf("\n");
	scanf("%d", &shuru);
	while (end >= 0 && shuru < a[end])
	{
		a[end + 1] = a[end];
		end--;
	}
	a[end + 1] = shuru;
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
