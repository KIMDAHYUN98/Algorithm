#include<stdio.h>

int main_sum()
{
	int a, i, sum=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a);
		sum += a;
	}

	printf("%d",sum);

	return 0;
}
