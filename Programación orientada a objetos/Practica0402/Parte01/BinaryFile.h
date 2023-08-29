/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: BinaryFile.h
Descripción: _______
*/
#ifndef BINARYFILE_H_INCLUDED
#define BINARYFILE_H_INCLUDED

#include <string>

#include "File.h"

using namespace std;

class BinaryFile:public File{
private:
    string commands;
public:
    BinaryFile(string name,Directory* parent,string commands);
    void ls();
    void stat();
    void menu();
};

#endif // BINARYFILE_H_INCLUDED
