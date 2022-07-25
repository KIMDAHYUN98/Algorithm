#include<stdio.h>

int main_min()
{
	int a, i, t=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a);
		
		if (t == 0)
			t = a;
		else
		{
			if (t > a)
				t = a;
		}
	}
	printf("%d", t);
	return 0;
}
