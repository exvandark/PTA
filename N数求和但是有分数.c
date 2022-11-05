#include <stdio.h>

int main()
{
    int N, a = 0, a1, b = 1, b1, c, d, t, yu;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d/%d", &c, &d);

        a = a * d + c * b;
        b = d * b;
    }

    t = a / b;
    a = a - t * b;
    a1 = a;
    b1 = b;
    if (a != 0)
    {
        for (int i = 0;; i++)
        {
            if (a != 0)
            {
                yu = b % a;
                if (yu == 0)
                {
                    a1 = a1 / a;
                    b1 = b1 / a;
                    break;
                }
                b = a;
                a = yu;
            }
            else
            {
                break;
            }
        }
    }

    if (a == 0)
    {
        if (t != 0)
        {
            printf("%d", t);
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        if (t != 0)
        {
            printf("%d %d/%d", t, a1, b1);
        }
        else
        {
            printf("%d/%d", a1, b1);
        }
    }
}