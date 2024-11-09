#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, k, count = 0;
    for (n = 101; n <= 999; n += 2)
    {
        k = (int)sqrt(n);
        for (i = 2; i <= k; i++)
            if (n % i == 0)
                break;
        if (i > k)
        {
            count++;
            printf("%4d", n);
            if (count % 8 == 0)
                printf("\n");
        }
    }
    printf("\n");
}
