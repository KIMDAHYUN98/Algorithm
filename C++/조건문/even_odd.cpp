#include <stdio.h>

int main_even_odd()
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0 && b % 2 == 0)
	{
		printf("even+even=even\n");
		printf("even*even=even");
	}
	else if (a % 2 != 0 && b % 2 != 0)
	{
		printf("odd+odd=even\n");
		printf("odd*odd=odd");
	}
	else if (a % 2 != 0)
	{
		printf("odd+even=odd\n");
		printf("odd*even=even");
	}
	else if (b % 2 != 0)
	{
		printf("even+odd=odd\n");
		printf("even*odd=even");
	}

	return 0;
}
