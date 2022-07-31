#include<stdio.h>
int main_chemistry()
{
	int i=0;
	double a, b, c, t;

	while (true)
	{
		scanf("%lf", &a);
		if (a == 999)
			break;
		
		if (i == 0)
		{
			scanf("%lf", &b);
			c = b - a;
			printf("%.2lf\n", c);
			t = b;
		}
		else 
		{
			c = a - t;
			printf("%.2lf\n", c);
			t = a;
		}

		i++;
		
	}

	printf("End of Output");
	return 0;
}
