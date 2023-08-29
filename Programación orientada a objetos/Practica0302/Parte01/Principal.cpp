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
    act02=new Reconocimiento("Inglés B2", 6, "Nivel de Inglés B2 por la EOI de Logroño");
    conv01=new Convalidacion("Álgebra Lineal", 6, "Álgebra Lineal", "Universidad de Burgos");
    asg01=new Asignatura("Tecnología de la programación", 6, 2017, Troncal);
    rec01=new Reconocimiento("Inglés B1", 6, "Nivel de Inglés B1 por la EOI de Logroño");

    //cout<<act01->getUniversidadOrigen<<endl;
    conv01->getUniversidadOrigen;
}
