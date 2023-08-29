#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

//ESPECIFICACIÓN del TAD Libro

struct tLibro
{
    char ISBN[30];
    char titulo[20];
    int anio;
};

void crearLibro(tLibro &l, char ISBN[],char titulo[],int anio);
void modificarAnio(tLibro &l,int nuevoAnio);
void obtenerTitulo(tLibro l,char titulo[]);
void obtenerAnio(tLibro l, int &anio);
void obtenerISBN(tLibro l, char ISBN[]);

#endif // LIBRO_H_INCLUDED
