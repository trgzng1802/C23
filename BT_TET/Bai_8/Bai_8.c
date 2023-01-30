// Bài 8: Sắp xếp 1 dãy số có chiều dài n giảm dần, dùng thuật toán selection sort

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    srand(time(NULL));
    int arr[1000], n, max_idx;
    printf("Nhap vao chieu dai day so n = ");
    scanf("%d", &n);

    printf("Day so truoc khi sap xep\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        max_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] > arr[max_idx])
            max_idx = j;
        swap(&arr[max_idx], &arr[i]);
    }

    printf("\n");
    printf("Day so sau khi sap xep\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}