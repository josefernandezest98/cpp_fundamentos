#include "TFG.h"
#include "iostream"
#include "cstring"


void iniciarTFG(char titulo[], char autor[], char director[], float calificacion, TFG &T)
/*{POST: Inicia T como un TFG del alumno cuyo nombre es autor, dirigido por el profesor
cuyo nombre es director que lleva por titulo titulo y que ha obtenido la nota calificacion}*/
{
    strcpy(T.titulo,titulo);
    strcpy(T.autor,autor);
    strcpy(T.director, director);
    T.calificacion=calificacion;
}

void nombreAlumno(TFG T,char autor[])
/*{POST: autor toma como valor el nombre del alumno que realizo el trabajo de fin de grado T}*/
{
    strcpy(autor,T.autor);
}

void nombreDirector(TFG T,char director[])
/*{POST: director toma como valor el nombre del director del trabajo de fin de grado T}*/
{
    strcpy(director,T.director);
}

float notaTGF (TFG T)
/*{POST: devuelve la calificacion obtenida por el trabajo fin de grado T}*/
{
    return(T.calificacion);
}

void asignar (TFG T1,TFG &T2)
/*{POST: inicia el trabajo fin de grado T2 con los datos del trabajo fin de grado T1}*/
{
    strcpy(T2.titulo,T1.titulo);
    strcpy(T2.autor,T1.autor);
    strcpy(T2.director,T1.director);
    T2.calificacion=T1.calificacion;
}
