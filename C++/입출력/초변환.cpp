#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, s, m, h, d;

	scanf("%d", &n);

	d = n / 60 / 60 / 24; // 날
	n = n % (60 * 60 * 24);
	h = n / 60 / 60; // 시간
	n = n % (60 * 60);
	m = n / 60; // 분
	s = n % 60; // 초

	printf("%d %d %d %d", d, h, m, s);

}
