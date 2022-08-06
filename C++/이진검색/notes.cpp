#include<stdio.h>
#define M 50010
int a[M];

int main_notes()
{
	int n, m, q, t, i, sum = 0;
	scanf("%d%d", &n, &q);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		sum = +t;
		a[i] = sum - 1;
	}

	for (i = 1; i <= q; i++)
	{
		scanf("%d", &m);
		int l = 1, r = n, mid;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (a[mid] == m)
			{
				l = mid;
				break;
			}
			else if (a[mid] > m) r = mid - 1;
			else l = mid + 1;
		}

		printf("%d\n", l);
	}
	return 0;
}
