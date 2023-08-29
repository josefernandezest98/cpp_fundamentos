#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

struct libro
{
    char titulo[50];
    char ISBN[10];
    char autor[30];
    float precio;
};

void crearLibro(char titulo[],char ISBN[],char autor[],float precio,libro &L);

void tituloL(libro L,char titulo[]);

void autorL(libro L,char autor[]);

void ISBNL(libro L,char ISBN[]);

float precioL(libro L);

void copiaL(libro L1,libro &L2);


#endif // LIBRO_H_INCLUDED
