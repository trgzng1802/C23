
/*Bài 3: Giả sử 4 đồng có mệnh giá 1$, 2$, 5$, 10$. 
Nhập vào số tiền (nguyên) in ra số đồng tiền nhỏ nhất. 
Vd: 23$ = 2*10$+2$+1$, vậy cần 4 đồng*/
#include <stdio.h>

#define SO_MG   4

int main()
{
    int loai_tien[4] = {10, 5, 2, 1};
    int so_tien, so_to;
    printf("Nhap vao so tien cua ban \n");
    scanf("%d", &so_tien);
    printf("%d$ = ", so_tien);
    for (int i = 0; i < SO_MG; i++)
    {
        so_to = so_tien/loai_tien[i];
        if (so_to != 0) printf("%d*%d$", so_to, loai_tien[i]);
        if((so_to != 0) && (i < (SO_MG - 1))) printf(" + ");
        so_tien = so_tien%loai_tien[i];
    }
    return 0;
}