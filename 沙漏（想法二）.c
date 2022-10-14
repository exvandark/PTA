#include <stdio.h>
#include <math.h>
int main() {
    int i, j, z, n, n1, n2;
    char ch;
    int amount, y;
    scanf_s("%d %c", &n, &ch);
    n1 = sqrt((n + 1) / 2);
    n2 = 2 * n1 - 1;
    for (i = 1; i <= n1 * 2 - 1; i++) {
        if (i <= n1) {
            for (j = 0; j < i - 1; j++) {
                printf(" ");
            }
            for (z = 1; z <= n2 - i * 2 + 2; z++) {
                printf("%c", ch);
            }
        }
        else {
            for (j = n2 - i - 1; j >= 0; j--) {
                printf(" ");
            }
            for (z = 1; z <= 2 * i - n2; z++) {
                printf("%c", ch);
            }
        }
        printf("\n");
    }
    y = pow(n1, 2);
    amount = (n + 1) % (2 * y);
    printf("%d\n", amount);
}