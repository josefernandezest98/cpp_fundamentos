/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Asignatura.h_Practica02-02_Parte02
    Descripción:
*/
#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED
#include <string>
#include "Actividad.h"
#include "Tipo.h"


using namespace std;

class Asignatura:public Actividad
{
    private:
        int planEstudios;
        Tipo tipo;
    public:
        Asignatura();
        Asignatura (string n,int c,int pE, Tipo t);
        int getPlanEstudios();
        void setPlanEstudios(int pE);
        Tipo getTipo();
        void setTipo(Tipo t);
};

#endif // ASIGNATURA_H_INCLUDED
