#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d%d",&a,&b,&s);

    int value;
    value=((a+b+(abs(a-b)))/2);
    printf("%d eh o maior\n",value);
    return 0;
}
