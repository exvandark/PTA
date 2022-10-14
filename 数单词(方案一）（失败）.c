#include <stdio.h>

int main()
{
    char x='1', y='1';
    int z = 0;

    for (int i = 0; x != '\n'; i++)
    {
        x = getchar();

        if (i == 1)
        {

        }
        if (x != ' '&&x!='\n')
        {
            z += 1;
            for (int j = 0; y != ' '&&y!='\n'; j++)
            {
                y = getchar();
            }

        }
        else if (x == ' ')
        {
            goto finish;
        }
        if (y == '\n'||x=='\n')
        {
            goto finish;
        }
                y = '0';
                x = '0';
    }

    finish: printf("%d", z);


}