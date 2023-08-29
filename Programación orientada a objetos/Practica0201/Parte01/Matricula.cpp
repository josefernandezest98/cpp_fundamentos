/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Matricula.cpp_Practica02-01_Parte01
    Descripción:
*/

#include "Matricula.h"
#include "Asignatura.h"
#include "Estudiante.h"
#include "Curso.h"
#include "OrdenMatricula.h"

using namespace std;

Matricula::Matricula(Asignatura *a, Estudiante *e, Curso c, OrdenMatricula n)
{
    this->asignatura=a;
    this->estudiante=e;
    this->curso=c;
    this->ordenMatricula=n;
}

Asignatura* Matricula::getAsignatura()
{
    return this->asignatura;
}

Estudiante* Matricula::getEstudiante()
{
    return this->estudiante;
}

Curso Matricula::getCurso()
{
    return this->curso;
}

OrdenMatricula Matricula::getOrdenMatricula()
{
    return this->ordenMatricula;
}
