/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Punto.h_Practica02-02_Parte01
    Descripción:
*/
#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED
#include <iostream>


class Punto
{
    private:
        double coord_x;
        double coord_y;
        const static double E=0.0001;

    public:
        Punto();
        Punto(double coord_x,double coord_y);
        double getX();
        void setX(double coord_x);
        double getY();
        void setY(double coord_y);
        double getCoordRadial();
        void setCoordRadial(double r);
        double getCoordAngular();
        void setCoordAngular(double a);
        void sumarCoordenadas(Punto *p);
        double norma();
        bool equals(Punto *p);
        void mostrar();
};

#endif // PUNTO_H_INCLUDED
