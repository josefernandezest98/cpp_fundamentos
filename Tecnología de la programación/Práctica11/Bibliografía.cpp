#include "Libro.h"
#include "UsaLibro.h"
#include "Bibliografía.h"
#include "iostream"
#include "cstring"


void crear(tBibliografia &b)
{
    b.primero=NULL;
    b.tamanio=0;
}
void anadir(tBibliografia &b, tLibro l)
{

}
void eliminar(tBibliografia &b,char ISBN{})
{

}
void extraer(tBibliografia b,char ISBN,tLibro &l)
{

}
void extraerPosicion(tBibliografia b,int pos, tLibro &l)
{

}
bool existe (tbibliografía b, char ISBN[])
{

}
void modificarAnioLibro(tBibliografia &b,char ISBN[],float anio)
{

}
void masNuevo(tBibliografia b,tLibro &l)
{

}
bool bibliografiaSinLibros(tBibliografia b)
{
    return(b.tamanio==0);
    /*if(b.tamanio==0)
     {
         return true;
     }else{
            return false;
        }*/
}
int nuemeroLibros(tBibliografia b)
{
    return(b.tamanio);
}
