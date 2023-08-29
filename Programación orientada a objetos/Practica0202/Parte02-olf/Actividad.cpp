/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Actividad.cpp_Practica02-02_Parte02
    Descripción:
*/
#include "Actividad.h"
#include "TIPO.H"
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
