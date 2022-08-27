#include<stdio.h>
char a[60], b[2][10]={"YES", "NO"};
int main()
{
	int n, i, j, k, sw;
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		scanf("%s", a);
		k=-1; sw=0;
		for(j=0; a[j]!=0; j++)
		{
			if(a[j]=='(') ++k;
			else --k;
			if(k<-1) sw=1;
		}
		if(k>-1) sw=1;
		printf("%s\n", b[sw]);
	}
	return 0;
}
