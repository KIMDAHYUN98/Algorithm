#include<stdio.h>
#include<stdlib.h>
int n, dab[90];

int numchk(int k)
{
	int i, j, cnt;
	for (i = 1; i <= k / 2; i++)
	{
		cnt = 0;
		for (j = 0; j < i; j++)
		{
			if (dab[k - j] == dab[k - i - j]) cnt++;
		}
		if (cnt == i) return 0;
	}
	return 1;
}

void back(int k)
{
	int i;
	if (k > n)
	{
		for (i = 1; i <= n; i++)
			printf("%d", dab[i]);
		exit(0);
	}

	for (i = 1; i <= 3; i++)
	{
		dab[k] = i;
		if (numchk(k)) back(k + 1);
	}
}

int main()
{ 
	scanf("%d", &n);
	back(1);

	return 0;
}
