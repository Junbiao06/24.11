#include <stdio.h>
int main(void)
{
    double a;
    scanf("%lf", &a);
    double b = 5 * (a - 32) / 9;
    printf("Celsius=%lf", b);
}