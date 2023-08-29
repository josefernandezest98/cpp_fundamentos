/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: TextFile.h
Descripción: _______
*/
#ifndef TEXTFILE_H_INCLUDED
#define TEXTFILE_H_INCLUDED

#include <string>

#include "File.h"

using namespace std;

class TextFile:public File{
private:
    string content;
public:
    TextFile(string name,Directory* parent,string content);
    void ls();
    void stat();
    void menu();
};

#endif // TEXTFILE_H_INCLUDED
