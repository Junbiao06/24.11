#include <stdio.h>
#define N 10

int main(void)
{
    int n;
    printf("Size: ");
    scanf("%d", &n);
    int a[N][N];
    int up = 0, down = n - 1;
    int left = 0, right = n - 1;
    int k = 1;
    while (left <= right && up <= down)
    {
        for (int i = left; i <= right; i++)
        {
            a[up][i] = k++;
        }
        up++;
        for (int i = up; i <= down; i++)
        {
            a[i][right] = k++;
        }
        right--;
        if (up < down)
        {
            for (int i = right; i >= left; i--)
            {
                a[down][i] = k++;
            }
            down--;
        }
        if (left < right)
        {
            for (int i = down; i >= up; i--)
            {
                a[i][left] = k++;
            }
            left++;
        }
    }
    printf("The elements are: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}