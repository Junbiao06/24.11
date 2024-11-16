#include <stdio.h>
int main(void)
{

    int i, j, k, n, line;
    do
    {
        printf("How many lines(Odd number): ");  //Odd number奇数
        scanf("%i", &line);
    } while (line % 2 == 0);
    n = line / 2;
    for (i = 1; i <= n + 1; i++)
    {
        for (j = i; j < n + 1; j++)
        {
            printf(" ");
            printf(" ");
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf(" ");
            printf(" ");
            printf(" ");
        }
        for (k = 1; k <= 2 * n - 2 * i + 1; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}