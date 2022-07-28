#include<stdio.h>

int main_financial()
{
	int i;

	double n, sum = 0, avg = 0;

	for (i = 0; i < 12; i++)
	{
		scanf("%lf", &n);
		sum += n;
	}

	avg = sum / 12;

	printf("$%.2lf", avg);

	return 0;
}
