#include<stdio.h>

int main_factor()
{
	int n, i;
	scanf("%d", &n);

	i = 0;

	while (i <= n)
	{
		i++;
		if (n % i == 0)
			printf("%d\n", i);
	}
	return 0;
}
