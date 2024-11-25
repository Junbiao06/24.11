#include <stdio.h>
#include<math.h>
#define pi 3.14

double surface(double r, double h);
double volume(double r, double h);

int main(void)
{
    double r, h, s, v;
    scanf("%lf%lf", &r, &h);
    s = surface(r, h);
    v = volume(r, h);
    printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, s, v);
}

double surface(double r, double h)
{
    double sur = pi * r * sqrt(h*h+r*r)  + pi * r * r;
    return sur;
}

double volume(double r, double h)
{
    double vol = pi * r * r * h / 3;
    return vol;
}