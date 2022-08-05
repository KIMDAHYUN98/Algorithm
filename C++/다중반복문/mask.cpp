#include<stdio.h>

int main_mask()
{
	int a, b, c;
	int sum = 0;
	
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 1; c < 10; c++)
			{
				sum = a * 100 + b * 10 + c + c * 100 + c * 10 + a;
				if (sum == 1000 + 100 * a + 10 * b + 2)
				{
					printf("%d%d%d\n", a, b, c);
					break;
				}
			}
		}
	}

	return 0;
}
