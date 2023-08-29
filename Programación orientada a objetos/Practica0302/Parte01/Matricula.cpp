/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Matricula.cpp
    Descripción:
*/

#include "Matricula.h"
#include "Asignatura.h"
#include "Estudiante.h"
#include "Curso.h"
#include "OrdenMatricula.h"

using namespace std;

Matricula::Matricula(Actividad *a, Estudiante *e, Curso c, OrdenMatricula n,double p)
{
    this->actividad=a;
    this->estudiante=e;
    this->curso=c;
    this->ordenMatricula=n;
    this->precio=p;
    this->calificacionAsignada=false;
}

Actividad* Matricula::getActividad()
{
    return this->actividad;
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

double Matricula::getPrecio()
{
    double precio=0;

    if(this->ordenMatricula==M1){
        precio=this->precio*this->actividad->getCreditos();
    }
    if(this->ordenMatricula==M2){
        precio=this->precio*2*this->actividad->getCreditos();
    }
    if(this->ordenMatricula==M3){
        precio=this->precio*4*this->actividad->getCreditos();
    }
    if(this->ordenMatricula==M4){
        precio=this->precio*6*this->actividad->getCreditos();
    }
    if(this->estudiante->getFamiliaNumerosa()){
        precio=precio*0.5;
    }
    return precio*this->actividad->getCoeficientePrecio();
}

bool Matricula::getCalificacionAsignada()
{
    return this->calificacionAsignada;
}

double Matricula::getCalificacion()
{
    if(this->getCalificacionAsignada()==true){
        return this->calificacion;
    }else return 0;
}

bool Matricula::asignarCalificacionInicial(double c)
{
    if(this->calificacionAsignada==true){
        return false;
    }else{
        this->calificacion=c;
        this->calificacionAsignada=true;
        return true;
    }
}

bool Matricula::sobreescribirCalificacion(double c)
{
    if(this->calificacionAsignada==false){
        return false;
    }else{
        if(this->calificacion!=c){
            this->calificacion=c;

        }
        return true;
    }
}
