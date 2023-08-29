/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Matricula.h
    Descripción:
*/
#ifndef MATRICULA_H_INCLUDED
#define MATRICULA_H_INCLUDED
#include "Actividad.h"
#include "Estudiante.h"
#include "Curso.h"
#include "OrdenMatricula.h"
#include "Tipo.h"

class Matricula
{
    private:
        Actividad *actividad;
        Estudiante *estudiante;
        Curso curso;
        OrdenMatricula ordenMatricula;
        double precio;
        bool calificacionAsignada;
        double calificacion;

    public:
        Matricula(Actividad* a,Estudiante* e,Curso c,OrdenMatricula n,double p);
        Actividad* getActividad();
        Estudiante* getEstudiante();
        Curso getCurso();
        OrdenMatricula getOrdenMatricula();
        double getPrecio();
        bool getCalificacionAsignada();
        double getCalificacion();
        bool asignarCalificacionInicial(double c);
        bool sobreescribirCalificacion(double c);
};
#endif // MATRICULA_H_INCLUDED
