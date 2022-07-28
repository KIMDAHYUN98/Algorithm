#include<stdio.h>

int main_validate()
{
	int n, i, sum=0, dab=0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		sum += n * n;
	}
	
	dab = sum % 10;

	printf("%d", dab);

	return 0;
}
