/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica02-02_Parte02
    Descripción:
*/
#include "Actividad.h"
#include "Matricula.h"
#include "Estudiante.h"
#include "Asignatura.h"
#include "Curso.h"
#include "Tipo.h"
#include "OrdenMatricula.h"
#include "Reconocimiento.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   Actividad* act1=new Asignatura("POO",6,2010,Troncal);
   Actividad* act2=new Reconocimiento("Deportes",2,"Campeonatos universitarios");

   Estudiante* est1=new Estudiante("peperez",true);

   Matricula* m1=new Matricula(act1,est1,C1617,M2,20);
   Matricula* m2=new Matricula(act2,est1,C1718,M1,20);

   cout<<"El estudiante matriculado en m1 es "<<m1->getEstudiante()->getCuasi()<<endl;
   cout<<"El numero de creditos es "<<m1->getActividad()->getCreditos()<<endl;
   cout<<"El curso es "<<m1->getCurso()<<endl;
}
