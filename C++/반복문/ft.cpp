#include<stdio.h>

int main()
{
	int i, num, cnt = 0, sum = 0, one;
	long long int mul = 1;

	// sum = 약수의 총합
	// mul = 모든 약수의 곱한 수
	// one = 모든 약수의 곱의 일의 자리수

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
			// 그대로 곱하면 수가 방대하므로 mul에다가 10을 나눈 나머지로 i와 곱한다
			mul %= 10;
			mul = mul * i;
			cnt++;
			printf("%d ", i);
		}

	}
	one = mul % 10;

	printf("\n%d\n%d\n%d", cnt, sum, one);
	return 0;
}
