#include<stdio.h>

int k[1001];
int main_distinct()
{
	int i, n, m, cnt=0;

	// 1. 입력
	scanf("%d", &n);

	// 1-1. 반복문을 통해 배열에 n 만큼 숫자 입력
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		// k[m]에 1 대입
		k[m] = 1;
	}

	// 2. 비교
	// 만약 k[i] 값이 1일 경우 cnt 증가
	for (i = 1; i <= 1001; i++)
	{
		if (k[i] == 1)
			cnt++;
	}

	// 3. cnt 출력
		printf("%d", cnt);

	return 0;
}
