#ifndef BIBLIOGRAFIA_H_INCLUDED
#define BIBLIOGRAFIA_H_INCLUDED

struct nodo
{
    libro dato;
    nodo *sig;
};

struct bibliografia
{
    nodo *p;
    int tamanio;
};

void iniciarBib(bibliografia &B);

void anadirLibroBib(bibliografia &B, libro L);

void eliminarLibroBib(bibliografia &B, char ISBN[]);

int numLibros(bibliografia B);

int posicionLibro(bibliografia B, char ISBN[]);

libro libroEnPos(bibliografia B, int pos);

void mostrarBib(bibliografia B);


#endif // BIBLIOGRAFIA_H_INCLUDED
