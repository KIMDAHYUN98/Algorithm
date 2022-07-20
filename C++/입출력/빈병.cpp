#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_bottle()
{
	int n, a=0, b=0;
	// a = jay가 마신 음료
	// b = 이벤트 참여 후 남은 빈병의 갯수

	scanf("%d", &n);

	// 처음가지고 있던 음료 갯수
	a += n;
	// 첫번째 이벤트
	a += n / 4;
	b += n % 4;
	// 두번째 이벤트
	n /= 4; // 첫번째 이벤트에서 받은 음료
	a += n / 4;
	b += n % 4;

	printf("%d %d", a, b);
	return 0;
}
