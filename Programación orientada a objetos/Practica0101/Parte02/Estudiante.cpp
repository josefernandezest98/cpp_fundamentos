/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Estudiante.cpp_Practica01_Parte02
    Descripción:
*/
#include "Estudiante.h"
#include <string>

Estudiante::Estudiante()
{
    this->cuasi="";
    this->familiaNumerosa=false;
}

Estudiante::Estudiante(string cuasi, bool familiaNumerosa)
{
    this->cuasi=cuasi;
    this->familiaNumerosa=familiaNumerosa;
}

string Estudiante::getCuasi()
{
    return this->cuasi;
}

void Estudiante::setCuasi(string cuasi)
{
    this->cuasi=cuasi;
}

bool Estudiante::getFamiliaNumerosa()
{
    return this->familiaNumerosa;
}

void Estudiante::setFamiliaNumerosa(bool familiaNumerosa)
{
    this->familiaNumerosa=familiaNumerosa;
}

