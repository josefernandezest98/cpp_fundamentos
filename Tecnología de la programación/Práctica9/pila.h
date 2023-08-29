#include<iostream>
#include<cstdlib>
using namespace std;

//Vamos a trabajar con pilas de enteros
typedef int telemento;

//n�mero m�ximo de datos que habr� en la pila
const int MAX= 1000;

struct pila
{

	int num;//n�mero de datos que hay en la pila
	telemento  datos [MAX];
};


void iniciarPila(pila & P);
/*
{Pre: }
{Post: Inicia P como una pila vac�a}
*/

void apilar(pila & P,telemento d);
/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Apila en la pila P el elemento d}
*/

bool pilaVacia(pila P);
/*
{Pre: la pila P ha debido ser previamente inicializada }
{Post: Si la pila P est� vac�a devuelve el valor verdad. En caso contrario devuelve el valor falso}
*/

telemento cima(pila P);
/*
{Pre: la pila P ha debido ser previamente inicializada y no est� vac�a}
{Post:Devuelve el elemento m�s reciente en la pila P y no modifica P}
*/

void desapilar(pila & P);
/*
{Pre: la pila P ha debido ser previamente inicializada y no est� vac�a}
{Post: Modifica la pila P eliminando el �ltimo elemento apilado}
*/

