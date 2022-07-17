/* 2차원 배열 연습 문제 5.
        1
    2   3   4
 5  6   7   8   9
    10  11  12
        13
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10][10] = {0, };
    int i, j, x=3, y=1, cnt=0;
    for (i = 0; i < 5; i++)
    {
            if (i <= 2)
                x--, y++;
            else
                x++, y--; 
        for (j = x; j <= y; j++)
        {   
            arr[i][j] = ++cnt;
            
        }
        
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] != 0) 
                printf("%3d", arr[i][j]);
            else 
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
