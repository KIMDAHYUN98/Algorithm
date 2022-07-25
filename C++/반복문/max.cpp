#include<stdio.h>

int main_max()
{
	int a, i, t=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a);
		if (t < a)
			t = a;
	}
	printf("%d", t);
	return 0;
}
