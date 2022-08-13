#define M 1010
#include<stdio.h>

int map[M][M], q[M], chk[M], chk1[M], n, m, v;

void dfs(int k)
{
	int i;
	chk[k] = 1;
	printf("%d", k);
	for (i = 1; i <= n; i++)
	{
		if (map[k][i] == 1 && chk[i] == 0)
			dfs(i);
	}
}

int main()
{
	int a, b, i;
	scanf("%d%d%d", &n, &m, &v);
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &a, &b);
		map[a][b] = map[b][a] = 1;
	}

	dfs(v);

	return 0;
} 
