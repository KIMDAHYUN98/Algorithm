#include<stdio.h>

int rev(int v)
{
	int t = 0;
	while(1) //while 1 = 참, 0 = 거짓
	{
		if(v==0) return t;
		t = t*10 + v%10;
		v /= 10;
	}
}

int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	
	c = rev(rev(a) + rev(b));

	printf("%d", c);

	return 0;
}
