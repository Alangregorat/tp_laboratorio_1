#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    int cant=0;
    int flag=0;
    EMovie* peliculas;
    EMovie* auxP;

    peliculas=(EMovie*)malloc(sizeof(EMovie)*cant+1);
    //peliculas=(EMovie*)realloc(sizeof(EMovie)*cant+1) despues del primero y con cant++ es e indice

      if(peliculas==NULL)
      {
          printf("Error, memoria insuficiente");
          exit(1);
      }
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                 system("cls");
                cant++;
                if(flag==0)
                {
                    peliculas=(EMovie*)malloc(cant*sizeof(EMovie));
                    if(peliculas==NULL)
                    {
                        printf("No se encontro memoria\n");
                        exit(1);
                    }
                    flag=1;
                }
                else
                {
                    auxP=(EMovie*)realloc(peliculas, cant*sizeof(EMovie));
                    if(peliculas==NULL)
                    {
                        printf("No se encontro memoria\n");
                        exit(1);
                    }
                    peliculas=auxP;
                }
                AltaPelicula(peliculas, cant);

                break;
            case 2:
                  if(peliculas->estado==215)
                    {
                   BorrarPelicula(peliculas,cant);
                    }
                  if(flag==0)
                    printf("Aun no se han ingresado peliculas\n");

                break;

            case 3:
                if(peliculas->estado==215)
                    {
                ModificarPelicula(peliculas,cant);
                     }
                     if(flag==0)
                    printf("Aun no se han ingresado peliculas\n");
               break;
            case 4:
             if(peliculas->estado==215)
                {
               GenerarPagina(peliculas,cant);
                }
                if(flag==0)
                printf("Aun no se han ingresado peliculas\n");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
  free(peliculas);
    return 0;
}
