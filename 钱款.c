#include<stdio.h> 
#pragma warning(disable : 4996)

double balance;                /* ����ȫ�ֱ����������ֽ���� */
void income(double cash);
void expend(double cash);

int main(void)
{
    int choice;
    double cash;

    cash = 0;                        /* ��ʼ���=0 */
    scanf("%d", &choice);            /* ����������� */
    while (choice != 0) {             /*  ����������Ϊ0��ѭ������  */
        if (choice == 1 || choice == 2) {
            scanf("%lf", &cash);     /* �����ֽ� */
            if (choice == 1) {
                income(cash);        /* �������ã������ֽ����� */
            }
            else {
                expend(cash);        /* �������ã������ֽ�֧�� */
            }
            printf("balance:%.2f\n", balance);
        }
        scanf("%d", &choice);         /* ��������������� */
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