#include<stdio.h>
 
int main() {
 
    // 1. 사야할 우유 양과 우유를 파고자 하는 업자 수 입력
    // 2. 업자 수 만큼 for문 반복
    // 2-1. 1리터 당 가격 p와 업자가 가진 우유양 a 입력
 
    int n, m, i, j, t, k, sum=0;
    int p[1010], a[1010];
 
    scanf("%d %d", &n, &m);
 
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &p[i], &a[i]);
    }
 
    // 3. 정렬
    // 3-1. 선택정렬로 p(리터당 가격) 기준으로 오름차순 정렬
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                // 만약 p[i]가 p[j]보다 클 경우 
                // 임시변수 t <- p[j]
                // p[j] <- p[i]
                // p[i] <- p[j] 저장
                t = p[j]; p[j] = p[i]; p[i] = p[j];
            }
        }
    }
 
    // 3-2. 선택 정렬 후 사야할 우유양에 차례대로 각 기업이
    // 가지고 있는 우유양을 뺀다
 
    for (i = 0; i < n; i++)
    {
        if (n > a[i])
        {
            n -= a[i];
            sum += p[i] * a[i];
        }
        else
        {
            k = n / p[i]; // 40 / 8 = 5
            sum += p[i] * k;
            break;
        }
    }
 
    // 4. 출력
    printf("%d", sum);
    return 0;
}
