#include<stdio.h>
int main_sclock()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		if (i <= n / 2)
		{
			for (j = 0; j < n - i; j++)
			{
				if (i > j)
					printf(" ");
				else if (j == n - 1 - i)
					printf("$");
				else
					printf("*");
			}
		}
		else
		{
			for (j = n - 1; j >= n-1-i; j--)
			{
				if (i == j)
					printf("$");
				else if (i > j)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
