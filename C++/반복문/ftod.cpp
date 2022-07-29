#include<stdio.h>

int main_ftod()
{
	int a, b, k, i;

	scanf("%d %d %d", &a, &b, &k);

	printf("0.");

	for (i = k; i > 0; i--)
	{
		a *= 10;
		printf("%d", a / b);
		a %= b;
	}

	return 0;
}
