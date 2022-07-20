#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h;

	scanf("%d %d %d %d %d %d %d %d",
			&a, &b, &c, &d, &e, &f, &g, &h);

	if (a < b && b < c && c < d && d < e && e < f && f < g && g < h)
	{
		printf("ascending");
	}
	else if (a > b && b > c && c > d && d > e && e > f && f > g && g > h)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}


	return 0;
}
