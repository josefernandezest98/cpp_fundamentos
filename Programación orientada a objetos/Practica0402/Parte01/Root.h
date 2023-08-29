/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Root.h
Descripción: _______
*/
#ifndef ROOT_H_INCLUDED
#define ROOT_H_INCLUDED
#include "Directory.h"

//class Directory;//"forward declaration"
//debido a una dependencia ciclica entre clases
//y evitamos que el compilador entre en bucle.

class Root{
private:
    Root();
    static Directory* getInstance();

public:
    static Directory* root;
};

#endif // ROOT_H_INCLUDED
