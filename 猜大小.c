#include <stdio.h>

int main()
{
    int x, temp;
    scanf_s("%d", &x);
    scanf_s("%d", &temp);

    for (int i = 0; temp != x; i++)
    {
        if (temp > x)
        {
            printf("Too big\n");
        }
        else if (temp < x)
        {
            printf("Too small\n");
        }
        scanf_s("%d", &temp);

        if (i > 6)
        {
            printf("Game Over!");
            goto finish;
        }
    }
    if (temp = x)
    {
        printf("Lucky You!");
    }

finish:return 0;
}