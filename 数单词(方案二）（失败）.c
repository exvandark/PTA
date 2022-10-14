#include <stdio.h>

int main()
{
    char x1 ='0', x2='0';
    int z = 0;

    for (int i=0; x1 != '\n' && x2 != '\n';i++)
    {
        if (i == 0 && x1 != ' ')
        {
            z += 1;
        }
        x1 = getchar();
        if (x1 == '\n')
        {
            goto finish;
        }
        x2 = getchar();
        if (x2 == '\n')
        {
            goto finish;
        }

        if (x1 == ' ' && x2 != ' ')
        {
            z += 1;
        }


    }

finish:printf("%d", z);
}