#include<stdio.h>
int main_pir()
{
	int a[20];
	
	int i, j, temp, sum=0;

	for (i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 20; i++)
	{
		for (j = i+1; j < 20; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	sum = a[18] + a[19];

	printf("%d\n", sum);
	printf("%d %d", a[18], a[19]);
  
	return 0;
}
