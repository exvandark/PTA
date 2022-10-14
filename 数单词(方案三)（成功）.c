#include <stdio.h>

int main()
{
    char x = '1';
    int z = 0,t=0;

    for (; x != '\n';)
    {
        x = getchar();
        if (t == 0&&x!=' '&&x!='\n')
        {
            z += 1;
            t += 1;
        }
        else if (x == ' ')
        {
            t = 0;
        }

    }
    printf("%d", z);

    return 0;
}