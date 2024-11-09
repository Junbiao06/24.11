#include <stdio.h>
#include <math.h>
int main()
{
    double m, s, t;
    int i = 1;
    scanf("%lf", &m);
    t = m;
    s = 0;
    while (fabs(t) >= 1e-4)
    {
        s += t;
        i++;
        t *= -1 * m / i;
    }
    printf("%.2f\n", s);
}