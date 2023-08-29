/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Punto.h_Practica01_Parte03
    Descripción:
*/
#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto
{
    private:
        double coord_x;
        double coord_y;

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
};

#endif // PUNTO_H_INCLUDED
