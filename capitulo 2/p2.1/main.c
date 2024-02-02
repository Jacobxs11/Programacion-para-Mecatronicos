#include <stdio.h>

void main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumnno:");
    scanf("%f", &PRO);
    if(PRO>=0 && PRO <=10)
    {
    if (PRO >7)
    printf("\nAprobado");
    else
    printf("\nReprobado");
    }
else
{
printf("\nValor invalido");
    }
}



