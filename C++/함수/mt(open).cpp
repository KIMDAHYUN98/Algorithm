#include<stdio.h>

int n;
void pro(int a)
{
	printf("%d", a); // 12345
	if(a==n) return;
	pro(a+1);
	printf("%d", a); // 4321
}

int main()
{

	scanf("%d",  &n);
	pro(1);

	return 0;
}
