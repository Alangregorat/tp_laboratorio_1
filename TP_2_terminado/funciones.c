#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/** \brief Recibe la estructura, el tamaño de la estructura e inicializa todo en -1.
 *
 * \param
 * \param
 * \return
 *
 */

void inicializarNegPersonas(EPersona personas[],int tamanio)
{
    for(int i=0;i<tamanio;i++)
    {
        personas[i].estado=-1;
        personas[i].dni=-1;
        personas[i].edad=-1;
        strcpy(personas[i].nombre,"");
    }
}

/** \brief Recibe la estructura, el tamaño de la estructura
 *  y devuelve la primera posicion que encuentre con -1 en .estado.
 *
 * \param indice va a ser el indice que devuelva.
 * \param
 * \return retorna el primer indice que encuentre con -1
 *
 */


int BuscarLibre(EPersona personas[],int tamanio)
{
    int indice=-1;
       for(int i=0;i<tamanio;i++)
       {
           if(personas[i].estado==-1)
           {
               indice=i;
               break;
           }
       }
    return indice;
}

/** \brief Recibe la estructura y el indice donde va a guardar los datos
 * en cada uno de los puntos de la estructura y cambia el estado para que deje de ser -1.
 *
 * \param
 * \param
 * \return
 *
 */

void AgregarPersona(EPersona personas[],int indice)
{
    printf("ingrese el nombre de la persona: ");
    fflush(stdin);
    gets(personas[indice].nombre);

    printf("ingrese la edad de la persona: ");
    fflush(stdin);
    scanf("%d",&personas[indice].edad);

    printf("ingrese el dni de la persona: ");
    fflush(stdin);
    scanf("%ld",&personas[indice].dni);

    personas[indice].estado=215;
}

/** \brief Le dice al usuario que ingrese un numero, lo toma, recorre todos los datos
 * para encontrar si hay una considencia y pone todo en -1 y le dice al
 * usuario que fue borrado con exito, si no encuentra considencia le dice que no existe ese dni.
 * \param aux es donde se va a guardar el dni.
 * \param
 * \return
 *
 */

void BorrarPersona(EPersona personas[],int tamanio)
{
    long int aux;

    printf("Ingrese el dni de la persona que desea borrar\n");

     scanf("%ld",&aux);
     for(int i=0;i<tamanio;i++)
     {
     if(aux==personas[i].dni)
      {
         personas[i].dni=-1;
         personas[i].edad=-1;
         strcpy(personas[i].nombre,"");
         personas[i].estado=-1;
         printf("Dni borrado");
         break;
      }
      else
      {
         printf("Error el dni ingresado no le pertenece a ninguna persona\n");
         break;
      }
     }
}

/** \brief recibe la estructura y el tamaño,recorre para si fueron ingresado aunque sea una personas
 * si no se encontraron se lo informa al usuario,ordena por nombre y lo muestra.
 * \param
 * \param
 * \return
 *
 */


void ImprimirlistaOrdenada(EPersona personas[],int tamanio)
{
    EPersona auxpersona;
    int i,j;

    for(i=0;i<tamanio-1;i++)
    {
        if(personas[i].estado==-1)
        {
            printf("No se ingresaron personas\n");
        }
        for(i=j+1;j<tamanio;j++)
        {
           if(personas[i].nombre>personas[j].nombre)
            {
                auxpersona=personas[i];
                personas[i]=personas[j];
                personas[j]=auxpersona;

            }
        }
    }
  for(int i=0;i<tamanio;i++)
  {
      if(personas[i].estado!=-1)
      {
      printf("%s-%d-%ld\n",personas[i].nombre,personas[i].edad,personas[i].dni);
      }
  }
}

/** \brief recibe la estructura y su tamaño, un contador para cada una de las especificaciones
 * de edad y segun cuantas veces fueron ingresados los ordena en forma grafica.
 * \param hasta18 es un contador de cuantas veces se ingreso alguien con la edad de 0 a 18.
 * \param de19a35 es un contador de cuantas veces se ingreso alguien con la edad de 19 a 35.
 * \param mayorDe35 es un contador de cuantas veces se ingreso alguien con la edad de mas de 36.
 * \param mayor toma el dato de cual fue el contador mas alto
 * \return
 *
 */


void imprimirGrafico(EPersona personas[],int tamanio)
{
    int i;
    int hasta18=0;
    int de19a35=0;
    int mayorDe35=0;
    int flag=0;
    int mayor;

   for(i=0;i<tamanio;i++)
    {
      if(personas[i].edad>0 && personas[i].edad<=18)
      {
          hasta18++;
      }

         if(personas[i].edad>18 && personas[i].edad<=35)
      {
          de19a35++;
      }

         if(personas[i].edad>35)
      {
         mayorDe35++;
      }
    }
    if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
        {
        mayor = hasta18;
        }
    else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

}

