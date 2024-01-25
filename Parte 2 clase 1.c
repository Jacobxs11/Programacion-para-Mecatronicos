#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 0;
    int menu = 5;

    while(menu)
    {
        printf("\nEscribe tu edad o -5 para salir:");

        scanf("%d",&edad);

        if(edad ==-5)
        {
           menu =0;
        }
        else
        {
            if(edad > 0 && edad < 115)
            {
                if(edad < 18)
                {
                    printf("\nUsted no puede beber, ruedeeee!\n");
                }
                else
                {
                    printf("\nFelicidad eres mayor de edad,ahora a beber!!!!!!\n");
                }
            }
            else
            {
                printf("\n usted esta muerto JABLADOR!!!\n");
            }
        }
    }
return 0;
}
