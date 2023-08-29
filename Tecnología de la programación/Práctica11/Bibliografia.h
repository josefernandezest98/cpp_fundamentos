#ifndef BIBLIOGRAFIA_H_INCLUDED
#define BIBLIOGRAFIA_H_INCLUDED

//ESPECIFICACION del TAD Bibliografia.

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

void crearBiliografia(tbibliografia &b);
/* {PRE:}
{POST:inicia b como una bibliografia sin libros}*/
void anadirLibro(tbibliografia &b,tlibro l);
/* {PRE:}
{POST:anade en orden alfabetico, basandose en el ISBN, el libro l a la bibliografia b}*/
void eliminarLibro(tbibliografia &b, char ISBN[]);
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:elimina el libro cuyo ISBN es ISBN de la bibliografia b}*/
void extraerDatosLibro(tbibliografia b, char ISBN[], tlibro &l);
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:devuelve de la bibliografia b los datos del libro cuyo ISBN es ISBN}*/
void extraerPosicion(tbibliografia b,int posicion,tlibro &l);
/* {PRE:pos es un entero menor que el numero de libros de la bibliografia b}
{POST:devuelve de la bibliografia b los datos del libro que ocupa la posicion posicion, empezando a contar en 0,en la bibliografia}*/
bool existeLibro(tbibliografia b,char ISBN[]);
/* {PRE:}
{POST:devuelve true si en la bibliografia b hay un libro cuyo ISBN es ISBN, y devuelve false en caso contrario}*/
void modificarAnioLibro(tbibliografia &b, char ISBN[], float anio);
/* {PRE:ISBN es un ISBN de los libros de la bibliografia b}
{POST:modifica el anio de publicacion del libro de la bibliografia b cuyo ISBN es ISBN poniendo como nuevo anio de publicacion anio}*/
void masNuevo(tbibliografia b, tlibro &l);
/* {PRE:la bibliografia b no debe estar vacia}
{POST:l es el libro cuyo anio de publicacion es el mayor de la bibliografia b. En caso de haber varios libros con el mismo anio de publicacion, solo devuelve uno}*/
bool bibliografiaSinLibros(tbibliografia b);
/* {PRE:}
{POST:devuelve true si la bibliografia b no tiene libros, y devuelve false en caso contrario}*/
int numeroLibros(tbibliografia b);
/* {PRE:}
{POST:devuelve el numero de libros de la bibliografia b}*/

#endif // BIBLIOGRAFIA_H_INCLUDED
