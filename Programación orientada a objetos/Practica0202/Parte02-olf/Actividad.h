/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Actividad.h_Practica02-02_Parte02
    Descripci�n:
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
};


#endif // ACTIVIDAD_H_INCLUDED
