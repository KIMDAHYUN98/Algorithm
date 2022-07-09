#include <stdio.h>
#define M 1010
int a[M], b[M];

int main() 
{
	int i,j,n,t;

	scanf("%d", &n); // 자료갯수
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}

	// 반을 기준으로 오름차순 하되 같은반이면 번호를 기준으로 내림차순

	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j] || a[i] == a[j] && b[i] < b[j]) // 교체작업, AND > OR
			{
				t=a[i]; a[i]=a[j]; a[j]=t;
				t=b[i]; b[i]=b[j]; b[j]=t;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}

	return 0;
}
