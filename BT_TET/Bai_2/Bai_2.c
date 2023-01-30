/*Bài 2: Giải phương trình bậc 2*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Nhap vao cac he so cua phuong trinh bac 2 \n");
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);
    if (!a)
    {
        if (!b)
        {
            if (!c)
            {
                printf("Phuong trinh co vo so nghiem\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else printf("Phuong trinh co nghiem duy nhat x = %0.2f", - c/b);
    }
    else
    {
        float delta = b*b - 4*a*c;
        if (delta < 0) printf("Phuong trinh co nghiem phuc x1 = %0.2f + %0.2fi va x2 = %0.2f - %0.2fi\n",- b/2/a, sqrt(abs(delta))/2/a,- b/2/a, sqrt(abs(delta))/2/a);
        else if (delta == 0) printf("Phuong trinh co nghiem kep x = %0.2f", - b/2/a);
        else printf("Phuong trinh co 2 nghiem phan biet x1 = %0.2f va x2 = %0.2f", (- b + sqrt(delta))/2/a, (- b - sqrt(delta))/2/a);
    }
    return 0;
}