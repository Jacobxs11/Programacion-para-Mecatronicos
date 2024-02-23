#include <stdio.h>
//decidi hacer ciertas modificaciones al codigo como prueba para que salga de el cuadradado del numero en vez del cubo, pero solo se tendrian que cambiar ciertas cosas como por ejemplo la variable int, y en return seria i*i*i//
int cuadrado(void);
int I;
void main(void)
{
int CUA;
for(I=0;I<=25;I++)
{
CUA=cuadrado();
printf("\nEl  de %d es:%d",I,CUA);
}
}
int cuadrado(void)
{
return(I*I);
}
