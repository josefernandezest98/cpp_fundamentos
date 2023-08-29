/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Actividad.cpp
    Descripción:
*/
#include "Actividad.h"
#include "Tipo.h"
#include <iostream>
#include <string>

using namespace std;

Actividad::Actividad()
{
    this->nombre="";
    this->creditos=0;
}

Actividad::Actividad(string n, int c)
{
    this->nombre=n;
    this->creditos=c;
}

string Actividad::getNombre()
{
    return this->nombre;
}

void Actividad::setNombre(string n)
{
    this->nombre=n;
}

int Actividad::getCreditos()
{
    return this->creditos;
}

void Actividad::setCreditos(int c)
{
    this->creditos=c;
}

void Actividad::mostrar()
{
    cout<<"Actividad: "<<this->getNombre()<<endl;
    cout<<"Creditos: "<<this->getCreditos()<<endl;
    cout<<"Coeficiente: "<<this->getCoeficientePrecio()<<endl;
}

