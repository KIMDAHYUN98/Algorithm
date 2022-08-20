#include<stdio.h>
#include<algorithm>
#define M 101

using namespace std;
int map[M][M], n;

int main_scv()
{
	int i, j;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
		scanf("%d", &map[i][j]);
		}
	}

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			map[i][j] = max(map[i-1][j] + map[i][j], map[i][j-1] + map[i][j]);
		}
	}

	printf("%d", map[n][n]);
	return 0;
}
