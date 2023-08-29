/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica02-01_Parte01
    Descripción:
*/

#include <iostream>
#include "Asignatura.h"
#include "Estudiante.h"
#include "Matricula.h"
#include "Curso.h"
#include "OrdenMatricula.h"
#include <cstring>


using namespace std;

int main()
{
    Asignatura *a1=new Asignatura("POO",6,2010);
    Estudiante *e1=new Estudiante("fooooooo",false);
    Matricula *m1=new Matricula(a1,e1,C1819,M2);
    Asignatura *a2=new Asignatura("SOP",6,2010);
    Matricula *m2=new Matricula(a2,e1,C1819,M2);

    cout<<"Matricula m1:"<<endl;
    cout<<"Asignatura:"<<m1->getAsignatura()->getNombre()<<endl;
    cout<<"Estudiante:"<<m1->getEstudiante()->getCuasi()<<endl;
    cout<<"Curso:"<<m1->getCurso()<<endl;
    cout<<"Orden matricula:"<<m1->getOrdenMatricula()<<endl;

    cout<<"Matricula m2:"<<endl;
    cout<<"Asignatura:"<<m2->getAsignatura()->getNombre()<<endl;
    cout<<"Estudiante:"<<m2->getEstudiante()->getCuasi()<<endl;
    cout<<"Curso:"<<m2->getCurso()<<endl;
    cout<<"Orden matricula:"<<m2->getOrdenMatricula()<<endl;

    e1->setCuasi("baaaaaar");
    a2->setNombre("EST");
    cout<<"Matricula m2 con cambios:"<<endl;
    cout<<"Asignatura:"<<m2->getAsignatura()->getNombre()<<endl;
    cout<<"Estudiante:"<<m2->getEstudiante()->getCuasi()<<endl;
    cout<<"Curso:"<<m2->getCurso()<<endl;
    cout<<"Orden matricula:"<<m2->getOrdenMatricula()<<endl;

}
