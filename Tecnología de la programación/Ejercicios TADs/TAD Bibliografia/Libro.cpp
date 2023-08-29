#include "Libro.h"
#include "iostream"
#include "cstring"

using namespace std;


void crearLibro(char titulo[],char ISBN[],char autor[],float precio,libro &L)
{
    strcpy(L.titulo,titulo);
    strcpy(L.ISBN,ISBN);
    strcpy(L.autor,autor);
    L.precio=precio;
}

void tituloL(libro L,char titulo[])
{
    strcpy(titulo,L.titulo);
}

void autorL(libro L,char autor[])
{
    strcpy(autor,L.autor);
}

void ISBNL(libro L,char ISBN[])
{
    strcpy(ISBN,L.ISBN);
}

float precioL(libro L)
{
    return(L.precio);
}

void copiaL(libro L1,libro &L2)
{
    strcpy(L2.titulo,L1.titulo);
    strcpy(L2.ISBN,L1.ISBN);
    strcpy(L2.autor,L1.autor);
    L2.precio=L1.precio;
}
