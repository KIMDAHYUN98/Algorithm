#include<stdio.h>

int main_zorro()
{
	int i, j, n;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = n-1; j >= 0; j--)
		{
			if (i == 0 || i == n - 1)
				printf("*");
			else
			{
				if (i == j)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
