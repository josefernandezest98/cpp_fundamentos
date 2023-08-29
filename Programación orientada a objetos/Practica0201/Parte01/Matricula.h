/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Matricula.h_Practica02-01_Parte01
    Descripción:
*/
#ifndef MATRICULA_H_INCLUDED
#define MATRICULA_H_INCLUDED
#include "Asignatura.h"
#include "Estudiante.h"
#include "Curso.h"
#include "OrdenMatricula.h"

class Matricula
{
    private:
        Asignatura *asignatura;
        Estudiante *estudiante;
        Curso curso;
        OrdenMatricula ordenMatricula;

    public:
        Matricula(Asignatura*,Estudiante*,Curso,OrdenMatricula);
        Asignatura* getAsignatura();
        Estudiante* getEstudiante();
        Curso getCurso();
        OrdenMatricula getOrdenMatricula();

};
#endif // MATRICULA_H_INCLUDED
