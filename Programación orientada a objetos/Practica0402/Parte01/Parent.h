/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Parent.h
Descripción: _______
*/
#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

using namespace std;

class Directory; //"forward declaration"
//debido a una dependencia ciclica entre clases
//y evitamos que el compilador entre en bucle.

class Parent{
public:
    virtual Directory* getParent()=0;
	virtual void setParent(Directory* )=0;
};

#endif // PARENT_H_INCLUDED
