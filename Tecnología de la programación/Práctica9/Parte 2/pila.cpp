#include "pila.h"

/*
Implementación dinámica del tad pila.
*/

/* {Pre: }
   {Post: Inicia P como una pila vacía}
*/
void iniciarPila(pila & P) {
	P = NULL;
}

/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Apila en la pila P el elemento d}
*/
void apilar(pila & P ,telemento d) {
    tnodo *nuevo;
    nuevo = new(tnodo);

	if (nuevo !=NULL) {
        nuevo->dato = d;
        nuevo->sig = P;
        P = nuevo;
	}
}

/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Si la pila P está vacía devuelve el valor verdad. En caso contrario devuelve el valor falso}
*/
bool pilaVacia(pila P) {
	return (P == NULL);
}


/*
{Pre: la pila P ha debido ser previamente inicializada y no está vacía}
{Post:Devuelve el elemento más reciente en la pila P y no modifica P}
*/
telemento cima(pila P) {
	return(P->dato);
}

/*
{Pre: la pila P ha debido ser previamente inicializada y no está vacía}
{Post: Modifica la pila P eliminando el último elemento apilado}
*/
void desapilar(pila & P) {
    tnodo *aux;
    aux = P;
    P = aux->sig;
    delete(aux);
}





