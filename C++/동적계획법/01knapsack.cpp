#include<stdio.h>
#include<algorithm>
#define M 101
using namespace std;

int w[M], v[M], dp[M][M+M], n, s, dab, k;

int main_01knapsack()
{
	int i, j;
	scanf("%d%d", &n, &s);// 가져 갈 수 있는 가방 무게, 보석 개수
	for(i=0; i<s; i++)
		scanf("%d%d", &w[i], &v[i]); // 보석무게, 가치
	for(i=w[0]; i<=n; i++)
		dp[0][i]=v[0]; // 초기화
	for(i=1; i<s; i++)
	{
		for(j=0; j<=n; j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]) dp[i][j]=max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
		}
	}
	printf("%d", dp[s-1][n]);
	return 0;
}
