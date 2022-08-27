#include<stdio.h>
int s[80000];
long long dab;
int main()
{
	int n, i, j, a, k;
	scanf("%d", &n);
	k=-1;
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a);
		if(k==-1 || s[k]>a)
			s[++k]=a;
		else
		{
			for(k;k>=0 && s[k]<=a; --k)
			{
				dab += k;
			}
			s[++k] = a;
		}
	}
	dab += (k*(k+1)/2);
	printf("%lld", dab);
	return 0;
}
