#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);
    draw(height);
}

void draw(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}