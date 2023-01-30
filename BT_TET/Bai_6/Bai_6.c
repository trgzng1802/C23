/*Bài 6: Đếm số ký tự và từ xuất hiện trong chuỗi. Vd: “pay it forward” có 2 ký tự „a‟ và 3 từ*/

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[1000];
    char *token;
    int so_ky_tu = 0;
    int so_tu = 0;
    printf("Nhap vao chuoi!\n");
    fgets(buffer, sizeof(buffer), stdin);
    puts(buffer);

    token = strtok(buffer, " ");

    while (token != NULL)
    {
        printf("%s\n", token);
        so_tu++;
        so_ky_tu += strlen(token);
        token = strtok(NULL, " ");
    }

    printf("Chuoi co %d tu va %d ky tu.", so_tu, so_ky_tu - 1);
    return 0;
}