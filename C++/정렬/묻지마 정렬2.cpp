#include <stdio.h>
#define M 1010

struct temp 
// 구조체(=클래스) 정의 및 선언, 새로운 클래스 선언
// temp 자료형을 생성
{
	int a, b;
} k[M];// 정의와 동시에 선언

// struct temp k[10]; => k라는 변수를 10개 생성

// 객체를 이용한 알고리즘
int main() 
{
	int i,j,n;

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &k[i].a, &k[i].b);
	}

	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(k[i].a > k[j].a || k[i].a == k[j].a && k[i].b < k[j].b)
			{
				t=k[i]; k[i]=k[j]; k[j]=t;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}

	return 0;
}
