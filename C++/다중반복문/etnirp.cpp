#include<stdio.h>

int main_etnirp()
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n / 2 == i || i == 0 || i == n-1)
				printf("*");
			else
				if (j == n - 1)
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
	}

	return 0;
}
