#ifndef BIBLIOGRAFÌA_H_INCLUDED
#define BIBLIOGRAFÌA_H_INCLUDED

struct Nodo
{
    tlibro dato;
    Nodo* sig;
};

struct tbibliografia
{
    Nodo* primero;
    int tamanio;  //Indica la cantidad de nodos que tiene la bibliografia.
};


void crear(tBibliografia &b);
void anadir(tBibliografia &b, tLibro l);
void eliminar(tBibliografia &b,char ISBN{});
void extraer(tBibliografia b,char ISBN,tLibro &l);
void extraerPosicion(tBibliografia b,int pos, tLibro &l);
bool existe (tbibliografÌa b, char ISBN[]);
void modificarAnioLibro(tBibliografia &b,char ISBN[],float anio);
void masNuevo(tBibliografia b,tLibro &l);
bool bibliografiaSinLibros(tBibliografia b);
int nuemeroLibros(tBibliografia b);

#endif // BIBLIOGRAFÌA_H_INCLUDED
