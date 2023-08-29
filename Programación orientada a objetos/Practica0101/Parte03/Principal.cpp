/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica01_Parte03
    Descripción:
*/
#include "PUNTO.H"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    //Creamos objetos y punteros a objetos de la clase Punto.

    Punto p1;
    Punto p2(1,1);

    Punto *pu1=new Punto();
    Punto *pu2=new Punto(3,2);

    //Hacemos uso de los anteriores objetos a traves de sus metodos:
    cout<<"La coordenada x de pu1 es:"<<pu1->getX()<<endl;
    cout<<"La coordenada y de pu1 es:"<<pu1->getY()<<endl;
    cout<<"La coordenada x de pu2 es:"<<pu2->getX()<<endl;
    cout<<"La coordenada y de pu2 es:"<<pu2->getY()<<endl;

    pu1->sumarCoordenadas(pu2);
    cout<<"La suma de pu1 y pu2 es:("<<pu1->getX()<<","<<pu1->getY()<<")"<<endl;
}
