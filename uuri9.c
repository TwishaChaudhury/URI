#include<stdio.h>
int main()
{
    int Name;
    float value,salary,TOTAL;
    char name;
scanf("%s",&Name);
scanf("%f %f",&salary,&value);
/*value=((value*15)/100);*/
TOTAL= (salary + ((value*15)/100));
printf("TOTAL = R$ %.2f\n",TOTAL);
return 0;
}

