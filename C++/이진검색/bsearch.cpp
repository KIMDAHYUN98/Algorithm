/*
while : 범위가 정해지지 않을 떄 사용
for : 범위가 정해져 있을 때 사용
*/
#include<stdio.h>
#define M 500001
int a[M];
int main_bsearch()
{
	int n, m, i;
	scanf("%d", &n); // 자료의 갯수 n
	for (i = 1; i <= n; i++) 
		scanf("%d", &a[i]); // a 배열 자료를 받아주는 부분
	scanf("%d", &m); // 찾는 값 m
	int l = 1, r = n, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (a[mid] == m)
		{
			printf("%d", mid); // 자료를 찾았으면 출력하고 리턴
			return 0;
		}
		else if (a[mid] > m) r = mid - 1; // 중간값이 찾는 값보다 큰 경우
		else l = mid + 1; // 중간값이 찾는 값보다 작은 경우
	}

	printf("not found"); // 못 찾았을때 출력 값
	return 0;
}
