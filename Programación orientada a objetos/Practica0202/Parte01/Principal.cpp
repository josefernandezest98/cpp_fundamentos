/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica02-02_Parte01
    Descripción:
*/

#include "Punto.h"
#include "Circunferencia.h"
#include "Circunferencia2D.h"
#include <iostream>

using namespace std;

int main()
{
    Circunferencia2D* circ1=new Circunferencia2D(8.0, new Punto(3.0,6.0));
    Circunferencia2D* circ2=new Circunferencia2D(6.0, new Punto(5.0,5.0));
    Circunferencia2D* circ3=new Circunferencia2D(6.5, new Punto(0.0,0.0));
    Circunferencia2D* circ4=new Circunferencia2D(8.0, new Punto(3.0,6.0));

    cout<<"La circunferencia de centro " << endl;
    circ1->getCentro()->mostrar();
    cout << endl << "es " << endl;
    circ1->mostrar();

    //Sustituimos circ1 en el origen.
    circ1->sumarCoordenadas(new Punto(-circ1->getCentro()->getX(),-circ1->getCentro()->getY()));

    //La mostramos de nuevo, y su centro deberia ser (0,0).
    cout<<"La circunferencia despues de su traslacion: " << endl;
    circ1->mostrar();

    cout<<"La circunferencia de centro " << endl;
    circ2->getCentro()->mostrar();
    cout << endl << "es " << endl;
    circ2->mostrar();

    //Situamos circ2 en (0,0).
    circ2->sumarCoordenadas(new Punto(-circ2->getCentro()->getX()/2,-circ2->getCentro()->getY()/2));

    //la mostramos de nuevo, y su centro deberia ser (2.5,2.5).
    cout<<"La circunferencia despues de su traslacion: " << endl;
    circ2->mostrar();

    Circunferencia* c1=new Circunferencia(5.6);
    cout<<"Mostramos una circunferencia: "<<endl;
    c1->mostrar();
}
