// 여러수의 최대 공약수 
//여러개의 수를 입력으로 받아 이 수들의 최대 공약수를 구하는 문제이다.

#include<stdio.h>

int A[1010];
int gcd(int v, int w)
{
	int t;
	
	while(1)
	{
		v = v  % w;
		if(v==0) return w;
		
		t = v; 
		v = w; 
		w = t;
	}
}	

int main()
{
	int n ,i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
		if(i>=1)
			A[0] = gcd(A[0], A[i]);
	}
	printf("%d", A[0]);

	return 0;
}
