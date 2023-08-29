#include "Calificación.h"
#include "iostream"
#include "cstring"

using namespace std;

void crearCalAlumno(char nombre[],char NIF[], float calif, calAlumno &A)
{
    strcpy(A.nombre,nombre);
    strcpy(A.NIF,NIF);
    A.calificacion=calif;
}

void nombre(calAlumno A,char nombre[])
{
    strcpy(nombre,A.nombre);
}

void NIF(calAlumno A,char NIF[])
{
    strcpy(NIF,A.NIF);
}

float nota(calAlumno A)
{
    return(A.calificacion);
}

void modificarCalAlum(calAlumno &A, float calif)
{
    A.calificacion=calif;
}

void copiaCalAlum (calAlumno A1, calAlumno &A2)
{
    strcpy(A2.nombre,A1.nombre);
    strcpy(A2.NIF,A1.NIF);
    A2.calificacion=A1.calificacion;
}

void mostrarCalAlum (calAlumno A)
{
    cout<<"La calificacion del alumno "<<A.nombre<<" es "<<A.calificacion<<endl;
}
