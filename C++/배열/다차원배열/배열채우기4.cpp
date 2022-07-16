#include <stdio.h>

int a[5][5];
int main() 
{
	int cnt = 0;
	int i, j, x=2, y=2;
	
	for(i=0; i<=4; i++)
	{
		for(j=x; j<=y; j++)
		{
			a[i][j] = ++cnt;
		}
		if(i<=1) x--, y++;
		else x++, y--;
	}
	
	for(i=0; i<=4; i++)
	{
		for(j=0;  j<=4; j++)
		{
			if(a[i][j] == 0) printf("   ");
			else  printf("%3d", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}
