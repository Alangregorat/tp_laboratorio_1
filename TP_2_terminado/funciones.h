#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {
    char nombre[50];
    int edad;
    int estado;
    long int dni;
}EPersona;

void inicializarNegPersonas(EPersona personas[],int tamanio);
int BuscarLibre(EPersona personas[],int tamanio);
void AgregarPersona(EPersona personas[],int indice);
void BorrarPersona(EPersona personas[],int tamanio);
void ImprimirlistaOrdenada(EPersona personas[],int tamanio);
void imprimirGrafico(EPersona personas[],int tamanio);

#endif // FUNCIONES_H_INCLUDED
