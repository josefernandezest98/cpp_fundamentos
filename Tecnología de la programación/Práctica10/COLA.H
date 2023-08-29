#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "paciente.h"

typedef paciente tElemento;
struct nodo
{
    tElemento dato;
    nodo *sig;
};

struct cola
{
    nodo *primero;
    nodo *ultimo;
};

void iniciarCola (cola & c);
void anadir (cola & c, tElemento d);
bool colaVacia (cola c);
tElemento primero (cola c);
void eliminar(cola & c);


#endif // COLA_H_INCLUDED
