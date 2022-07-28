#include<stdio.h>

int main_yaksu()
{
	int n, k, i, cnt = 1, j=0;

	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (cnt == k)
			{
				printf("%d", i);
				j++;
			}
			cnt++;
		}
	}

	if(j == 0)
		printf("%d", j);

	return 0;
}
