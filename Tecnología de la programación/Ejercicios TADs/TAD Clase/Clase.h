#ifndef CLASE_H_INCLUDED
#define CLASE_H_INCLUDED

struct nodo
{
    calAlumno dato;
    nodo *sig;
};

struct clase
{
    nodo *p;
    int tamanio;
};

void crearClase(clase &C);

void anadirCalif (clase &C,calAlumno A);

void modificarNota (clase &C, char nombre[],float calif);

bool claseVacia(clase C);

int numAlumnos (clase C);

void listarClase (clase C);

#endif // CLASE_H_INCLUDED
