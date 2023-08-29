#ifndef CALIFICACIÛN_H_INCLUDED
#define CALIFICACIÛN_H_INCLUDED

struct calAlumno
{
    char nombre[30];
    char NIF[10];
    float calificacion;
};

void crearCalAlumno(char nombre[],char NIF[], float calif, calAlumno &A);

void nombre(calAlumno A,char nombre[]);

void NIF(calAlumno A,char NIF[]);

float nota(calAlumno A);

void modificarCalAlum(calAlumno &A, float calif);

void copiaCalAlum (calAlumno A1, calAlumno &A2);

void mostrarCalAlum (calAlumno A);

#endif // CALIFICACIÛN_H_INCLUDED
