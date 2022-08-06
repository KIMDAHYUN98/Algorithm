#include<stdio.h>
#define M 100010
int a[M], dab;
int main_subsequence()
{
	int n, s, q, t, i, sum = 0;
	scanf("%d%d", &n, &s);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		sum += t;
		a[i] = sum;
	}

	int l = 1, r = n, mid;
	while (l <= r)
	{
		int hit = 0;
		mid = (l + r) / 2;
		for (i = mid; i <= n; i++)
		{
			if (a[i] - a[i - mid] >= s)
			{
				dab = mid;
				hit = 1;
				break;
			}
		}

		if (hit == 1) r = mid - 1;
		else l = mid + 1;
	}

	printf("%d\n", dab);
	return 0;
}
