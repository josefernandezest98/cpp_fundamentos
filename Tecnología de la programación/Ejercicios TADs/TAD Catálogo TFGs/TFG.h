#ifndef TFG_H_INCLUDED
#define TFG_H_INCLUDED

struct TFG
{
    char titulo[50];
    char autor [30];
    char director[30];
    float calificacion;
};


void iniciarTFG(char titulo[], char autor[], char director[], float calificacion, TFG &T);
/*{POST: Inicia T como un TFG del alumno cuyo nombre es autor, dirigido por el profesor
cuyo nombre es director que lleva por titulo titulo y que ha obtenido la nota calificacion}*/
void nombreAlumno(TFG T,char autor[]);
/*{POST: autor toma como valor el nombre del alumno que realizo el trabajo de fin de grado T}*/
void nombreDirector(TFG T,char director[]);
/*{POST: director toma como valor el nombre del director del trabajo de fin de grado T}*/
float notaTGF (TFG T);
/*{POST: devuelve la calificacion obtenida por el trabajo fin de grado T}*/
void asignar (TFG T1,TFG &T2);
/*{POST: inicia el trabajo fin de grado T2 con los datos del trabajo fin de grado T1}*/

#endif // TFG_H_INCLUDED
