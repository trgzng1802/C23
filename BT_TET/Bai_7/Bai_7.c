// Bài 7: Sắp xếp 1 dãy số có chiều dài n tăng dần, dùng thuật toán bubble sort

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
    int arr[1000], n;
    printf("Nhap vao chieu dai day so n = ");
    scanf("%d", &n);

    printf("Day so truoc khi sap xep\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);

    printf("\n");
    printf("Day so sau khi sap xep\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}