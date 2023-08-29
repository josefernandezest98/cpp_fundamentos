/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Circunferencia.cpp_Practica02-02_Parte01
    Descripción:
*/
#include "Circunferencia.h"
#include <iostream>
#include <cmath>

using namespace std;

int Circunferencia::contadorCircunferencia=0;

Circunferencia::Circunferencia()
{
    this->radio=0.0; //construye un objeto circunfernecia con radio 0
}

Circunferencia::Circunferencia(double radio)
{
    this->radio=radio;
}

double Circunferencia::getRadio()
{
    return this->radio;
}

void Circunferencia::setRadio(double radio)
{
    this->radio=radio;
}

double Circunferencia::getDiametro()
{
    return this->radio*2;
}

void Circunferencia::setDiametro(double diametro)
{
    this->radio=diametro/2;
}

double Circunferencia::getLongitud()
{
    return (this->radio*2*PI);
}

void Circunferencia::setLongitud(double longitud)
{
    this->radio=longitud/(2*PI);
}

double Circunferencia::getArea()
{
    return this->PI*radio*radio;
}

void Circunferencia::setArea(double area)
{
    this->radio=sqrt(area/PI);
}
int Circunferencia::getContadorCircunferencias()
{
    return Circunferencia::contadorCircunferencia;
}

void  Circunferencia::reiniciarContadorCircunferencias()
{
    Circunferencia::contadorCircunferencia=0;
}
void Circunferencia::mostrar()
{
    cout<<"Radio: "<<this->getRadio()<<", Area: "<<this->getArea()<<endl;
}
