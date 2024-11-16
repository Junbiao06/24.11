#include <stdio.h>

int main(void)
{
    double a = 2;
    double b = 1;
    double sign = 1;
    double value = 0;
    for (int i = 1; i <= 10; i++)
    {
        value = sign * a / b;
        a = a + b;
        b = a - b;
        sign = -sign;
    }
    printf("%lf", value);
}