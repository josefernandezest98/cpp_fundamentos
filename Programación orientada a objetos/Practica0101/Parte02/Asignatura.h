/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Asignatura.h_Practica01_Parte02
    Descripción:
*/
#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED
#include <string>

using namespace std;

class Asignatura
{
    private:
        string nombre;
        int creditos;
        int planEstudios;
    public:
        Asignatura();
        Asignatura (string nombre,int creditos,int planEstudios);
        string getNombre();
        void setNombre(string nombre);
        int getCreditos();
        void setCreditos(int creditos);
        int getPlanEstudios();
        void setPlanEstudios(int planEstudios);
};

#endif // ASIGNATURA_H_INCLUDED
