/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Circunferencia.h_Practica02-02_Parte01
    Descripción:
*/
#ifndef CIRCUNFERENCIA_H_INCLUDED
#define CIRCUNFERENCIA_H_INCLUDED
#include <cmath>

class Circunferencia
{
private: //atributos privados
    double radio;
    const static double PI=3.1416;  //static porque esta subrayado y significa que todas las circunferecias tiene ese valor igual.
    static int contadorCircunferencia;
/*
protected:
    Circunferencia();
    Circunferencia(double radio);
*/

/*
*Respuesta a Ejercicio 04: Si delcaramos los dos
constructores como "protected", no compilara el programa,
esto se debe a que en C++ solo se comparte con la clase y la subclase.
*/
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
    int static getContadorCircunferencias();
    void static reiniciarContadorCircunferencias();
    void mostrar();
};

#endif // CIRCUNFERENCIA_H_INCLUDED
