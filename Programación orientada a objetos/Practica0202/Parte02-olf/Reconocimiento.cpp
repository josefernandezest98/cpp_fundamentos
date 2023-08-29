/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Reconocimiento.cpp_Practica02-02_Parte02
    Descripción:
*/
#include "Actividad.h"
#include "TIPO.H"
#include "Reconocimiento.h"
#include <string>

using namespace std;

Reconocimiento::Reconocimiento(string n, int c, string d):Actividad(n,c)
{
    this->descripcion=d;
}

string Reconocimiento::getDescripcion()
{
    return this->descripcion;
}

void Reconocimiento::setDescripcion(string d)
{
    this->descripcion=d;
}
