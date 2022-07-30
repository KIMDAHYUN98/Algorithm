#include<stdio.h>
int main_chemistry()
{
	int i;
	double a, b=0, t;

	while (true)
	{
		scanf("%lf", &a);
		if (a == 999)
			break;
		printf("%.2lf", a - b);
		a = b;
	}
	return 0;
}
