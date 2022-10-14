#include <stdio.h>

int main()
{
    double a[5] = { 0,3,2.5,4.0,3.5 };

    int x;
    int temp = 0;



    printf("[1] crisps\n"
        "[2] popcorn\n"
        "[3] chocolate\n"
        "[4] cola\n"
        "[0] exit\n");

    for (int i = 0; i < 6; i++)
    {
       x = 0; 
       scanf_s("%d", &x);
       if (i > 4 || x == 0)//优先走i>4||x==0,这一手贼细！

        {
           printf("Thanks");
           break;
        }
        else if (x > 0 && x < 5 )
        {
           printf("price = %.1f\n", a[x]);
        }
        else if (x >= 4)
        {
            printf("price = 0.0\n");
        }
        x = 0;
        
    }
    return 0;
}