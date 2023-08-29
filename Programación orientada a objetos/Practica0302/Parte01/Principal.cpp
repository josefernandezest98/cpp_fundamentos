#include "Actividad.h"
#include "Asignatura.h"
#include "Convalidacion.h"
#include "Curso.h"
#include "Estudiante.h"
#include "Matricula.h"
#include "OrdenMatricula.h"
#include "Reconocimiento.h"
#include "Tipo.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Actividad* act01;
    Actividad* act02;

    Convalidacion* conv01;
    Asignatura* asg01;
    Reconocimiento* rec01;

    act01=new Convalidacion("Calculo",6,"Calculo Diferencial e Integral","Universidad de Zaragoza");
    act02=new Reconocimiento("Ingl�s B2", 6, "Nivel de Ingl�s B2 por la EOI de Logro�o");
    conv01=new Convalidacion("�lgebra Lineal", 6, "�lgebra Lineal", "Universidad de Burgos");
    asg01=new Asignatura("Tecnolog�a de la programaci�n", 6, 2017, Troncal);
    rec01=new Reconocimiento("Ingl�s B1", 6, "Nivel de Ingl�s B1 por la EOI de Logro�o");

    //cout<<act01->getUniversidadOrigen<<endl;
    conv01->getUniversidadOrigen;
}
