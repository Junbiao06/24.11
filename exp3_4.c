#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, count, a, b, k;
    count = 0;
    do
    {
        printf("a=? b=? (10<=a<=b<=1000)\n");
        scanf("%i%i", &a, &b);
    } while (a < 10 || b > 1000 || a > b);
    for (k = a; k <= b; k++)
    {
        int n = (int)sqrt(k);
        for (i = 2; i <= n; i++)
        {
            if (k % i == 0)
                break;
        }
        if (i > n)
        {
            printf("%i ", k);
            count++;
            if (count % 5 == 0)
                printf("\n");
        }
    }
    printf("\n");
    return 0;
}