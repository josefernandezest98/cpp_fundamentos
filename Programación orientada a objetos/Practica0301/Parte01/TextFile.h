/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: TextFile.h
	Descripcion:
 */
#ifndef TEXTFILE_H_INCLUDED
#define TEXTFILE_H_INCLUDED
#include <string>
#include "FSObject.h"

using namespace std;

class TextFile: public FSObject
{
private:
    string content;

public:
    TextFile(string n,string c);
    string getContent();
    void setContent(string c);
    void show();
};

#endif // TEXTFILE_H_INCLUDED
