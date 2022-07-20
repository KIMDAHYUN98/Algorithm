#include <stdio.h>

int main_hack()
{
    int n, r, e, c;

    // r : 홍보를 하지 않을 경우 수입
    // e : 홍보를 할 경우의 수입
    // c : 홍보 비용

    scanf("%d %d %d", &r, &e, &c);

    if (e - c > r)
        printf("advertise");
    else if (e - c == r)
        printf("does not matter");
    else
        printf("do not advertise");

    return 0;
}
