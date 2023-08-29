/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Directory.h
Descripción: _______
*/
#ifndef DIRECTORY_H_INCLUDED
#define DIRECTORY_H_INCLUDED

#include <iostream>
#include <string>

#include "FSObject.h"

class Directory:public FSObject{
private:
    static const int maxFSOperations=32768;
    FSOperations* contents[Directory::maxFSOperations];
    int numFSOperations;
public:
    Directory(string name,Directory* parent);
    void ls();
    void stat();
    void freeInode();
    bool addFSObject(FSOperations* d);
    bool removeFSObject(string name);
    FSOperations* searchFSObject(string name);
    void menu();
};

#endif // DIRECTORY_H_INCLUDED
