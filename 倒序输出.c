#include <stdio.h>

int main()
{
    int ch,x;
    scanf_s("%d", &ch);

    if (ch != 0)
    {
        for (int i=1; i <= ch;i*10)
        {
        x = ch % (i*10);

        printf("%d", x);
        ch = ch / 10;

        }

    }
    else if (ch == 0)
    {
        printf("0");
    }
    
}