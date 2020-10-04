#include<stdio.h>
int main()
{
    int NUMBER,Hours;
    float amount,SALARY;
    scanf("%d%d",&NUMBER,&Hours);
    scanf("%f",&amount);
   /* H=H*30;
    SALARY=amount*24;*/
    SALARY=amount*Hours;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;

}
