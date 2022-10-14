#include<stdio.h> 
#pragma warning(disable : 4996)

double balance;                /* 定义全局变量，保存现金余额 */
void income(double cash);
void expend(double cash);

int main(void)
{
    int choice;
    double cash;

    cash = 0;                        /* 初始金额=0 */
    scanf("%d", &choice);            /* 输入操作类型 */
    while (choice != 0) {             /*  若输入类型为0，循环结束  */
        if (choice == 1 || choice == 2) {
            scanf("%lf", &cash);     /* 输入现金 */
            if (choice == 1) {
                income(cash);        /* 函数调用，计算现金收入 */
            }
            else {
                expend(cash);        /* 函数调用，计算现金支出 */
            }
            printf("balance:%.2f\n", balance);
        }
        scanf("%d", &choice);         /* 继续输入操作类型 */
    }

    return 0;
}
void income(double cash)
{
    scanf("%lf", &cash);
    balance = balance + cash;
    printf("balance:%0.2f\n", balance);
}
void expend(double cash)
{
    scanf("%lf", &cash);
    balance = balance - cash;
    printf("balance:0.2%f\n", balance);

}