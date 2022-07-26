#include<stdio.h>

int main_1ton()
{

	int n, i, sum=0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
		printf("%d", sum);
	return 0;
}
