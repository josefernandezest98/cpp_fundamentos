/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Reconocimiento.cpp
    Descripción:
*/
#include "Actividad.h"
#include "Tipo.h"
#include "Reconocimiento.h"
#include <string>

using namespace std;

Reconocimiento::Reconocimiento(string n, int c, string d):Actividad(n,c)
{
    this->descripcion=d;
    this->coeficientePrecio=0.75;
}

string Reconocimiento::getDescripcion()
{
    return this->descripcion;
}

void Reconocimiento::setDescripcion(string d)
{
    this->descripcion=d;
}

double Reconocimiento::getCoeficientePrecio()
{
    return this->coeficientePrecio;
}

void Reconocimiento::setCoeficientePrecio(double c)
{
    this->coeficientePrecio=c;
}

