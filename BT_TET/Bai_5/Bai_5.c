/*Bài 5: Tìm tổng và giá trị trung bình của 1 dãy số*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[1000];
    int n, min, max, sum = 0, avr = 0;
    printf("Nhap vao so phan tu cua day so: n = ");
    scanf("%d", &n);
    printf("Day so sau khi duoc random:\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
        sum += a[i];
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("Tong gia tri cua cac phan tu trong day la %d va gia tri trung binh cua day la %0.2f", sum, sum*1.0/n);
    return 0;
}