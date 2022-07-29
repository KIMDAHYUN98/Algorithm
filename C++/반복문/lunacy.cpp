#include<stdio.h>

int main_lunacy()
{
	int i;
	double x, y = 0.167;

	// x : 지구에서의 몸무게
	// y : 달에서의 몸무게

	while (true)
	{
		scanf("%lf", &x);
		if (x > 0)
		{
			y = x * y;
			printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", x, y);
			y = 0.167;
		}
		else
			break;
	}

	return 0;
}
