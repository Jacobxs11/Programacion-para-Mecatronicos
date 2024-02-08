#include <stdio.h>

void main(void)
{
int I,NUM;
long FAC;
printf("\nIngrese el numero:");
scanf("%f",&NUM);
if(NUM >=0)
{
FAC=1;
for( I=1; I<= NUM;I ++)
FAC=I;
printf("\El factorial de %d es %id",NUM,FAC);
}
else
printf("\nError en el dato ingreasdo");
}
