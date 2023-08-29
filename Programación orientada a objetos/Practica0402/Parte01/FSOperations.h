/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: FSOperations.java
Descripción: _______
*/
#ifndef FSOPERATIONS_H_INCLUDED
#define FSOPERATIONS_H_INCLUDED

#include "Parent.h"
#include "Inode.h"
#include "Name.h"
#include "Permissions.h"

using namespace std;

class FSOperations:public Parent,public Inode,public Name,public Permissions{
public:
    virtual void ls()=0;
	virtual void stat()=0;
	virtual void menu()=0;
};

#endif // FSOPERATIONS_H_INCLUDED
