/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Circunferencia.h_Practica01_Parte01
    Descripción: cliente de la clase Circunferencia;
*/
#ifndef CIRCUNFERENCIA_H_INCLUDED
#define CIRCUNFERENCIA_H_INCLUDED
#include <cmath>

class Circunferencia
{
private: //atributos privados
    double radio;
    const static double PI=3.1416;  //static porque esta subrayado y significa que todas las circunferecias tiene ese valor igual

public:
    Circunferencia();
    Circunferencia(double radio);
    double getRadio();
    void setRadio(double radio);
    double getDiametro();
    void setDiametro(double diametro);
    double getLongitud();
    void setLongitud(double longitud);
    double getArea();
    void setArea(double area);

};

#endif // CIRCUNFERENCIA_H_INCLUDED
