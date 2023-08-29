#ifndef CAT·LOGO_H_INCLUDED
#define CAT·LOGO_H_INCLUDED
#include "TFG.h"

struct nodo
{
    TFG dato;
    nodo *sig;
};

struct catalogo
{
    nodo *p;
    int tamanio;
};

void crearCatalogo (catalogo &C);
/*{}*/
void anadirTFG (catalogo &C,TFG T);
/*{}*/
bool catalogoVacio (catalogo C);
/*{}*/
void alumnoConMayorNota (catalogo C,char autor[]);
/*{}*/
int numeroTFGs (catalogo C,char director[]);
/*{}*/
bool estaAlumno (catalogo C, char autor[]);
/*{}*/


#endif // CAT·LOGO_H_INCLUDED
