#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a1[6] = { 1, 1, 2, 2, 2, 8 }, a2[6], a3[6];
	int n, i;

	for (i = 0; i < 6; i++)
	{
		scanf("%d", &n);
		a2[i] = n;
		a3[i] = a1[i] - a2[i];
		printf("%d ", a3[i]);
	}

	return 0;
}
