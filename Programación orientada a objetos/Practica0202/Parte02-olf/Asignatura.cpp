/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Asignatura.cpp_Practica02-02_Parte02
    Descripción:
*/
#include "Asignatura.h"
#include "TIPO.H"
#include <string>

Asignatura::Asignatura():Actividad()
{
    this->planEstudios=0;
    this->tipo=Troncal;
}

Asignatura::Asignatura(string n, int c, int pE, Tipo t):Actividad(n,c)
{
    this->planEstudios=pE;
    this->tipo=t;
}

int Asignatura::getPlanEstudios()
{
    return this->planEstudios;
}

void Asignatura::setPlanEstudios(int pE)
{
    this->planEstudios=pE;
}

Tipo Asignatura::getTipo()
{
    return this->tipo;
}

void Asignatura::setTipo(Tipo t)
{
    this->tipo=t;
}
