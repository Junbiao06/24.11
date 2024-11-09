#include <stdio.h>
int main(void)
{
    int a, b;
    a = 1;
    b = 10;

    do
    {
        b -= a;
        a++;
    } while (b-- < 0);
    printf("%i", b);
}