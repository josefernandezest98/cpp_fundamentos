#include "Libro.h"
#include "iostream"
#include "cstring"


void crearLibro(tLibro &l, char ISBN[],char titulo[],int anio)
{
    strcpy(l.ISBN,ISBN);
    strcpy(l.titulo,titulo);
    l.anio=anio;
}
void modificarAnio(tLibro &l,int nuevoAnio)
{
    l.anio=nuevoAnio;
}
void obtenerTitulo(tLibro l,char titulo[])
{
    strcpy(titulo,l,titulo);
}
void obtenerAnio(tLibro l, int &anio)
{
    anio=l.anio;
}
void obtenerISBN(tLibro l, char ISBN[])
{
    strcpy(ISBN,l.ISBN);
}
