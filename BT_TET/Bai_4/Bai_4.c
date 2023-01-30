/*Bài 4: Tìm số lớn nhất và số bé nhất trong 1 dãy số*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[1000];
    int n, min, max;
    printf("Nhap vao so phan tu cua day so: n = ");
    scanf("%d", &n);
    printf("Day so sau khi duoc random\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
        printf("%d ", a[i]);
    }

    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }

    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min) min = a[i];
    }

    printf("\n");
    printf("So lon nhat la %d va so be nhat la %d", max, min);
    return 0;
}