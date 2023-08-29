#include "Libro.h"
#include "Bibliografia.h"
#include "iostream"
#include "cstring"

using namespace std;

void iniciarBib(bibliografia &B)
{
    B.p=NULL;
    B.tamanio=0;
}

void anadirLibroBib(bibliografia &B, libro L)
{
    char IsbnAux[10];
    char IsbnLibro[10];
    ISBNL(L,IsbnLibro);

    nodo *ant,*aux,*nuevo;

    nuevo=new(nodo);
    if(nuevo!=NULL)
    {
        aux=B.p;
        copiaL(L,(*nuevo).dato);
        (*nuevo).sig=NULL;

        if(aux==NULL)
        {
            B.p=nuevo;
        }else{

                ISBNL((*aux).dato,IsbnAux);
                while(aux!=NULL && strcmp(IsbnAux,IsbnLibro)<0)
                {
                    ant=aux;
                    aux=(*aux).sig;
                    if(aux!=NULL)
                    {
                        ISBNL((*aux).dato,IsbnAux);
                    }
                }
                if(aux==NULL)
                {
                    (*ant).sig=nuevo;
                }else{
                        (*ant).sig=nuevo;
                        (*nuevo).sig=aux;
                }
            }
            B.tamanio++;
    }
}

void eliminarLibroBib(bibliografia &B, char ISBN[])
{
    char IsbnAux[10];
    nodo *ant,*aux;

    aux=B.p;
    ISBNL((*aux).dato,IsbnAux);

    while(aux!=NULL && strcmp(IsbnAux,ISBN)<0)
    {
        ant=aux;
        aux=(*aux).sig;
        if(aux!=NULL)
        {
            ISBNL((*aux).dato,IsbnAux);
        }
    }
    if(aux==B.p)
    {
        B.p=(*B.p).sig;
    }else{
            (*ant).sig=(*aux).sig;
        }
    delete(aux);
    B.tamanio--;
}

int numLibros(bibliografia B)
{
    return(B.tamanio);

}

int posicionLibro(bibliografia B, char ISBN[])
{
    int posicion=0;
    char IsbnAux[10];
    bool encontrado=false;
    nodo *aux;

    aux=B.p;
    while(aux!=NULL && encontrado==false)
    {
        posicion++;
        ISBNL((*aux).dato,IsbnAux);
        if(strcmp(IsbnAux,ISBN)==0)
        {
            encontrado=true;
        }
        aux=(*aux).sig;
    }
    return(posicion);

}

libro libroEnPos(bibliografia B, int pos)
{
    int contador=0;
    libro L;
    nodo *aux;
    aux=B.p;
    while(aux!=NULL && contador<pos)
    {
        aux=(*aux).sig;
    }
    copiaL((*aux).dato,L);
    return(L);
}

void mostrarBib(bibliografia B)
{
    char titulo[50];
    char autor[30];

    nodo *aux;
    aux=B.p;
    while(aux!=NULL)
    {
        tituloL((*aux).dato,titulo);
        cout<<"Titulo: "<<titulo<<endl;
        autorL((*aux).dato,autor);
        cout<<"Autor: "<<titulo<<endl;
        cout<<"Precio: "<<precioL((*aux).dato)<<endl;
        aux=(*aux).sig;
    }
}
