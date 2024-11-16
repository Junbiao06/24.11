#include <stdio.h>

int main(void)
{
    double a = 2;
    double b = 1;
    double sign = 1;
    double value = 0;
    int n = 0;
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        value += sign * a / b;
        a = a + b;
        b = a - b;
        sign = -sign;
    }
    printf("%lf", value);
    return 0;
}