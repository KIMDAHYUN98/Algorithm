#include<stdio.h>

int main_bit_pos() {
	int n, cnt = 0;

	scanf("%d", &n);
	while (n) {
		if (n % 2 == 1)
			printf("%d ", cnt);
		cnt++;
		n /= 2;
	}

	return 0;
}
