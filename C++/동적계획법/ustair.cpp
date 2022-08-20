#include<stdio.h>
#include<algorithm>
#define M 310
using namespace std;

int num[M], a[M], b[M], n;

int main_ustair()
{
	int i, j;

	scanf("%d", &n);
	for(i=2; i<=n+1; i++) // dp 초기화를 위해 2번방 부터 받음
	{
		scanf("%d", &num[i]);
	}
	for(i=2; i<=n+1; i++)
	{
		a[i] = max(a[i-2] + num[i], b[i-2]+num[i]);
		b[i] = a[i-1] + num[i];
	}
	printf("%d", max(a[n+1], b[n+1]));

	return 0;
}
