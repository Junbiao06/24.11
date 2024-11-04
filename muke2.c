#include <stdio.h>
#include <math.h>

int down(int a);

int main(void)
{
    double m, s, item;
    double up = 1;
    int i, sign = 1;
    scanf("%lf", &m);
    do
    {
        up *= sign * m;
        item = up / down(i);
        s += item;
        i++;
        sign = -sign;
    } while (fabs(item) >= 1e-4);
    printf("%.2f\n", s);
}

int down(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    return sum;
}