#include "Libro.h"
#include "Bibliografia.h"
#include "UsaLibro.h"
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

//IMPLEMENTACION (dinamica) del TAD Bibliografia.

void crearBiliografia(tbibliografia &b)
/* {PRE:}
{POST:inicia b como una bibliografia sin libros}*/
{
    b.primero=NULL;
    b.tamanio=0;
}

void anadirLibro(tbibliografia &b,tlibro l)
/* {PRE:}
{POST:anade en orden alfabetico,basandose en el ISBN, el libro l a la bibliografia b}*/
{
    Nodo *nuevo=new(Nodo);
    Nodo *aux;
    Nodo *ant;

    char ISBNlibro[10];
    char ISBNaux[10];       //este sirve para guardar el ISBN del libro que hay en el nodo auxiliar, para poder compararlo con el que me dan.

    obtenerISBN(l,ISBNlibro);
    if(nuevo!=NULL)
    {
        aux=b.primero;
        (*nuevo).dato=l;    //metes los datos del libro en el nodo nuevo.
        if(b.primero==NULL) //en el caso en que la lista está vacía y añades al principio.
        {
            (*nuevo).sig=NULL;       //haces que nuevo apunte a NULL.
             b.primero=nuevo;        //b.primero apunta a lo que apunta nuevo.
        }else{
                obtenerISBN((*aux).dato,ISBNaux);  //obtengo el ISBN del puntero auxiliar para poder compararlo con el del libro que quiero añadir.

                while ((aux!=NULL)&&(strcmp(ISBNaux,ISBNlibro)<0))  //si aux no es el final y el ISBN del puntero auxiliar es menor que el ISBN del libro que quiero meter entonces AVANZO.
                {
                    ant=aux;                //ant pasa a ser aux.
                    aux=(*aux).sig;         //aux pasa a ser el nodo al que apuntaba.
                    if (aux!=NULL) obtenerISBN((*aux).dato,ISBNaux);  //compuruebo que aux no es NULL para poder seguir obteniendo el ISBN de el.
                }
                //aqui llego a donde quiero meter el libro para que se mantenga ordenado por ISBN y lo metemos:
                (*nuevo).sig=aux;       //haces que (*nuevo).sig apunte a lo que apunta aux.

                if(aux==b.primero) //en el caso de que añada al principio y la lista tenga más libros.
                {
                    b.primero=nuevo;    //b.primero apunta a lo que apunta nuevo. (POSICIÓN 1)
                }else{
                        (*ant).sig=nuevo;   //si no, (*ant).sig apunta a lo que apunta nuevo. (POSICIÓN 2)
                    }
            }
        b.tamanio=b.tamanio+1;
    }
}

void eliminarLibro(tbibliografia &b, char ISBN[])
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:elimina el libro cuyo ISBN es ISBN de la bibliografia b}*/
{
    Nodo *aux;
    Nodo *ant;

    char ISBNaux[10];    //este sirve para guardar el ISBN del libro que hay en el nodo auxiliar, para poder compararlo con el que me dan.

    aux=b.primero;

    obtenerISBN((*aux).dato,ISBNaux);
    while ((aux!=NULL)&&(strcmp(ISBNaux,ISBN)<0))  //si aux no es el final y el ISBN del auxiliar es menor que el ISBN del libro que quiero eliminar entonces AVANZO.
    {
        ant=aux;                //ant pasa a ser aux.
        aux=(*aux).sig;         //aux pasa a ser el nodo al que apuntaba.
        if (aux!=NULL)  obtenerISBN((*aux).dato,ISBNaux);       //compuruebo que aux no es NULL para poder seguir obteniendo el ISBN de el.
    }

    if(aux==b.primero) //en el caso de que elimine al principio y la lista tenga más libros.
    {
        b.primero=(*b.primero).sig;    //b.primero apunta a lo que apunta (*b.primero).sig. (POSICIÓN 1)
    }else{
            (*ant).sig=(*aux).sig;   //si no, (*ant).sig apunta a lo que apunta (*aux).sig. (POSICIÓN 2)
        }
    delete(aux);
    b.tamanio=b.tamanio-1;
}

void extraerDatosLibro(tbibliografia b, char ISBN[], tlibro &l)
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:devuelve de la bibliografia b los datos del libro cuyo ISBN es ISBN}*/
{
    Nodo *aux;
    aux=b.primero;
    char ISBNaux[10];       //este sirve para guardar el ISBN del libro que hay en el nodo auxiliar, para poder compararlo con el que me dan.
    bool encontrado=false;

    while((aux!=NULL)&&(encontrado==false))
    {
        obtenerISBN((*aux).dato,ISBNaux);
        //obtiene el ISBN del libro que hay en el nodo auxiliar, pues (*aux).dato es de tipo tlibro y tiene dentro el ISBN,el titulo y el año, pues es un registro.

        if(strcmp(ISBNaux,ISBN)==0)     //comparamos el ISBNaux del (*aux).dato con el que nos dan.
        {
            encontrado=true;    //si coincide, es que lo hemos encontrado.
        }else{
                aux=(*aux).sig; //si no coincide, entonces pasamos al siguiente nodo, es decir que aux ahora apunta a lo que apunta (*aux).sig.
            }
    }

    if(encontrado==false)   //si no lo encontramos el ISBN del libro...
    {
        cout<<"El libro no está registrado dentro de la bibliografia"<<endl;
    }else{
            copiarLibro((*aux).dato,l);  //aqui lo copiamos del nodo en el que esta y asi obtenemos los datos.
        }
}

void extraerPosicion(tbibliografia b,int posicion,tlibro &l)
/* {PRE:pos es un entero menor que el numero de libros de la bibliografia b}
{POST:devuelve de la bibliografia b los datos del libro que ocupa la posicion posicion, empezando a contar en 0,en la bibliografia}*/
{
    Nodo *aux;
    int cont=0;

    aux=b.primero;
    while(cont<posicion)  //mientras que el contador sea menor que la posicion que nos dan...
    {
        cont=cont+1;       //aumentamos el contador
        aux=(*aux).sig;    //y AVANZO, aux apunta a lo que apunta (*aux).sig.
    }
    copiarLibro((*aux).dato,l);     //se supone que aqui el contador es igual a la posicion,por lo tanto sacamos los datos del nodo auxiliar.
}

bool existeLibro(tbibliografia b,char ISBN[])
/* {PRE:}
{POST:devuelve true si en la bibliografia b hay un libro cuyo ISBN es ISBN, y devuelve false en caso contrario}*/
{
    //char ISBN[] es el ISBN que me dan para buscar el libro
    Nodo *aux;
    aux=b.primero;
    char ISBNaux[10];       //este sirve para guardar el ISBN del libro que hay en el nodo auxiliar, para poder compararlo con el que me dan.
    bool encontrado=false;

    while((aux!=NULL)&&(encontrado==false))
    {
        obtenerISBN((*aux).dato,ISBNaux);

        if(strcmp(ISBNaux,ISBN)==0)     //comparamos el ISBNaux del (*aux).dato con el que nos dan.
        {
            encontrado=true;    //si coincide, es que lo hemos encontrado.
        }else{
                aux=(*aux).sig; //si no coincide, entonces pasamos al siguiente nodo, es decir que aux ahora apunta a lo que apunta (*aux).sig.
            }
    }
    return encontrado;
}

void modificarAnioLibro(tbibliografia &b, char ISBN[], float anio)
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:modifica el anio de publicacion del libro de la bibliografia b cuyo ISBN es ISBN poniendo como nuevo anio de publicacion anio}*/
{
    Nodo *aux;
    aux=b.primero;
    char ISBNaux[10];       //este sirve para guardar el ISBN del libro que hay en el nodo auxiliar, para poder compararlo con el que me dan.
    bool encontrado=false;


    while((aux!=NULL)&&(encontrado==false))
    {
        obtenerISBN((*aux).dato,ISBNaux);

        if(strcmp(ISBNaux,ISBN)==0)     //comparamos el ISBNaux del (*aux).dato con el que nos dan.
        {
            encontrado=true;    //si coincide, es que lo hemos encontrado.
            modificarAnio((*aux).dato,anio);
        }else{
                aux=(*aux).sig; //si no coincide, entonces pasamos al siguiente nodo, es decir que aux ahora apunta a lo que apunta (*aux).sig.
            }
    }
}

void masNuevo(tbibliografia b, tlibro &l)
/* {PRE:la bibliografia b no debe estar vacia}
{POST:l es el libro cuyo anio de publicacion es el mayor de la bibliografia b. En caso de haber varios libros con el mismo anio de publicacion, solo devuelve uno}*/
{
    Nodo *aux;
    aux=b.primero;

    tlibro libroMasNuevo;           //libro auxiliar que voy a usar para comparar.

    int anioAux;                            //anio del libro que esta en el puntero auxiliar.
    obtenerAnio((*aux).dato,anioAux);       //obtenemos el anio del libro que esta en el puntero auxiliar.

    copiarLibro((*aux).dato,libroMasNuevo);          //copio el libro del puntero para asi poder comparar

    int anioLibroMasNuevo;                                  //anio del libro que uso para comparar.
    obtenerAnio(libroMasNuevo,anioLibroMasNuevo);           //obtenemos el anio del libro que queremos comparar.

    while(aux!=NULL)
    {
        if(anioAux>anioLibroMasNuevo)                       //si el anio del puntero auxiliar es mayor que la de mi libro, entonces...
        {
            copiarLibro((*aux).dato,libroMasNuevo);             //copio el anio del puntero auxiliar a mi variable que es el libro más nuevo.
            obtenerAnio(libroMasNuevo,anioLibroMasNuevo);       //y ahora el anio del libro más nuevo pasa a ser mi nueva variable que uso para comparar.
        }
        aux=(*aux).sig;            //pasamos al siguiente nodo, es decir que aux ahora apunta a lo que apunta (*aux).sig.
        if (aux!=NULL) obtenerAnio((*aux).dato,anioAux);
    }
    copiarLibro(libroMasNuevo,l);
}

bool bibliografiaSinLibros(tbibliografia b)
/* {PRE:}
{POST:devuelve true si la bibliografia b no tiene libros, y devuelve false en caso contrario}*/
{
    return(b.tamanio==0);
    /*if(b.tamanio==0)
     {
         return true;
     }else{
            return false;
        }*/
}

int numeroLibros(tbibliografia b)
/* {PRE:}
{POST:devuelve el numero de libros de la bibliografia b}*/
{
    return(b.tamanio);
}
