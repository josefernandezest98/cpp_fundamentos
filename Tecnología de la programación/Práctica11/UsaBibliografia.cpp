#include "Libro.h"
#include "Bibliografia.h"
#include "UsaLibro.h"
#include "UsaBibliografia.h"
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

//IMPLEMENTACION de las operaciones auxiliares del TAD Bibliografia.

void copiarBibliografia(tbibliografia b,tbibliografia &bCopia)
/* {PRE:}
{POST:realiza una copia de los libros de la bibliografia b en la bibliografia bCopia}*/
{
    crearBiliografia(bCopia);       //iniciamos bCopia como bibliografia.

    tlibro l;
    int cont=0;
    while(cont<numeroLibros(b))
    {
        extraerPosicion(b,cont,l);  //extraemos los datos del libro l,que esta en la posicion cont de la bibliografia b.
        anadirLibro(bCopia,l);
        cont=cont+1;
    }
}
void mostrarBibliografiaISBN(tbibliografia b)
/* {PRE:}
{POST:muestra por pantalla los libros de la bibliografia b por orden creciente de su ISBN}*/
{
    tlibro l;
    int cont=0;

    while(cont<numeroLibros(b))
    {
        extraerPosicion(b,cont,l);  //extraemos los datos del libro l,que esta en la posicion cont de la bibliografia b.
        mostrarLibro(l);
        cont=cont+1;
    }
}
void mostrarBibliografiaAnio(tbibliografia b)
/* {PRE:}
{POST:muestra por pantalla los libros de la bibliografia b por orden decreciente de anio de publicacion}*/
{
    tlibro l;
    tbibliografia aux;
    copiarBibliografia(b,aux);      //para que no se me pierda la bibliografia b,realizo una copia de ella en aux.
    int cont=0;
    char ISBN[10];
    while(cont<numeroLibros(b))
    {
        masNuevo(aux,l);            //sacamos el libro más nuevo de aux.
        mostrarLibro(l);
        obtenerISBN(l,ISBN);        //obtenemos el ISBN para poder eliminarlo(si no lo eliminamos,saldria todo el tiempo ese libro).
        eliminarLibro(aux,ISBN);
        cont=cont+1;
    }
}
