/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Punto.cpp_Practica01_Parte03
    Descripción:
*/
#include "Punto.h"
#include <cmath>

Punto::Punto()
{
    this->coord_x=0;
    this->coord_y=0;
}

Punto::Punto(double coord_x, double coord_y)
{
    this->coord_x=coord_x;
    this->coord_y=coord_y;
}

double Punto::getX()
{
    return this->coord_x;
}

void Punto::setX(double coord_x)
{
    this->coord_x=coord_x;
}

double Punto::getY()
{
    return this->coord_y;
}

void Punto::setY(double coord_y)
{
    this->coord_y=coord_y;
}

double Punto::getCoordRadial()
{
    return sqrt((this->coord_x*this->coord_x)+(this->coord_y*this->coord_y));
}

void Punto::setCoordRadial(double r)
{
    double a= getCoordAngular();
    this->coord_x=r*cos(a);
    this->coord_y=r*sin(a);
}

double Punto::getCoordAngular()
{
    return atan2(this->coord_y,this->coord_x);
}

void Punto::setCoordAngular(double a)
{
    double r=getCoordRadial();
    this->coord_x=r*cos(a);
    this->coord_y=r*sin(a);
}

void Punto::sumarCoordenadas(Punto *p)
{
    this->coord_x=this->coord_x+p->getX();
    this->coord_y=this->coord_y+p->getY();
}
