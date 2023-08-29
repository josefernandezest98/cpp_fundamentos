/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica01_Parte01
    Descripción: cliente de la clase Circunferencia;
*/

#include <iostream>
#include "Circunferencia.h"

using namespace std;

int main (){

    // En las siguientes líneas de código declaramos dos objetos de la clase Circunferencia;
    // Cada uno de ellos es construido por medio de uno de los constructores propios de la clase

    // Cuidado con la declaración de Circunferencia c1; o Circunferencia c1 ();
    // La segunda versión declararía una función, no un objeto;

    Circunferencia c1;
    Circunferencia c2 (7.5);

    // Las siguientes líneas de código declaran dos punteros a objetos de la clase Circunferencia;
    // De nuevo cada uno hace uso de uno de los dos constructores disponibles en esta clase;

    Circunferencia * pc1 = new Circunferencia (); //te inicializa un puntero a circunferencia con un radio de 0.0
    Circunferencia * pc2 = new Circunferencia (4.8);  ////te inicializa un puntero a circunferencia con un radio de 4.8

    cout << "El área de la circunferencia pc1 es " << pc1->getArea() << endl;
    cout << "El área de la circunferencia pc2 es " << pc2->getArea() << endl;

    cout << "El área de la circunferencia c1 es " << c1.getArea() << endl;
    cout << "El área de la circunferencia c2 es " << c2.getArea() << endl;

    // Introduce aquí tu propio código correspondiente a los ejercicios 4 y siguientes;

    /*No se puede acceder a cualquiera de los atributos porque su visibilidad
    es privada y solo se pueden ver desde la propia clase.*/

    c1.setArea(314.16);
    c2.setRadio(6+c2.getRadio());
    pc1->setLongitud(62.832);
    pc2->setRadio(5*pc2->getRadio());

    cout<< "El area de la circunferencia c1 es: "<<c1.getArea() <<endl;
    cout<< "El radio de la cirncuferencia c2 es: "<<c2.getRadio() <<endl;
    cout<< "La longitud de la circunferencia pc1 es: "<<pc1->getLongitud() <<endl;
    cout<< "El radio de la circunferencia pc2 es: "<<pc2->getRadio() <<endl;

    return 0;
}
