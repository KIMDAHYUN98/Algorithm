#include <stdio.h>

int main_fairy()
{
	int y;

	scanf("%d", &y);

	if (y % 8 == 0 && y >= 2000)
		printf("O");
	else
		printf("X");

	return 0;
}
