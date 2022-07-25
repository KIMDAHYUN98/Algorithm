#include<stdio.h>

int main_mM()
{
	int a, max=0, min=0, i, t=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a);
		
		if (t == 0)
			t = a, max = a, min = a;
		else // t가 0이 아닐 때
		{
			if (t > a) // t가 입력한 a 값보다 클 때
			{
				if (max <= t) 
					max = t;
				if (min > a)
					min = a;
				t = a;
			}
			else // t < a
			{
				if (min > t)
					min = t;
				if (max < a)
					max = a;
				t = a;
			}
		}
	}

	printf("%d %d", max, min);
	return 0;
}
