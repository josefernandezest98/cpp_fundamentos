/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Calificacion.h
    Descripción:
*/
#include "Calificacion.h"
#include <string>
#include <iostream>

using namespace std;

Calificacion::Calificacion(long f, double n)
{
    this->fecha=f;
    this->nota=n;
}

long Calificacion::getFecha()
{
    return this->fecha;
}

double Calificacion::getNota()
{
    return this->nota;
}

bool Calificacion::aprobado()
{
    if(this->nota>=5.0){
        return true;
    }else return false;
}

void Calificacion::mostrar()
{
    cout<<"Fecha: "<<this->getFecha()<<endl;
    cout<<"Nota: "<<this->getNota()<<endl;
}
