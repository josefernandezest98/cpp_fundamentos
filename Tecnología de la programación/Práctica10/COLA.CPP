#include "Cola.h"
#include <iostream>


void iniciarCola(cola &c)
{
    c.primero=NULL;
    c.ultimo=NULL;
}

void anadir(cola &c, tElemento d)
{
    nodo *nuevo;
    nuevo= new (nodo); //reservar nodo
    if (nuevo != NULL)
    {
        (*nuevo).dato=d;
        (*nuevo).sig=NULL;
        if (c.primero==NULL)
        {
            c.primero=nuevo;
        }else
            {
                (*(c.ultimo)).sig=nuevo;
            }
        c.ultimo=nuevo; //Esto hace que el ultimo sea el ultimo
    }
}

bool  colaVacia(cola c)
{
    return(c.primero==NULL);
}

tElemento primero(cola c)
{
    return((*(c.primero)).dato);
}

void  eliminar(cola &c)
{
    nodo *aux;
    aux=c.primero;
    c.primero=(*(c.primero)).sig;
    delete(aux); //Liberar
    if (c.primero==NULL) //Por si acaso solo habia dos
    {
        c.ultimo=NULL;
    }
}
