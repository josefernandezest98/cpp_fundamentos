#include "TFG.h"
#include "Catálogo.h"
#include "iostream"
#include "cstring"

using namespace std;

void crearCatalogo (catalogo &C)
/*{}*/
{
    C.p=NULL;
    C.tamanio=0;
}

void anadirTFG (catalogo &C,TFG T) //ordenado el catalogo alfabeticamente por autor
/*{}*/
{
    nodo *ant,*aux,*nuevo;
    char autorT[30]
    char autorNodo[30];
    nombreAlumno(T,autorT);

    nuevo=new(nodo);
    if(nuevo!=NULL)
    {
        asignar(T,(*nuevo).dato);
        (*nuevo).sig=NULL;

        aux=C.p;
        if(aux==NULL)
        {
            C.p=nuevo;
        }else{
                nombreAlumno((*aux).dato,autorNodo);
                while(aux!=NULL && strcmp(autorNodo,autorT)<0)
                {
                    ant=aux;
                    aux=(*aux).sig;
                    if(aux!=NULL)
                    {
                        nombreAlumno((*aux).dato,autorNodo);
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
            C.tamanio++;
    }

}

bool catalogoVacio (catalogo C);
/*{}*/
{
    return(C.tamanio==0);
}

void alumnoConMayorNota (catalogo C,char autor[]);
/*{}*/
{
    TFG TconMejorNota;
    float notaAux;
    float mejorNota;
    //char autorNodo[30];

    nodo *aux;
    aux=C.p;

    if (!catalogoVacio(C)) //if (aux!=NULL) si el primero no apunta a NULL
    {
        asignar((*aux).dato,TconMejorNota); //copio el trabajo con mejor nota para comparralo
        mejorNota=notaTGF(TconMejorNota);   //y obtengo la nota de el

        aux=(*aux).sig; //AVANZO

        while (aux!=NULL)
        {
            notaAux=notaTGF((*aux).dato); //obtengo nota del nodo
            if(notaAux>mejorNota)
            {
                asignar((*aux).dato,TconMejorNota);
                mejorNota=notaTGF(TconMejorNota);
            }
            aux=(*aux).sig; //AVANZO
        }
    }
    nombreAlumno(TconMejorNota,autor);
}

int numeroTFGs (catalogo C,char director[]);
/*{}*/
{
    char directorNodo[30];
    int contador=0;
    nodo *aux;

    aux=C.p;
    while(aux!=NULL)
    {
        nombreDirector((*aux).dato,directorNodo);
        if(strcmp(directorNodo,director)=0)
        {
            contador++;
        }
        aux=(*aux).sig
    }
    return(contador);
}

bool estaAlumno (catalogo C, char autor[]);
/*{}*/
{
    char autorNodo[30];
    bool econtrado=false;
    nodo *aux;

    aux=C.p;
    while(aux!=NULL && (encontrado==false) )
    {
        nombreAlumno((*aux).dato,autorNodo);
        if(strcmp(autorNodo,autor)==0)
        {
            encontrado=true;
        }
        aux=(*aux).sig;
    }
    return(encontrado)
}
