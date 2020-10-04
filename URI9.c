#include <stdio.h>
int main()
{
    int Name;
    float value,salary,TOTAL;

char name[20];
printf("Enter name: ");
scanf("%s",&Name);
scanf("%f %f",&value,&salary);
value=((value*15)/100);
TOTAL = (salary+value);
printf("TOTAL = R$ %.2f\n",TOTAL);
return 0;
}
