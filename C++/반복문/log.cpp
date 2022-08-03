#include<stdio.h>

int main_log()
{
	int n, i, j, sum=0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = i; j > 0; j--)
		{
			sum += j;
			if (sum >= n)
			{
				if (sum == n)
					printf("%d %d", i, j);
				else
					printf("%d %d", i, n - (sum - j));
			return 0;
			}
		}
			sum = 0;
	}
}
