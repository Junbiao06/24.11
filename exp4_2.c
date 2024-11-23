#include <stdio.h>

void DrawTriangle(int n, char c);

int main(void)
{
    int n1 = 5;
    int n2 = 10;
    char c1 = '*';
    char c2 = '#';
    DrawTriangle(n1, c1);
    DrawTriangle(n2, c2);
    return 0;
}

void DrawTriangle(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}