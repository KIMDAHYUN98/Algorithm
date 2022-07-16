#include <stdio.h>

int a[7][7];
int main() 
{
	int cnt = 0;
	int i, j;
	
	for(i=0; i<7; i++)
	{
		for(j=0; j<7; j++)
		{
			a[i][j]=10;
		}
	}

	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=1;i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			if(a[i-1][j] > a[i][j] &&  a[i][j-1]>a[i][j] && a[i+1][j] > a[i][j] &&  a[i][j+1]>a[i][j])
			   a[i][j] = -1;
		}
	}

	printf("\n");
	
	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			if(a[i][j] != -1)  printf("%d ", a[i][j]);
			else printf("* ");
		}
		printf("\n");
	}

	return 0;
}
