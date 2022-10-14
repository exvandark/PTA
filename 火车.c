#include <stdio.h>
#include <math.h>
int main()
{
    int starttime;
    int arrivetime;
    int min, hour;
    scanf("%d %d", &starttime, &arrivetime);

    min = arrivetime % 100 - starttime % 100;
    hour = arrivetime / 100 - starttime / 100;

    hour = fabs(hour);
    {
        min = min + 60;
        hour = hour - 1;
    }
    printf("%02d%02d", hour, min);

    return 0;
}