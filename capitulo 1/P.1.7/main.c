#include <stdio.h>

void main(void)
{
    float PIE,LIB,MET,KIL;
    printf("ingrese los datos del objeto: ");
    scanf("%f %f", &PIE, &LIB);
    MET= PIE *0.09290;
    KIL= LIB * 0.45359;
    printf("\nDatos del objeto \nlongitud: %5.2f \t peso: %5.2f", MET, KIL);
}


