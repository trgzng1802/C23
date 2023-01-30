// Bài 9: Tìm giá trị của  e^2 dùng khai triển maclaurin tới bậc n = 10

#include <stdio.h>
#include <math.h>

#define ORDER 10

unsigned int Factorial(unsigned int n)
{
    if (n == 0) return 1;
    else return n*Factorial(n - 1);
}

int main()
{
    float result = 0, x = 0;
    const int order = 10;
    printf("Tinh gia tri cua e^x tai x = ");
    scanf("%f", &x);
    
    for (int i = 0; i < ORDER; i++)
    {
        result += pow(x, i)/Factorial(i);
    }
    printf("Gia tri cua e^%0.2f la %0.4f", x, result);
    return 0;
}