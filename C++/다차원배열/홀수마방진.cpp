#include <stdio.h>

int a[10][10];
int main() 
{
	
	int n, i, j, x, y, zx, zy, cnt;

	scanf("%d", &n);
	y=(n-1)/2, x=0, cnt=1;
	
	for(i=1; i<=n*n;i++)
	{
		a[x][y] = cnt++;
		zx=x; zy=y;
		x--; y++;
		// 범위에 벗어날 경우
		if(x<0) x=n-1;
		if(y>=n) y=0;

		if(a[x][y]!=0)
		{
			x=zx+1; y=zy;
		}// 다음에 넣을 좌표
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
