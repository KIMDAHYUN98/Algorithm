#include <stdio.h>

int main_3np1()
{
	int n;

	scanf("%d", &n);
	
	while (n)
	{
		if (n == 1)
		{
			printf("%d", n);
			break;
		}
		printf("%d ", n);
		if (n % 2 == 0)
			n = n / 2;
		else if (n % 2 != 0)
			n = (n * 3) + 1;

	}

	return 0;
}
