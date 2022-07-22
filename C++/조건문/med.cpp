#include <stdio.h>

int main_med()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	// a가 제일 작은 수 일 때
	if (a <= b && a <= c)
	{
		if (b < c)
			printf("%d", b);
		else if (b == c)
			printf("%d", c);
		else
			printf("%d", c);
	}
	// b가 제일 작은 수 일 때
	else if (b <= c && b <= a)
	{
		if (c < a)
			printf("%d", c);
		else if(c == a)
			printf("%d", c);
		else
			printf("%d", a);
	}
	// c가 제일 작은 수 일 때
	else if (c <= a && c <= b)
	{
		if (a < b)
			printf("%d", a);
		else if(a == b)
			printf("%d", a);
		else
			printf("%d", b);
	}
	else if (a == b && b == c && c == a)
	{
		printf("%d", a);
	}


	return 0;
}
