#include <stdio.h>
#include <algorithm> // 내장함수(sort) 정보가 여기 있음
using namespace std;
#define M 1010

struct temp 
{
	int a, b, c;
} k[M], t;

int r[5]={0,1,3,4,2}; // 순위를 정해놓음

// 내장함수를 이용한 알고리즘

int chk(temp i, temp j)
{
	return (i.c < j.c) // 첫번째 조건
		|| (i.a == j.a && i.a%2==1 && i.b < j.b) // 같은 반이고 홀수 반이면서 오름차순일 경우 교체
		|| (i.a == j.a && i.a%2==2 && i.b > j.b); // 같은 반이고 짝수 반이면서 내림차순일 경우 교체
}
int main() 
{	
	int i,j,n;

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &k[i].a, &k[i].b);
		k[i].c=r[k[i].a]; // 순위를 생성?
		// 순위를 기준으로 정렬
	}
	
	sort(k, k+n, chk);

	for(i=0; i<n; i++)
	{
		printf("%d %d\n", k[i].a, k[i].b);
	}

	return 0;
}
