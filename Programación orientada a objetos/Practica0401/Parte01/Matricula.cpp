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
#include "Calificacion.h"

using namespace std;

Matricula::Matricula(Actividad *a, Estudiante *e, Curso c, OrdenMatricula n,double p)
{
    this->actividad=a;
    this->estudiante=e;
    this->curso=c;
    this->ordenMatricula=n;
    this->precio=p;
    this->convAgotadas=0;
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

int Matricula::getConvAgotadas()
{
    return this->convAgotadas;
}

Calificacion* Matricula::getCalificacion()
{
    return *(this->calificaciones);
}

bool Matricula::anyadirCalificacion(Calificacion* c)
{
    if(this->convAgotadas<2){
        this->calificaciones[this->convAgotadas]=c;
        this->convAgotadas++;
        return true;
    }else return false;
}

bool Matricula::aprobado()
{
    if(this->convAgotadas==0){
        return false;
    }else{
        for(int i=0;i<this->convAgotadas;i++){
            if(this->calificaciones[i]->aprobado()){
                return true;
            }
        }return false;
    }
}

void Matricula::mostrar()
{
    this->getEstudiante()->mostrar();
    this->getActividad()->mostrar();
    cout<<"Curso: "<<this->getCurso()<<endl;
    cout<<"Matricula: "<<this->getOrdenMatricula()<<endl;
    cout<<"Precio: "<<this->getPrecio()<<endl;
    cout<<"Convocatorias agotadas: "<<this->getConvAgotadas()<<endl;
    for(int i=0;i<this->convAgotadas;i++){
        this->calificaciones[i]->mostrar();
    }
    cout<<"Aprobado: "<<this->aprobado()<<endl;

}
