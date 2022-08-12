#include<stdio.h>

int main_speed_reading()
{
	int i, j, n, k, s, t, r, p=0, m=0;
	// n : 책의 전체 페이지 수
	// k : 소 전체 마리 수
	// s : 분당 읽은 페이지 수
	// t : 한 번 읽을 시 집중 하는 시간
	// r : 읽은 수 휴식 시간

	scanf("%d %d", &n, &k);
	for (i = 0; i < k; i++)
	{
		p = 0;
		m = 0;
		scanf("%d %d %d", &s, &t, &r);
		while (p < n) // 전체 페이지 수와 a 페이지 수가 같지 않을 때까지 반복
		{
			for (j = 0; j < t; j++)
			{
				p += s;
				m++;
				if (n <= p) break;
			}
			if (n > p) m += r;

		}
		printf("%d\n", m);
	}

	return 0;
}
