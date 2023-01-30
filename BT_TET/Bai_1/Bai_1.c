/*
Bài 1 : Viết chương trình in ra hình tam giác có chiều cao cho trước
- Input: chiều cao n = 4
- Output:
           #
          ###
         #####
        #######
*/



#include <stdio.h>

int main()
{
    int n;
    printf("Chieu cao n = ");
    scanf("%d",&n);
    int temp = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n-1); j++)
        {
            if ((j > (temp-1)) && (j < ((2*n - 2) - (temp - 1)))) printf("#");
            else printf(" ");
        }
        temp--;
        printf("\n");
    }
    return 0;
}