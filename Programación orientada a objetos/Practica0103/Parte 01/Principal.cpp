/*
    Nombre:Alexandra Denisa Kovacs
    Grupo:2
    Nombre del fichero: Principal.cpp_Practica03_Parte01
    Descripción:
*/
#include "Punto.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void setPuntoUno(Punto p);
void setIntZero(int n);
void permutarPuntos(Punto p1,Punto p2);

int main()
{
    Punto p1(3.0,4.0);
    Punto p2(2.5,7.5);

    setPuntoUno(p1);
    cout<<"La coordenada x de p1 es:"<<p1.getX()<<endl;
    cout<<"La coordenada y de p1 es:"<<p1.getY()<<endl;
    //No se ha obtenido el mismo resultado, para ello se
    //denbia haber usado el paso de objetos por referencia.

    int i=50;
    setIntZero(i);
    cout<<"El valor de i es:"<<i<<endl;
    //El seultado es 50.

    permutarPuntos(p1,p2);
    cout<<"La coordenada x de p1 es:"<<p1.getX()<<endl;
    cout<<"La coordenada y de p1 es:"<<p1.getY()<<endl;
    cout<<"La coordenada x de p2 es:"<<p2.getX()<<endl;
    cout<<"La coordenada y de p2 es:"<<p2.getY()<<endl;
    //Los puntos no se han permutado,se habrian permutado
    //empleando & en la cabecera.

    double v_double[5];
    for (int i=0;i<5;i++){
        v_double[i]=sqrt(i);
    }
    double w_double[]={5,6,7,8,9};
    double v_aux[5];
    //v_aux=v_double;
    //v_double=w_double;
    //w_double=v_aux;
    //No se puede hacer esta asigancion entre vectores


}
void setPuntoUno(Punto p)
{
    p.setX(1.0);
    p.setY(1.0);
}
void setIntZero(int n)
{
    n=0;
}

void permutarPuntos(Punto p1,Punto p2)
{
    Punto aux;
    aux=p1;
    p1=p2;
    p2=aux;
}
