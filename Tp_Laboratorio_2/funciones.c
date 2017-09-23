#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 20

int altaElemento(EPersona lista[]){

    int i;


    for(i=0;i<CANT;i++){

            if(lista[i].estado==0){


        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]",lista[i].nombre);

        printf("Ingrese D.N.I: ");
        scanf("%d",&lista[i].dni);

        printf("Ingrese edad: ");
        scanf("%d",&lista[i].edad);

        lista[i].estado=1;

        break;


            }

    }

}


int iniciarElementos(EPersona lista[]){


int z;

for(z=0;z<CANT;z++){

    lista[z].estado=0;


}


}

int borrarElemento(EPersona lista[]){

    EPersona aux;
    int i;


    printf("Ingrese su D.N.I: ");
    scanf("%d",&aux.dni);

    for(i=0; i<CANT; i++)
    {

        if(aux.dni == lista[i].dni)
        {

            lista[i].estado=0;
            printf("El Elemento fue ELIMINADO\n");
            break;
        }
        else
        {
            printf("No se encontro el D.N.I\n");
            break;
        }

    }





}


int ordenarElementos(EPersona lista[]){

    EPersona temp;
    int i,j;


     for (i=1; i<CANT; i++){
          for(j=0;j<CANT-1; j++){
               if(strcasecmp(lista[j].nombre , lista[j+1].nombre)>0){
                    temp = lista[i];
                    lista[i] = lista[j];
                    lista[j] = temp;}
                                }
     }

     for(j=0;j<CANT;j++){

        if (lista[j].estado == 1)
        {
            printf("NOMBRE: %s \tDNI: %ld \tEDAD: %d\n",lista[j].nombre,lista[j].dni,lista[j].edad);
        }
     }


}


int graficarElementos(EPersona lista[]){




    int buscar = 0, i,menor = 0, medio = 0, mayor = 0, flag=0, mayor2;
    while(buscar < CANT)
    {
        if (lista[buscar].edad < 19 && lista[buscar].estado == 1)
        {
            menor++;
        }
        else if (lista[buscar].edad >18 && lista[buscar].edad < 36 && lista[buscar].estado == 1)
        {
                medio++;
        }
        else if (lista[buscar].edad > 35 && lista[buscar].estado == 1)
        {
            mayor++;
        }
        buscar++;
    }
    if (menor>= medio && menor >= mayor)
    {
        mayor2 = menor;
    }
    else
    {
        if(medio >= menor && medio >= mayor)
        {
            mayor2 = medio;
        }
        else{
        mayor2 = mayor;
        }
    }

    for(i=mayor2; i>0; i--)
    {
        if(i<10)
        {
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= menor)
        {
            printf("*");
        }
        if(i<= medio)
        {
            flag=1;
            printf("\t*");
        }
        if(i<= mayor)
        {
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        printf("\n");


    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n", menor, medio, mayor);


}
