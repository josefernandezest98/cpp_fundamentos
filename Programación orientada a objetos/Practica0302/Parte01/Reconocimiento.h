/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Reconocimiento.h
    Descripción:
*/
#ifndef RECONOCIMIENTO_H_INCLUDED
#define RECONOCIMIENTO_H_INCLUDED
#include "Actividad.h"
#include "Tipo.h"
#include <string>

using namespace std;

class Reconocimiento:public Actividad
{
private:
    string descripcion;
    double coeficientePrecio;

public:
    Reconocimiento(string n,int c,string d);
    string getDescripcion();
    void setDescripcion(string d);
    double getCoeficientePrecio();
    void setCoeficientePrecio(double c);
};

#endif // RECONOCIMIENTO_H_INCLUDED
