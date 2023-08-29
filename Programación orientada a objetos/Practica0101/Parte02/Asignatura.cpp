/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Asignatura.cpp_Practica01_Parte02
    Descripción:
*/
#include "Asignatura.h"
#include <string>

Asignatura::Asignatura()
{
    this->nombre="";
    this->creditos=0;
    this->planEstudios=0;
}

Asignatura::Asignatura(string nombre, int creditos, int planEstudios)
{
    this->nombre=nombre; /*Al trabajar con "string" puedo hacer este tipo de asignaciones*/
    this->creditos=creditos;
    this->planEstudios=planEstudios;
}

string Asignatura::getNombre()
{
    return this->nombre;
}

void Asignatura::setNombre(string nombre)
{
    this->nombre=nombre;
}

int Asignatura::getCreditos()
{
    return this->creditos;
}

void Asignatura::setCreditos(int creditos)
{
    this->creditos=creditos;
}

int Asignatura::getPlanEstudios()
{
    return this->planEstudios;
}

void Asignatura::setPlanEstudios(int planEstudios)
{
    this->planEstudios=planEstudios;
}
