
#include<stdio.h>
int main()
{
	
	int i, n;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++)
	{
		while(n % i == 0)
		{
			n /= i;
			printf("%d ", i);
		}
	}
	return 0;
}
