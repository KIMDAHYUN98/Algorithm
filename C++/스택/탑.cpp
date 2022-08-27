#include<stdio.h>
#define M 500001
int s[M][2], dab[M], a[M];
int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	k=-1;
	for(i=n; i>=1; i--)
	{
		if(k==-1 || s[k][0] > a[i])
			s[++k][0] = a[i], s[k][1] = i;
		else
		{
			for(k;k>=0 && s[k][0] <= a[i]; --k)
			{
				dab[s[k][1]] =i;
			}
			s[++k][0] = a[i], s[k][1] = i;
		}
	}
	for(i=1; i<=n; i++)
		printf("%d ", dab[i]);
	return 0;
}
