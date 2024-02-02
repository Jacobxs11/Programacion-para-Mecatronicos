#include <stdio.h>

void main(void)

{
    float PRE,NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f",&PRE);
    if(PRE <= 1500)
    NPR= PRE * 1.11;
    else
    NPR= PRE * 1.08;
    printf("\nEl nuevo precio del producto es: %8.2f",NPR);

}
