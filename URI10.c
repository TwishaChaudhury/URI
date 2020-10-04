#include<stdio.h>
int main()
{
    int code1,number1,code2,number2;
    double total_expense,price1,price2;
    scanf("%d %d %lf",&code1,&number1,&price1);
    scanf("%d %d %lf",&code2,&number2,&price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", ((price1 * number1) + (price2 * number2)));
    return 0;
}
