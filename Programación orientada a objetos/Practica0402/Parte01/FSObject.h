/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: FSObjects.h
Descripción: _______
*/
#ifndef FSOBJECT_H_INCLUDED
#define FSOBJECT_H_INCLUDED
#include "FSOperations.h"
#include <string>

using namespace std;

class FSObject: public FSOperations{

private:
    string name;
    int inode;
    Directory* parent;
    char* permissions;

public:
    FSObject(string name,Directory* parent);
    string getName();
    void setName(string name);
    Directory* getParent();
    void setParent(Directory* parent);
    int getInode();
    char* getPermissions();
    void setPermissions(char* permissions);

};

#endif // FSOBJECT_H_INCLUDED
