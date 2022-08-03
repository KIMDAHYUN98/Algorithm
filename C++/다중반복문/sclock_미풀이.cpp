#include<stdio.h>
/*
입력

5

출력

****$
 **$
  $
 $** 
$****

입력

7

출력

******$
 ****$
  **$
   $
  $**
 $****
$******
*/

int main_sclock()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		if (i <= n / 2)
		{
			for (j = 0; j < n-i; j++)
			{
				if (i <= j)
					printf("*");
				else
					printf(" ");
			}
		}
		else 
		{
			for (j = n-1; j >= 0; j--)
			{
				if (i>=j)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
