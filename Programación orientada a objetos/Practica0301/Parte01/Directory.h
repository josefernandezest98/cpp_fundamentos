/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: Directory.h
	Descripcion:
 */
#ifndef DIRECTORY_H_INCLUDED
#define DIRECTORY_H_INCLUDED
#include <string>
#include "FSObject.h"
#include "TextFile.h"

class Directory: public FSObject
{
private:
    static const int MAXFILES=32768;
    TextFile* files[MAXFILES];
    int numFiles;

public:
    Directory (string n);
    bool addFile(TextFile* f);
    bool removeFile(string s);
    TextFile* searchFile(string s);
    void show();

};

#endif // DIRECTORY_H_INCLUDED
