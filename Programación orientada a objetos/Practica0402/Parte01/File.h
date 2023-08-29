/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: File.h
Descripción: _______
*/
#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#include "FSObject.h"
#include <string>

using namespace std;

class File:public FSObject{
public:
    File(string name,Directory* parent);
    void ls();
    void stat();
    void freeInode();
    virtual void menu()=0;
};

#endif // FILE_H_INCLUDED
