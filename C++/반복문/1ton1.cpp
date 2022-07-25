#include<stdio.h>

int main_1ton1()
{
	int n, i;
	int sum=0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
		if (i != n)
			printf("%d+", i);
		else
			printf("%d=", i);
	}
		printf("%d", sum);
	return 0;
}
