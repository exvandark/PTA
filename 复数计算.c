#include <stdio.h>

int A1(double x1, double x2)
{
    double a1 = 0;
    a1 = x1 + x2;

    return a1;
}
int A2(double y1, double y2)
{
    double a2 = 0;
    a1 = y1 + y2;

    return a2;
}
int P1(double x1, double x2)
{
    double p1 = 0;
    p1 = x1 * x2;

    return p1;
}
int P2(double x1, double x2)
{
    double p2 = 0;
    p2 = y1 * y2;

    return p2;
}

int main()
{
    double x1, y1, x2, y2, a1 = 0, a2 = 0, p1 = 0, p2 = 0;
    scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

    a1 = A1(x1, x2);
    a2 = A2(y1, y2);
    p1 = P1(x1, y1);
    p2 = P2(y1, y2);
    printf("addition of complex is %f%+fi", a1, a2);
    printf("product of complex is %f%+fi", p1, p2);

    return 0;
}