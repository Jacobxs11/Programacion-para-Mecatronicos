#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad=0;
    printf("\nescribe tu edad:");
    scanf("%d",&edad);

    if(edad > 0 && edad < 115)
    {
      if (edad < 18)
      {
        printf("\nNo puedes beber, bueno no legalmente \n");
      }
      else
      {
          printf("\nFelicidades ya eres mayor de edad, ahora vamos a beber\n");
      }
        }
        else
        {
            printf("\nUsted esta muerto JABLADOR!!!!!\n");
        }
    return 0;
}
