#include <stdio.h>

void main(void)
{
    float PRE,NPR;
    printf("ingrese el precio del producto: ");
    scanf("%f",&PRE);
    if (PRE >= 1500)
    {
        NPR=PRE *1.11;
        printf("\nEL nuevo precio del producto es: %7.2f",NPR);

    }
}
