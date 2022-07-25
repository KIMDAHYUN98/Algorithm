#include<stdio.h>

int main_sb()
{
	int n, i, t = 0, r = 0;

	for (i = 1; i <= 7; i++)
	{
		scanf("%d", &n);
		if (t == 0)
			t = n, r = i;
		else 
		{
			if (t < n)
				t = n, r = i;
		}
	}	

	printf("%d", r);
	return 0;
}
