#include <stdio.h>
#include <math.h>

double cylinder(double r, double h)
{
    double x;

    x = ¦Ð * r * r * h;

    return x;
}

int main()
{
    double r, h, volume;
    scanf("%lf%lf", &r, &h);

    volume = cylinder(r, h);

    printf("Volume = %0.3f", volume);

    return 0;
}