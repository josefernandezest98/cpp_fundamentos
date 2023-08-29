#include "Libro.h"
#include "UsaLibro.h"

tLibro leerLibro()
{
    tLibro libro;
    char titulo[20];
    char ISBN[10];
    int anio;

    cout<<"Introduce el titulo del libro: "<<endl;
    cin>>titulo;
    cout<<"Introduce el ISBN del libro: "<<endl;
    cin>>ISBN;
    cout<<"Introduce el ani de piblicacion del libro: "<<endl;
    cin>>anio;

    crearLibro(libro,ISBN,titulo,anio);
    return(libro);
}
void mostrarDatosLibro(tLibro l)
{
    cout<<"Titulo del libro: "<< obtenerTitulo(l)<<endl;
    cout<<"ISBN del libro: "<< obtenerISBN(l)<<endl;
    cout<<"Anio de publicacion del libro: "<< obtenerAnio(l)<<endl;
}
void copiarLibro(tLibro l,tLibro &lCopia)
{
    strcpy(lCopia,l);
}
