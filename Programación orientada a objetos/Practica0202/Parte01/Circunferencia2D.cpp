/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Circunferencia2D.cpp_Practica02-02_Parte01
    Descripción:
*/
#include "Punto.h"
#include "Circunferencia.h"
#include "Circunferencia2D.h"
#include <iostream>

using namespace std;

Circunferencia2D::Circunferencia2D():Circunferencia()
{
    this->centro=new Punto();
}

Circunferencia2D::Circunferencia2D(double r, Punto* p):Circunferencia(r)
{
    this->centro=p;
}

Punto* Circunferencia2D::getCentro()
{
    return this->centro;
}

void Circunferencia2D::setCentro(Punto* p)
{
    this->centro=p;
}

void Circunferencia2D::sumarCoordenadas(Punto* p)
{
    this->centro->sumarCoordenadas(p);
}

void Circunferencia2D::mostrar()
{
    cout << endl << "Mostrando Circunferencia2D:" << endl;
    cout << "Centro: ";
    this->centro->mostrar();
    cout << "Circunferencia: ";
    Circunferencia::mostrar();
    cout << endl;
}

