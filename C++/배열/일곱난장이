#include<stdio.h>

int main() {
	int i, j, sum=0;
	int n = 9;
	int a[9];
	for (i = 0; i < n; i++)
	{ 
	// 1. 100보다 작은 9개의 수 입력
		scanf("%d", &a[i]);
	// 2. 9개의 수 sum 변수에 전체 합
		sum += a[i];
	}
	// 3. sum = sum - 100
	sum = sum - 100;
	// 4. 다중 반복문을 이용해 배열의 sum 값 찾아서 0으로 값 반환
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{ 
			if (a[i] + a[j] == sum)
			{
				a[i] = 0; a[j] = 0;
				goto EXIT; // 다중 반복문 모두 종료
			}
		}
	}
	EXIT:

	for (i = 0; i < n; i++)
	{
		if(a[i] != 0)
			printf("%d ", a[i]);
	}

	return 0;
}
