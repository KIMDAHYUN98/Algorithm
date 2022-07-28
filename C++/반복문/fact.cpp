#include<stdio.h>

int main_fact()
{
	int i, n, dab=1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		dab *= i;
	}

	printf("%d", dab);

	return 0;
}
