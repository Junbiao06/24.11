/// 最大公约数 a/b=c a%b=d
#include <stdio.h>

int function(int a, int b);

int main(void)
{
    int a, b;
    printf("a=? b=?\n");
    scanf("%i%i", &a, &b);
    b = function(a, b);
    printf("Greatest Common Divisor: %i", b);
}

int function(int a, int b)
{
    int c = a % b;
    if (c == 0)
        return b;
    else
    {
        return function(b, c);
    }
}