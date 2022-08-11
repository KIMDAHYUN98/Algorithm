#include<stdio.h>

int main()
{
    int n=1, u, d, p=0, m=0;
    
    while(1)
    {
         scanf("%d %d %d", &n, &u, &d);
	if(n == 0) break;
         while(1) 
         {
              p +=u;
              m++;
              if(n<=p) break;
              p -= d;
              m++;
          }
       printf("%d\n", m);
       m=0;
       p=0;
     }
    return 0;
}
