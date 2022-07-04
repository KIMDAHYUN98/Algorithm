#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int h, m;
	int a[24] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	scanf("%d : %d", &h, &m);

	if (m == 0) 
	{
		printf("%d", a[h]);
	}
	else
		printf("0");

	return 0;
}
