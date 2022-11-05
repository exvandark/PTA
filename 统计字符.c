#include <stdio.h>

int main()
{
    char x='0';
    int blank = 0, digit = 0, other = 0;



    for (; x != '\n';)
    {
        x = getchar();
        if (x ==' ')
        {
            blank += 1;
        }
        else if (x>='0'&&x<='9')
        {
            digit += 1;
        }
        else
        {
            other += 1;
        }
    }

    printf("blank = %d,digit = %d,other = %d", blank, digit, other);

}