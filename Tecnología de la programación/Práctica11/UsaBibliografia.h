#ifndef USABIBLIOGRAFIA_H_INCLUDED
#define USABIBLIOGRAFIA_H_INCLUDED

//ESPECIFICACION de las operaciones auxiliares del TAD Bibliografia.

void copiarBibliografia(tbibliografia b, tbibliografia &bCopia);
/* {PRE:}
{POST:realiza una copia de los libros de la bibliografia b en la bibliografia bCopia}*/
void mostrarBibliografiaISBN(tbibliografia b);
/* {PRE:}
{POST:muestra por pantalla los libros de la bibliografia b por orden creciente de su ISBN}*/
void mostrarBibliografiaAnio(tbibliografia b);
/* {PRE:}
{POST:muestra por pantalla los libros de la bibliografia b por orden decreciente de anio de publicacion}*/

#endif // USABIBLIOGRAFIA_H_INCLUDED
