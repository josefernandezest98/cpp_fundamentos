/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Calificacion.h
    Descripción:
*/
#ifndef CALIFICACION_H_INCLUDED
#define CALIFICACION_H_INCLUDED
#include <string>

using namespace std;

class Calificacion
{
private:
    long fecha;
    double nota;

public:
    Calificacion(long f,double n);
    long getFecha();
    double getNota();
    bool aprobado();
    void mostrar();
};

#endif // CALIFICACION_H_INCLUDED
