#include <stdio.h>

int main()
{
    int x=0, max = 0;

    for (int i = 0; x>=0; i++)
    {
        scanf_s("%d", &x);

        if (max < x)
        {
            max = x;
        }

        if (x < 0)
        {
            break;
        }


        x = 0;
    }

    printf("%d", max);
    return 0;
}