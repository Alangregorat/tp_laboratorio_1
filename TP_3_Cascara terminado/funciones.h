#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int estado;
}EMovie;

void AltaPelicula(EMovie* Pelicula,int indice);
void BorrarPelicula(EMovie* Pelicula, int tam);
void ModificarPelicula(EMovie* Pelicula, int tam);
void GenerarPagina(EMovie* Pelicula, int tam);
