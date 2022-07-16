#include <stdio.h>

int a[20][20];
int main() 
{
	int i, j, n; 
	int cnt=0, k=1, x=0, y=-1;
	
	scanf("%d", &n);

	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			y += k;
			a[x][y] = ++cnt;
		}
		for(j=1; j<i; j++)
		{
			x += k;
			a[x][y] = ++cnt;
		}

		k=k*-1;
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]==0)
				printf("    ");
			else
				printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
