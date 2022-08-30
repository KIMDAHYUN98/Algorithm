#include<stdio.h>

int main()
{
	int i, n, cnt=0;

	int k[1001];

	// 1. 입력
	scanf("%d", &n);

	// 1-1. 반복문을 통해 배열에 n 만큼 숫자 입력
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k[i]);
	}

	// 2. 비교
	// 1   2   3   4    5   6   7   8   9  10
	// [1] [1] [1] [1] [ ] [ ] [ ] [ ] [ ] [ ]
	// if문을 통해 배열에 1이 있을 경우 cnt 하나씩 증가
	for (i = 1; i <= n; i++)
	{
		if (k[?] == i)
			k[i] = 1;
		if (k[i] == 1)
			cnt++;
	}

	// 3. cnt 출력
		printf("%d", cnt);

	return 0;
}
