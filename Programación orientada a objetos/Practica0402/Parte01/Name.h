/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Name.h
Descripción: _______
*/
#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED

#include <string>

using namespace std;

class Name{
public:
    virtual string getName()=0;
	virtual void setName(string name)=0;
};

#endif // NAME_H_INCLUDED
