#include<stdio.h>

int ma_oddin()
{
	int i = 0, n, sum = 0, cnt = 1, t = 0;

	while (i < 7)
	{
		scanf("%d", &n);
		// n이 홀수 일 때
		if (n % 2 != 0)
		{
			if (t == 0)
				t = n;
			else
			{
				if (t > n)
					t = n;
			}
			sum += n;
		} 
		// n이 짝수 일 때
		else
		{
			cnt++;
		}
		i++;
	}

	if(cnt == 8)
		printf("%d", -1);
	else
	{
		printf("%d\n", sum);
		printf("%d", t);
	}

	return 0;
}
