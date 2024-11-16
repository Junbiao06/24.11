#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n, count;
    for (i = 101; i <= 999; i += 2)
    {
        n = (int)sqrt(i);
        for (j = 2; j <= n; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > n)
        {
            count++;
            printf("%4d", i);
            if (count % 8 == 0)
                printf("\n");
        }
    }
    printf("\n");
}