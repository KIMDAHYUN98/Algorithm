#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if ((double)a/b > (double)c/d)
		printf("1");
	else if ((double)a/b < (double)c/d)
		printf("-1");
	else
		printf("0");

	return 0;
}
