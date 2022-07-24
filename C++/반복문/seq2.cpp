#include <stdio.h>

int main_seq2()
{
	int n, i, sum=0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
		printf("%d..%d %d\n", 1, i, sum);
	}
}
