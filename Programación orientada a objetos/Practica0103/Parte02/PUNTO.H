/*
    Nombre:Alexandra Denisa Kovacs
    Grupo:2
    Nombre del fichero: Punto.h_Practica03_Parte02
    Descripción:
*/
#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto
{
    private:
        double rad;
        double ang;
        static int contadorPuntos;
        static int contadorPolares;

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
        static int getContadorPuntos();
        static int getContadorPolares();
        void mostrar();
};

#endif // PUNTO_H_INCLUDED
