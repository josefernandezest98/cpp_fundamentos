/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica02-01_Parte02
    Descripción:
*/
#include "Punto.h"
#include "Polilinea.h"
#include <iostream>

using namespace std;

int main()
{
    Punto* p1=new Punto(1,0);
    Punto* p2=new Punto(2,0);
    Punto* p3=new Punto(3,0);
    Punto* p4=new Punto(2,0);

    Polilinea* P=new Polilinea("Polilinea");
    P->anyadirPunto(p1);
    P->anyadirPunto(p2);
    P->anyadirPunto(p3);
    P->anyadirPunto(p4);

    P->mostrarPuntos();
    //Solo se muestran tres puntos,el que esta repetido no.
    cout<<"¿Los puntos estan alineados?:"<<P->estanAlineados()<<endl;

    cout<<"El punto mas cercano es:("<<P->puntoMasCercano()->getX()<<","<<P->puntoMasCercano()->getY()<<")"<<endl;
    cout<<"El punto mas alejado es:("<<P->puntoMasAlejado()->getX()<<","<<P->puntoMasAlejado()->getY()<<")"<<endl;

    P->eliminarPunto(p3);
    P->mostrarPuntos();
    //Solo muestra dos puntos,porque hemos eliminado uno.
}
