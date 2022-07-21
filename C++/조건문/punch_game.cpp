#include<stdio.h>

int main_punch_game()
{
	int a, b, c, d, e;
	int dab = 0;
	/*
	a : 주먹, 10 데미지
	b : 날아차기, 15 데미지
	c : 아도겐, 30 데미지
	d : 연속펀치, 40 데미지
	e : 던지기, 45 데미지
	*/

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	dab += (10 * a)
		+ (15 * b)
		+ (30 * c)
		+ (40 * d)
		+ (45 * e);

	if (a + b + c + d + e > 10)
	{
		if (dab > 100)
			printf("time out");
		else
			printf("time out");
	}
	else
	{
		if (dab > 100)
			printf("you win");
		else
			printf("game over");
	}

	return 0;
}
