#include <stdio.h>

int a[5][5];
int main() 
{
	int i, j, x=0, y=0, q;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<=i; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for(q=1; q<=3; q++)
	{
		for(i=0; i<3; i++)
		{
			for(j=0; j<=i; j++)
			{
				a[i][j]=a[i][j]+a[i+1][j]+a[i+1][j+1];
			}
		}
	}
	
	printf("%d\n", a[0][0]);
	return 0;
}
