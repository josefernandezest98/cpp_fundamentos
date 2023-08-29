/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Polilinea.h_Practica02-01_Parte02
    Descripción:
*/
#ifndef POLILINEA_H_INCLUDED
#define POLILINEA_H_INCLUDED

#include "Punto.H"
#include <string>

using namespace std;

class Polilinea
{
    private:
        string nombre;
        int numPuntos;
        const static int MAXPUNTOS=15;
        Punto *puntos[MAXPUNTOS];
    public:
        Polilinea(string nombre);
        string getNombre();
        void setNombre(string nombre);
        bool contienePunto(Punto *p);
        bool anyadirPunto(Punto *p);
        bool eliminarPunto(Punto *p);
        int numeroPuntos();
        void mostrarPuntos();
        bool estanAlineados();
        Punto* puntoMasAlejado();
        Punto* puntoMasCercano();

};

#endif // POLILINEA_H_INCLUDED
