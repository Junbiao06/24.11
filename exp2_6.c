#include <stdio.h>
#include <math.h>
#define EPS 1e-3

int main(void)
{
    double a, b, c, t;
    printf("a=? b=? c=?\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b)
    {
        t = b;
        b = a;
        a = t;
    }
    if (a > c)
    {
        t = c;
        c = a;
        a = t;
    }
    if (b > c)
    {
        t = c;
        c = b;
        b = t;
    }

    if (a > 0 && b > 0 && c > 0 && a + b > c)
    {
        if (fabs(c - a) <= EPS)
            printf("Equilateral triangle.");//等边
        else if (fabs(a * a + b * b - c * c) <= EPS)
        {
            if (fabs(b - a) <= EPS)
                printf("Isosceles right triangle");//等腰直角
            else
                printf("Right triangle.");//直角
        }
        else if (fabs(b - a) <= EPS || fabs(c - b) <= EPS)
        {
            printf("Isosceles triangle.");//等腰
        }
        else
        printf("Normal triangle.");//一般
    }
    else
        printf("Error input.");//不构成三角形
    return 0;
}
