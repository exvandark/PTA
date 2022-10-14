#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
   
  int  n = 9;
    
       
        int N,temp1 = 1;
        int z = 0;
        scanf("%d", &N);
        getchar();
        int g;
        g = getchar();
        if (N == 0)
        {
            printf("0");
            goto finish;
        }
        N = N - temp1;
        temp1 = 3;
        for (; N >= temp1 * 2;)
        {
            N = N - temp1 * 2;
            temp1 += 2;
        }
        temp1 -= 2;
        int number = temp1;

        for (int i = 1; temp1 >= 1; i++)
        {

            for (int i = 0; i < z; i++)
            {
                printf(" ");
            }
            for (int x = 0; x < temp1; x = x + 1)
            {


                putchar(g);


            }
            z += 1;
            temp1 -= 2;
            if (number == 1)
            {
                goto finish1;
            }
            printf("\n");
           

        }
        z -= 2;
        for (int i = 3; i <= number; i = i + 2)
        {
            for (int x = z; x > 0; x--)
            {
                printf(" ");
            }

            for (int c = 0; c < i; c++)
            {
                putchar(g);
            }
            if (i != number)
            {
                printf("\n");
            }
            z -= 1;
        }

        finish1:;

        int w = N;
            printf("\n%d", w);
    finish:;
}