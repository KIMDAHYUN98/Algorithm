#include<stdio.h>

int main_above_average()
{
	int n, i, total=0, avg = 0;
	int score[1010];
	double dab = 0, cnt = 0;


	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		total += score[i];
	}

	avg = total / n;

	for (i = 0; i < n; i++)
	{
		if (avg < score[i])
			cnt++;
	}

	dab = cnt / n * 100;

	printf("%.3lf%%", dab);

	return 0;
}
