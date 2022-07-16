#include <stdio.h>

int a[4][4];
int main() 
{
	int cnt = 0;
	int i, j;
	
	for(i=0; i<=3; i++)
	{
		for(j=0; j<=3; j++)
		{
			a[i][j] = ++cnt;
		}
	}

	for(i=0; i<=3; i++)
	{
		for(j=0; j<=3; j++)
		{
			printf("%3d",  a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
