#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    contador = 1;
//while(contador <=100)

for(contador =1;contador <=100;contador++)
{
        if(contador == 50)
    {
        printf("\nValor de contador=: %d",contador);
}
else if(contador == 60)
{
  printf("\nValor de contador=: %d",contador);
}
else if(contador == 70)
{
  printf("\nValor de contador=: %d",contador);
}
    else
    {
    printf("\n %d No me interesa",contador);
    }
}
printf("\n\nTermine");
}

