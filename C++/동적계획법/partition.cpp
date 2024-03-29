#include<stdio.h>
#define M 51

int dp[M][M], n;

int main_partition()
{
	int i, j;

	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		dp[0][i]=1; // db 초기화
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			dp[i][j] = dp[i][j-1]; // 앞에 구한 경우를 가져온다
			if(i >= j) dp[i][j] += dp[i-j][j];
		}
	}
	printf("%d", dp[n][n]);
	return 0;
}
