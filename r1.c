#include <stdio.h>
#include <math.h>
int main(void)
{
    int i = 1;
    int n = 1;
    double m, item, s;
    scanf("%lf", &m);
    item = m;
    while (fabs(item) >= 1e-4)
    {
        s += item;
        i++;
        item *= -m / i;
    }
    printf("%.2f\n", s);
}