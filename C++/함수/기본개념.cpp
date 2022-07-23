#include<stdio.h>

// f10 한단계씩 실행
// f11 함수 내부
// ctrl+f10 커서위치
// shift+f5 디버깅 종료

void pro(int v, int w) //  void : 자료를 넣지 않을 때 사용
{
	double c;
	c=(double)(v+w)/2;
	printf("%lf", c);

}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%lf"pro(a,b));

	return 0;
}
