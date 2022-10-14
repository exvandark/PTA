#include <stdio.h>



int gcd(int x, int y);

int main()
{
    int x, y;

    scanf_s("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd(int x, int y)
{
    int n;

    if (x > y)
    {
        for (;;)
        {
            n = x % y;
            x = y;
            y = n;
            if (n > 0)
            {
                continue;
            }
            else if (n == 0)
            {
                return x;


            }
        }
    }
    else if (x < y)
    {
        for (;;)
        {
            n = y % x;
            y = x;
            x = n;
            if (n > 0)
            {
                continue;
            }
            else if (n == 0)
            {
                return y;


            }
        }
    }

}