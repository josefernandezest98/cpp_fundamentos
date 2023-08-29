#ifndef CONVALIDACION_H_INCLUDED
#define CONVALIDACION_H_INCLUDED
#include "Actividad.h"
#include <string>

using namespace std;

class Convalidacion: public Actividad
{
private:
    string nombreAsignaturaOriginal;
    string universidadOrigen;
    double coeficientePrecio;

public:
    Convalidacion(string nombre,int creditos,string nAO,string uO);
    string getNombreAsignaturaOriginal();
    string getUniversidadOrigen();
    double getCoeficientePrecio();
    void setCoeficientePrecio(double c);
    void mostrar();
};

#endif // CONVALIDACION_H_INCLUDED
