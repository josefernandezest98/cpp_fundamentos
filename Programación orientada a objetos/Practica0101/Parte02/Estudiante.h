/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Estudiante.h_Practica01_Parte02
    Descripción:
*/
#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <string>

using namespace std;

class Estudiante
{
private:
    string cuasi;
    bool familiaNumerosa;
public:
    Estudiante();
    Estudiante(string cuasi,bool familiaNumerosa);
    string getCuasi();
    void setCuasi(string cuasi);
    bool getFamiliaNumerosa();
    void setFamiliaNumerosa (bool familiaNumerosa);
};

#endif // ESTUDIANTE_H_INCLUDED
