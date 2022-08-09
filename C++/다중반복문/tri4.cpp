#include<stdio.h>

int main_tri4()
{
	int i, j, n;
	int center, cnt = 0;

	scanf("%d", &n);

	center = n / 2;

	for (i = 0; i <=n/2; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j >= center - cnt && j <= center+cnt)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		cnt++;
		printf("\n");
	}

	return 0;
}
