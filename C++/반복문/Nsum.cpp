#include<stdio.h>

int main_Nsum()
{
	int n, m, i = 0;

	scanf("%d", &m);

	while (true)
	{
		i++;
		m -= i;
		if (m == 0)
		{
			printf("%d", i);
			break;
		}

	}

	return 0;
}
