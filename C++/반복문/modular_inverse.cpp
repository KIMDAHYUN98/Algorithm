#include<stdio.h>

int main_modular_inverse()
{
	int x, m, n, i;

	scanf("%d %d", &x, &m);

	for (i = 1; i < m; i++)
	{
		if ((x * i) % m == 1)
		{
			printf("%d", i);

			return 0;
		}
	}
		printf("No such integer exists.");

}
