#include <stdio.h>

int main()
{
    double eps;
    double decimal = 1, x = 1;
    double sum=0;
    int i;
    scanf("%lf", &eps);

    if (eps < decimal)
    {
        for (i = 1; decimal > eps; i++)
        {
            if (i % 2 != 0)
            {
                decimal = 1;
                decimal = decimal / x;
                sum = sum + decimal;

                x += 3;

            }
            else
            {
                decimal = 1;
                decimal = decimal / x;
                sum = sum - decimal;

                x += 3;

            }
        }
    }
   else if(eps>=decimal)
    {
        sum = 1;
    }


    printf("sum = %f", sum);
}