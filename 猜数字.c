#include <stdio.h>

int main()
{
    int x, N, temp;
    scanf("%d%d", &x, &N);


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);

        if (temp > x)
        {
            printf("Too big\n");
        }
        else if (temp < x)
        {
            printf("Too small\n");
        }
        else if (temp == x && i == 0)
        {
            printf("Bingo!\n");
            break;
        }
        else if (temp == x && i < 3)
        {
            printf("Lucky You!");
            break;
        }
        else if (temp == x)
        {
            printf("Good Guess!\n");
            break;
        }
        else if (i == N - 1 || temp < 0)
        {
            printf("Game Over\n");
        }
    }

}