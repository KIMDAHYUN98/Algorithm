#include<stdio.h>

int main_triangular_sum()
{
	int i, n, sum=0, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int t = 0;
		for (j = 1; j <= i + 1; j++)
		{
			t += j;
		}
		sum += i * t;
	}

	printf("%d", sum);
	return 0;
}
