/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Circunferencia2D.h_Practica02-02_Parte01
    Descripción:
*/
#ifndef CIRCUNFERENCIA2D_H_INCLUDED
#define CIRCUNFERENCIA2D_H_INCLUDED

#include "Punto.h"
#include "Circunferencia.h"

class Circunferencia2D: public Circunferencia
//"public ________" indica la clase de la que hereda.
{
private:
    Punto* centro;
public:
    Circunferencia2D();
    Circunferencia2D(double r,Punto* p);
    Punto* getCentro();
    void setCentro(Punto* p);
    void sumarCoordenadas(Punto* p);
    void mostrar();
};



#endif // CIRCUNFERENCIA2D_H_INCLUDED
