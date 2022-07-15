#define _CRT_SECURE_NO_WARNINGS
#define SWAP(x, y, temp) ( (temp=(x), (x)=(y), (y)=(temp)) )
#define MAX_SIZE 5
# include <stdio.h>

// 선택 정렬
void selection_sort(int list[], int n) {
    int i, j, least, temp;

    for (i = 0; i < n - 1; i++)
    {
        least = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[least])
            {
                least = j;
            }
        }

        if (i != least)
        {
            SWAP(list[i], list[least], temp);
        }
    }
}

int main() {

    int i;
    int n = MAX_SIZE;
    int list[MAX_SIZE] = { 9, 6, 7, 3, 5 };
    
    selection_sort(list, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    
}
