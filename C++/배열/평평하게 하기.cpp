#include<stdio.h>

int main_box_brick()
{
	int i, n, k=0, max=0, avg;
	int h[101];

	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &h[i]);
		max += h[i]; // 전체 박스 수량 파악
	}

	// 계산
	avg = max / n; // 박스를 일정한 높이로 쌓기 위해 필요한 '평균'

	// 박스를 일정한 높이로 맞추기 위해서
	// 몇개의 박스를 이동해야 하는가 ? >> 답 k
	for (i = 0; i < n; i++)
	{
		if (avg < h[i])
			k += h[i] - avg;
	}

	printf("The minimum number of moves is %d.", k);

	return 0;
}
