#include<stdio.h>

int main_log()
{
	int i, n, total, a, b, sum=0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		total = i * (i + 1) / 2;
		if (total >= n) {
			a = i;
			break;
		}
	}

	for (i = a; i > 0; i--)
	{
		if (i >= n)
		{
			b = n;
			break;
		}
		n -= i;
	}

	printf("%d %d", a, b);
}
