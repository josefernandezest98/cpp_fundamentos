#include "Actividad.h"
#include "Convalidacion.h"
#include <string>

using namespace std;

Convalidacion::Convalidacion(string nombre, int creditos, string nAO, string uO):Actividad(nombre,creditos)
{
    this->nombreAsignaturaOriginal=nAO;
    this->universidadOrigen=uO;
    this->coeficientePrecio=0.5;
}

string Convalidacion::getNombreAsignaturaOriginal()
{
    return this->nombreAsignaturaOriginal;
}

string Convalidacion::getUniversidadOrigen()
{
    return this->universidadOrigen;
}

double Convalidacion::getCoeficientePrecio()
{
    return this->coeficientePrecio;
}

void Convalidacion::setCoeficientePrecio(double c)
{
    this->coeficientePrecio=c;
}
