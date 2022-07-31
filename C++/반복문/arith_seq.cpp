#include<stdio.h>

int main_arith_seq()
{
	int a, b, c, i=1, d=0;

	scanf("%d %d %d", &a, &b ,&c);

	d += a;

	while (true)
	{
		d += b;
		i++;
		if (c == d)
		{
			printf("%d", i);
			break;
		}

		if (c < 0)
		{ 
			if (c > d && c != d)
				break;
		}
		else
		{
			if (c < d && c != d)
				break;
		}
	}

	if(c != d)
		printf("X");

	return 0;
}
