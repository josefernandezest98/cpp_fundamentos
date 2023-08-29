#include "pila.h"

/*
Implementaci�n est�tica del tad pila mediante un registro con dos
campos: uno de ellos es un vector que contiene los datos de la pila
y el otro es un entero que nos indica el n�mero de datos que hay
almacenados en la pila.
*/


void iniciarPila(pila & P)
/*
{Pre: }
{Post: Inicia P como una pila vac�a}
*/
{
	P.num=0;
}

void apilar(pila & P ,telemento d)
/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Apila en la pila P el elemento d}
*/
{
	if (P.num<MAX-1)
	{

		P.datos[P.num]=d;
		P.num=P.num+1;
	}
}


bool pilaVacia(pila P)
/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Si la pila P est� vac�a devuelve el valor verdad. En caso contrario devuelve el valor falso}
*/
{
	return (P.num==0);
}


telemento cima(pila P)
/*
{Pre: la pila P ha debido ser previamente inicializada y no est� vac�a}
{Post:Devuelve el elemento m�s reciente en la pila P y no modifica P}
*/
{
	return(P.datos[P.num-1]);
}


void desapilar(pila & P)
/*
{Pre: la pila P ha debido ser previamente inicializada y no est� vac�a}
{Post: Modifica la pila P eliminando el �ltimo elemento apilado}
*/
{
	P.num=P.num-1;

}


