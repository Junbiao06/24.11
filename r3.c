#include <stdio.h>
int main(void)
{
    int n, i, j, k;
    printf("How many lines?\n");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * n + 1 - 2 * i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}