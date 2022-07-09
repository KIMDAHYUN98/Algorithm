#include <stdio.h>
#include <algorithm> // 내장함수(sort) 정보가 여기 있음
using namespace std;
#define M 1010

struct temp 
{
	int a, b;
} k[M], t;

// 내장함수를 이용한 알고리즘

int chk(temp i, temp j)
{
	return (i.a < j.a) || (i.a==j.a && i.b>j.b); 
	// 거짓 : 0, 참 : 1  리턴, 조건을 만족 안 할때 교체
}
int main() 
{	
	int i,j,n;

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &k[i].a, &k[i].b);
	}
	
	sort(k, k+n, chk); // k : 초기값(0), k+n : n-1방 까지, chk:정렬조건

	for(i=0; i<n; i++)
	{
		printf("%d %d\n", k[i].a, k[i].b);
	}

	return 0;
}
