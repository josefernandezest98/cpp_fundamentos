/*
    Nombre:Alexandra Denisa Kovacs
    Grupo:2
    Nombre del fichero: Punto.cpp_Practica03_Parte02
    Descripción:
*/
#include "Punto.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int Punto::contadorPuntos=0;
int Punto::contadorPolares=0;

Punto::Punto()
{
    contadorPuntos++;
    this->rad=0;
    this->ang=0;
}

Punto::Punto(double coord_x, double coord_y)
{
    contadorPuntos++;
    this->rad=sqrt(coord_x*coord_x+coord_y*coord_y);
    this->ang=atan2(coord_y,coord_x);
}

double Punto::getX()
{
    return this->rad*cos(this->ang);
}

void Punto::setX(double coord_x)
{
    double coord_y=getY();
    this->rad=sqrt(coord_x*coord_x+coord_y*coord_y);
    this->ang=atan2(coord_y,coord_x);
}

double Punto::getY()
{
    return this->rad*sin(this->ang);
}

void Punto::setY(double coord_y)
{
    double coord_x=getX();
    this->rad=sqrt(coord_x*coord_x+coord_y*coord_y);
    this->ang=atan2(coord_y,coord_x);
}

double Punto::getCoordRadial()
{
    contadorPolares++;
    return this->rad;
}

void Punto::setCoordRadial(double r)
{
    contadorPolares++;
    this->rad=r;
}

double Punto::getCoordAngular()
{
    contadorPolares++;
    return this->ang;
}

void Punto::setCoordAngular(double a)
{
    contadorPolares++;
    this->ang=a;
}

void Punto::sumarCoordenadas(Punto *p)
{
    this->setX(this->getX()+p->getX());
    this->setY(this->getY()+p->getY());
}

int Punto::getContadorPuntos()
{
    return contadorPuntos;
}
int Punto::getContadorPolares()
{
    return contadorPolares;
}
void Punto::mostrar()
{
    cout<<"El valor de X es:"<<this->getX()<<endl;
    cout<<"El valor de Y es:"<<this->getY()<<endl;
    cout<<"el numeor de objetos de la clase Punto es:"<<getContadorPuntos()<<endl;
}
