#include<stdio.h>
#include<algorithm>
#define M 10010
using namespace std;

int num[M], dp[M], via[M];
int n, dab, k;

void dfs(int i)
{
	if(via[i] > 0) dfs(via[i]);
	printf("%d", num[i]);
}

int main_up_sequence()
{
	int i, j;

	scanf("%d", &n);
	for(i=2; i<=n+1; i++) 
	{// 현재 위치보다 앞에 위치하면서 num[i]보다 num[j]가 작음?
		scanf("%d", &num[i]);
		dp[i] = 1; //초기화
	}
	dab=1; k=1;
	for(i=2; i<=n+1; i++)
	{
		for(j=i-1; j>=1; j--)
		{
			if(num[i] > num[j] && dp[i] < dp[j] +1)
			{
				dp[i]=dp[j]=1;
				via[i]=j;
			}
		}
		if(dab < dp[i]){ dab=dp[i]; k=i;}
	}
	printf("%d\n", dab); // 최대깊이 출력
	dfs(k); // 경로출력

	return 0;
}
