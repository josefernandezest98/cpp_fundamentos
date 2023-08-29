/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Actividad.h
    Descripción:
*/
#ifndef ACTIVIDAD_H_INCLUDED
#define ACTIVIDAD_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Actividad
{
private:
    string nombre;
    int creditos;
public:
    Actividad();
    Actividad(string n,int c);
    string getNombre();
    void setNombre(string n);
    int getCreditos();
    void setCreditos(int c);
    virtual double getCoeficientePrecio()=0;
    virtual void setCoeficientePrecio(double p)=0;
    void mostrar();
};


#endif // ACTIVIDAD_H_INCLUDED
