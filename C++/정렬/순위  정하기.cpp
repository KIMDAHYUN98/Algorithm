#include <stdio.h>
#include<algorithm>
#define M 1010
using namespace std;

// 최대 정수는 1000 이하 이므로 넉넉하게 1010으로 지정
int a[M], r[M];

// 전역변수로 지정하는 것이 좋다
// 지역변수로 지정시 쓰레기 값이 담김
// 전역변수는 0으로 초기화
int main() 
{
	int n, i,  j;
	
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		r[i]=1;
		
	}

	for(i=0; i<n;i++) // i번째 자료의 순위를 구함
	{
		for(j=0; j<n;j++) // j번째 자료와 비교
		{
			if(a[i] < a[j]) r[i]++;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", r[i]);
	}

	return 0;
}
