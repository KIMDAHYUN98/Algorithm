#include<stdio.h>

int main_perfect()
{
	int i, n, perfect, deficient, abundant, sum = 0;

	// perfect(완전수) : 자신을 제외한 약수의 합이 자신과 같은 수
	// deficient(과잉수) : 합이 자신의 수보다 작은 수
	// abundant(부족수) : 합이 자신의 수보다 큰 수

	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		perfect = sum;
		printf("%5d  PERFECT", n);
	}

	else if (sum < n)
	{
		deficient = sum;
		printf("%5d  DEFICIENT", n);
	}
	else if (sum > n)
	{
		abundant = sum;
		printf("%5d  ABUNDANT", n);
	}


	return 0;
}
