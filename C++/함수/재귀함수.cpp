#include<stdio.h>

void pro(int v)
{
	if(v==5) return;
	pro(v+1);
	printf("%d", v);
}

int main()
{
	pro(1);
}
