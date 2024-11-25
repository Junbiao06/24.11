#include <stdio.h>
#include <math.h>

int judge(int x);

int main(void)
{
    int count = 0;
    for (int i = 4; i <= 2000; i = i + 2)
    {
        for (int j = 2; j < 1000; j++)
        {
            if (judge(j) && judge(i - j))
            {
                printf("%4d=%4d+%4d", i, j, i - j);
                count++;
                if (count % 4 == 0)
                    printf("\n");
                else
                    printf(" ");
                break;
            }
        }
    }
}

int judge(int x)
{
    int i;
    int y = (int)sqrt(x);
    for (i = 2; i <= y; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i > y)
        return 1;
    else
        return 0;
}