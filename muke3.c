#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, i, count = 0;
    for (x = 101; x <= 999; x += 2)
    {
        n = (int)sqrt(x);
        for (i = 2; i <= n; i++)
            if (x % i == 0)
                break;
        if (i > n)
        {
            printf("%4d", x);
            count++;
            if (count % 8 == 0)
                printf("\n");
        }
    }
    printf("\n");
}