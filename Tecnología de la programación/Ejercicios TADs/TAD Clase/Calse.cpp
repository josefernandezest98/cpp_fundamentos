#include "Calificación.h"
#include "Clase.h"
#include "iostream"
#include "cstring"

using namespace std;

void crearClase(clase &C)
{
    C.p=NULL;
    C.tamanio=0;
}

void anadirCalif (clase &C,calAlumno A)
{
    char nombreAux[30];
    char nombreAlum[30];
    nodo *ant,*aux,*nuevo;

    nombre(A,nombreAlum);

    nuevo=new(nodo);
    if(nuevo!=NULL)
    {
         copiaCalAlum(A,(*nuevo).dato);
        (*nuevo).sig=NULL;

        aux=C.p;
        if(aux==NULL)
        {
            C.p=nuevo;
        }else{
                nombre((*aux).dato,nombreAux);
                while(aux!=NULL && strcmp(nombreAux,nombreAlum)<0)
                {
                    ant=aux;
                    aux=(*aux).sig;
                    if(aux!=NULL)
                    {
                        nombre((*aux).dato,nombreAux);
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

void modificarNota (clase &C, char nombreA[],float calif)
{
    char nombreAux[30];
    nodo *aux;
    bool encontrado=false;

    aux=C.p;
    while(aux!=NULL && encontrado==false)
    {
        nombre((*aux).dato,nombreAux);
        if(strcmp(nombreAux,nombreA)==0)
        {
            modificarCalAlum((*aux).dato,calif);
            encontrado=true;
        }else{
                aux=(*aux).sig;
            }
    }

}

bool claseVacia(clase C)
{
    return(C.tamanio==0);
}

int numAlumnos (clase C)
{
    int contador=0;
    nodo *aux;

    aux=C.p;
    while(aux!=NULL)
    {
        contador++;
        aux=(*aux).sig;
    }
    return(contador);
}

void listarClase (clase C)
{
    nodo *aux;

    aux=C.p;
    while(aux!=NULL)
    {
        mostrarCalAlum((*aux).dato);
        aux=(*aux).sig;
    }
}
