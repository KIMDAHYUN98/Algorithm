#include<stdio.h>
#include<algorithm>
#define M 20

using namespace std;
int dp[M] = {1, 1, 2};
int n;

int main_gc()
{
	int i, j;

	scanf("%d", &n);
	for(i=3; i<=n+1; i++)
	{
		for(j=0; j<n; j++)
		{
			dp[i] += dp[j]*dp[i-1-j];
		}
	}
	printf("%d", dp[n]);

	return 0;
}
