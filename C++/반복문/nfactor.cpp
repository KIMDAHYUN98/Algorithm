#include<stdio.h>

int main_nfactor()
{
	int n, i, cnt=0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}
