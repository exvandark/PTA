#include <stdio.h>

int main()
{
    int money;
    scanf_s("%d", &money);

    int x=0, y=0, z=0;

    for (z = 0;; z++)
    {
        if (x * 5 + y * 2 + z == money)
        {
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d", x, y, z, x + y + z);
            goto finish;
        }
        for (y = 0;; y++)
        {
           
            if (x * 5 + y * 2 + z > money)
            {
                y = y - 1;
                break;
            }
            
            if (x * 5 + y * 2 + z == money)
            {
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d", x, y, z, x + y + z);
                goto finish;
            }
           
                for (x = 0;; x++)
                {
                    if (x * 5 + y * 2 + z > money)
                    {
                        x = x - 1;
                        break;
                    }

                    if (x * 5 + y * 2 + z == money)
                    {
                        printf("fen5:%d, fen2:%d, fen1:%d, total:%d", x, y, z, x + y + z);
                        goto finish;
                    }
                }
            
        }
    }

finish:return 0;

}