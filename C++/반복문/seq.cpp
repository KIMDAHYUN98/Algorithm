#include<stdio.h>
 
int main()
{
    int a, b, i, t;
    scanf("%d %d", &a, &b);
 
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    for (i = a; i <= b; i++)
        printf("%d ", i);
 
 
    return 0;
}
