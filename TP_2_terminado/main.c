#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    EPersona personas[20];
    char seguir='s';
    int opcion=0;
    int libre;

     inicializarNegPersonas(personas,20);

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
               libre=BuscarLibre(personas,20);
               if(libre>=0)
               {
               printf("\nLegajo %d\n",libre);
               }
               if(libre==-1)
                 {
                    printf("Todo esta lleno, para ingresar un nuevo dato por davor borre otro");
                 }
                 else
                 {
                     AgregarPersona(personas,libre);
                 }
                break;
            case 2:
                BorrarPersona(personas,20);
                break;
            case 3:
                system("cls");
                ImprimirlistaOrdenada(personas,20);
                system("pause");
                break;
            case 4:
                imprimirGrafico(personas,20);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("Error solo ingrese numeros del 1 al 5");
        }
      }

    return 0;
}

