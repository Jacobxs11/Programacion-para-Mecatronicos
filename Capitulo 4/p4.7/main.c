#include <stdio.h>

int f1 (int);
void main(void)
{
int I,K =4;
for (I=1; I<=3; I++)
{
printf("\n\nvalor de K antes de llamar a la funcion: %d", ++K);
printf("\nvalor de K después de llamar a la funcion: %d", f1(K));
}
}
int f1(int R)
{
R+=R;
return (R);
}
