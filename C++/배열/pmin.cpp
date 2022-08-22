#include<stdio.h>

int main()
{
	int i, j, a, min=1001;

	scanf("%d", &a);
	
	int n[101];
	
	for (i = 1; i <= a; i++)
	{
		scanf("%d", &n[i]);
		if (min > n[i])
			min = n[i];
	}

	for (i = 1; i <= a; i++)
	{
		if(min == n[i])
		printf("%d ", i);
	}

	return 0;
}
