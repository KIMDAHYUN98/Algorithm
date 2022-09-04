#include<stdio.h>
int n[201], start[201], end[201], sum[201];

int main()
{
	int i, j, a, q;

	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		scanf("%d", &n[i]);
	}

	scanf("%d", &q);
	for (i = 1; i <= q; i++)
	{
		scanf("%d %d", &start[i], &end[i]);
	}

	for (i = 1; i <= a; i++)
	{
		for (j = start[i]; j <= end[i]; j++)
		{
			sum[i] += n[j];
		}
	}

	for (i = 1; i <= q; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}
