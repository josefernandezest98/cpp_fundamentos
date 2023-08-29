/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Principal.cpp_Practica01_Parte02
    Descripción: cliente de las clases Asignatura y Estudiante;
*/
#include <iostream>
#include "Asignatura.h"
#include "Estudiante.h"

using namespace std;

int main (){

    // Creamos objetos y punteros a objetos de las clases Asignatura y Alumno:

    Asignatura a1;
    Asignatura a2 ("POO", 6, 801);

    Asignatura * pa1 = new Asignatura ();
    Asignatura * pa2 = new Asignatura ("Estadística", 9, 701);

    Estudiante es1;
    Estudiante es2 ("peperez", true);

    Estudiante * pes1 = new Estudiante ();
    Estudiante * pes2 = new Estudiante ("mamarin", false);

    // Hacemos uso de los anteriores objetos a través de sus métodos:

    cout << "La asignatura " << a2.getNombre () << " tiene : ";
    cout << a2.getCreditos()  << " créditos, "<< endl << " y pertenece al plan de estudios ";
    cout << a2.getPlanEstudios()  << endl << endl;


    cout << "La asignatura " << pa2->getNombre() << " tiene : ";
    cout << pa2->getCreditos() << " créditos, "<< endl << " y pertenece al plan de estudios ";
    cout << pa2->getPlanEstudios() << endl << endl;


    cout << "El estudiante con cuasi " << es2.getCuasi() << endl;
    if(es2.getFamiliaNumerosa()){
        cout << "pertenece a una familia numerosa"<<endl << endl;
    }else{
        cout << "no pertenece a una familia numerosa"<<endl << endl;
    }


    cout << "El estudiante con cuasi " << pes2->getCuasi() << endl;
    if(pes2->getFamiliaNumerosa()){
        cout << "pertenece a una familia numerosa"<<endl << endl;
    }else{
        cout << "no pertenece a una familia numerosa"<<endl << endl;
    }


    // Aquí puedes observar un ejemplo de cómo
    // se leen cadenas de caracteres con espacios en blanco, por medio de getline:

    string nn;

    cout << "Introduce una nueva Cuasi para el estudiante es2" << endl;

    getline(cin, nn);
    es2.setCuasi(nn);

    cout << "El estudiante con cuasi " << es2.getCuasi() << endl;
    if(es2.getFamiliaNumerosa()){
        cout << "pertenece a una familia numerosa"<<endl << endl;
    }else{
        cout << "no pertenece a una familia numerosa"<<endl << endl;
    }

    return 0;
}
