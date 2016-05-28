#include "funciones.h"


/** \brief Carga una pelicula en la estructura de peliculas
 *
 * \param EMovie datos donde se van a cargar
 * \param pelicula puntero que tiene la direccion de la estructura
 * \param indice direccion donde se va a guardar los datos al puntero
 * \return
 *
 */


void AltaPelicula(EMovie* Pelicula,int indice)
{
    printf("Ingrese titulo");
    fflush(stdin);
    gets((Pelicula+indice-1)->titulo);

    printf("Ingrese genero");
    fflush(stdin);
    gets((Pelicula+indice-1)->genero);


    printf("Ingrese la duracion");
    scanf("%d",&(Pelicula+indice-1)->duracion);

    printf("Ingrese La descripcion");
    fflush(stdin);
    gets((Pelicula+indice-1)->descripcion);

     printf("Ingrese El puntaje");
    scanf("%d",&(Pelicula+indice-1)->puntaje);

     printf("Ingrese el link de la imagen");
    fflush(stdin);
    gets((Pelicula+indice-1)->linkImagen);

    (Pelicula+indice-1)->estado=215;

}

/** \brief muestra la lista de peliculas, si la pelicula ingresada coincide con una que ya antes fue ingresada la borra
 *
 * \param Pelicula puntero que tiene la direccion
 * \param tam tamaño de peliculas que tiene que recorrer
 * \return
 *
 */


void BorrarPelicula(EMovie* Pelicula, int tam)
{
    int i;
    char resp[50];
    int flag=0;
    system("cls");
    printf("Peliculas disponible\n\n");

    for(i=0;i<tam;i++)
    {
        if((Pelicula+i)->estado==215)
        {
        printf("%s\n",(Pelicula+i)->titulo);
        }
    }

    printf("Ingrese el titulo de la pelicula que desea borrar:");
    fflush(stdin);
    gets(resp);

     for(i=0;i<tam;i++)
    {
        if(strcmp((Pelicula+i)->titulo,resp)==0)
        {
        (Pelicula+i)->estado=-1;
        printf("Pelicula borrada exitosamente");
        flag=1;
        }
    }
    if(flag==0)
    {
         printf("Error, No coincide con ninguna pelicula.");
    }

}

/** \brief modifica una pelicula ingresando el titulo, si no esta el titulo se lo informa al usuario
 *
 * \param Pelicula puntero que tiene la direccion
 * \param tam tamaño de peliculas que tiene que recorrer
 * \return
 *
 */


void ModificarPelicula(EMovie* Pelicula, int tam)
{
        int i;
    char resp[50];
    int flag=0;
    system("cls");
    printf("Peliculas disponible\n\n");

    for(i=0;i<tam;i++)
    {
        if((Pelicula+i)->estado==215)
        {
        printf("%s\n",(Pelicula+i)->titulo);
        }
    }

    printf("Ingrese el titulo de la pelicula que desea modificar:");
    fflush(stdin);
    gets(resp);

     for(i=0;i<tam;i++)
    {
        if(strcmp((Pelicula+i)->titulo,resp)==0)
        {

         printf("Ingrese genero");
         fflush(stdin);
         gets((Pelicula+i)->genero);

         printf("Ingrese la duracion");
         scanf("%d",&(Pelicula+i)->duracion);

         printf("Ingrese La descripcion");
         fflush(stdin);
         gets((Pelicula+i)->descripcion);

         printf("Ingrese El puntaje");
         scanf("%d",&(Pelicula+i)->puntaje);

         printf("Ingrese el link de la imagen");
         fflush(stdin);
         gets((Pelicula+i)->linkImagen);

          printf("Pelicula modificada exitosamente");
          flag=1;
        }
    }
    if(flag==0)
    {
         printf("Error, No coincide con ninguna pelicula.");
    }
}

/** \brief genera una pagina httml segun los datos ingresados de las peliculas anteriores
 *
 * \param Pelicula puntero que tiene la direccion
 * \param tam tamaño de peliculas que tiene que recorrer
 * \return
 *
 */


void GenerarPagina(EMovie* Pelicula, int tam)
{
    int i;
    FILE* f;
    f=fopen("fichero.html","w");
    if(f==NULL)
    {
        printf("no se pudo abrir");
        exit(1);
    }
    for(i=0;i<tam;i++)
    {
     fprintf(f,"<article class='col-md-4 article-intro'>");
     fprintf(f,"<a href='#'>");
     fprintf(f,"<img class='img-responsive img-rounded' src='%s''>",(Pelicula+i)->linkImagen);
     fprintf(f,"</a>");
     fprintf(f,"<h3>");
     fprintf(f,"<a href='#'>%s</a>",(Pelicula+i)->titulo);
     fprintf(f,"</h3>");
     fprintf(f,"<ul>");
     fprintf(f,"<li>Género:%s</li>",(Pelicula+i)->genero);
     fprintf(f,"<li>Puntaje:%d</li>",(Pelicula+i)->puntaje);
     fprintf(f,"<li>Puntaje:%d</li>",(Pelicula+i)->duracion);
     fprintf(f,"</ul>");
     fprintf(f,"<p>%s</p>",(Pelicula+i)->descripcion);
     fprintf(f,"</article>");
    }
    fclose(f);
    printf("Pagina generada con exito\n");
}

