#include <stdio.h>

void main(void)
{
int I,NUM,CUE=0;
int array[100];
for (I=0; I<100; I++)
{
printf("Ingrese el elemento %d del arreglo:", I+1);
scanf("%d", &array[I]);
}
printf("\n\nIngrese el numero que se va a buscar en el arreglo:");
scanf("%d", &NUM);
for (I=0; I<100; I++)
if (array[I]==NUM)
CUE++;
printf("\n\nEl %d se encuentra %d veces en el arreglo",NUM,CUE);
}
