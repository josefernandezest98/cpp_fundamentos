/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp
    Descripción:
*/
#include "Matricula.h"
#include "Asignatura.h"
#include "Convalidacion.h"
#include "Reconocimiento.h"
#include "Calificacion.h"
#include "Estudiante.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Estudiante *est01;
    Asignatura *asg01;
    Reconocimiento *rec01;
    Convalidacion *conv01;
    Actividad *act01;

    est01=new Estudiante("alkovacs",false);
    asg01=new Asignatura("POO",6,2018,Obligatoria);
    rec01=new Reconocimiento("Ingles B1",6,"Ingles B1");
    conv01=new Convalidacion("Analisis",6,"Plastica","Universidad de los sueños");
    act01=new Convalidacion("Algebra",6,"Estructuras Algebraicas","Universidad de La Rioja");

    Matricula* m=new Matricula(act01,est01,C1819,M1,14.12);
    m->mostrar();

    est01->mostrar();
    asg01->mostrar();
    rec01->mostrar();
    conv01->mostrar();
    act01->mostrar();
}
