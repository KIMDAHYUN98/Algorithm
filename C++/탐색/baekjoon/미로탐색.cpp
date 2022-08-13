#define M 101
#include<stdio.h>

int map[M][M], qx[M * M], qy[M * M], via[M][M];
int zx[4] = { 1, -1, 0, 0 }, zy[4] = { 0, 0, 1, -1 };

int main_2178()
{
	int n, m, x, y, st, ed, i, j;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%1d", &map[i][j]);
		}
	}

	st = ed = -1;
	qx[++st] = 1; qy[st] = 1; via[1][1] = 1;

	while (st != ed)
	{
		x = qx[++ed]; y = qy[ed];
		for (i = 0; i < 4; i++)
		{
			if (x + zx[i] >= 1 && x + zx[i] <= n && y + zy[i] >= 1
				&& y + zy[i] <= m && map[x + zx[i]][y + zy[i]] == 1
				&& via[x + zx[i]][y + zy[i]] == 0)
			{
				qx[++st] = x + zx[i]; 
				qy[st] = y + zy[i];
				via[x + zx[i]][y + zy[i]] = via[x][y] + 1;
			}
		}
		
	}
	printf("%d", via[n][m]);
	return 0;
}
