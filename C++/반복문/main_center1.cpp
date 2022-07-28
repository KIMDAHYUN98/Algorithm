#include<stdio.h>

int main_center1()
{
	int n, i = 1, sum = 0, cnt = 0;
	
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		cnt++;
		sum += i;
	}

	cnt += 2;
	int sum2 = 0;

	while (true)
	{
		sum2 += cnt;
		cnt++;
		if (sum2 == sum)
		{
			printf("O");
			break;
		}
		else
		{
			if (sum2 > sum)
			{
				printf("X");
				break;
			}
		}
	}

	return 0;
}
