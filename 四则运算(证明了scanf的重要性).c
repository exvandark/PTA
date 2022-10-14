#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
    int  x, z;
    char y;

    scanf("%d %c %d", &x, &y, &z);

    if (y == '+')
    {
        printf("%d", x + z);
    }
    else if (y == '-')
    {
        printf("%d", x - z);
    }
    else if (y == '*')
    {
        printf("%d", x * z);
    }
    else if (y == '/')
    {
        printf("%d", x / z);
    }
    else if (y == '%')
    {
        printf("%d", x % z);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}