#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    EPersona programa[50];
    iniciarElementos(programa);
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:altaElemento(programa);
                break;
            case 2:borrarElemento(programa);
                break;
            case 3:ordenarElementos(programa);
                break;
            case 4:graficarElementos(programa);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
