#include <stdio.h>
#include <math.h>

int IsSquare(int n)
{
    int x;
    for (int i = 0; i < 100; i++)
    {
        
        if (i * i == n)
        {
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }

    return x;
}

int IsSquare(int n);

int main()
{
    int n;

    scanf_s("%d", &n);
    if (IsSquare(n)) printf("YES\n");
    else printf("NO\n");

    return 0;
}