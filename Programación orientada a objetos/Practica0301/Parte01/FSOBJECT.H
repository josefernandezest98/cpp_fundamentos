/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: FSObject.h
	Descripcion:
 */
#ifndef FSOBJECT_H_INCLUDED
#define FSOBJECT_H_INCLUDED
#include <string>

using namespace std;

class FSObject
{
private:
    int inode;
    string name;
    char permissions[9];

public:
    FSObject(string c);
    string getName();
    void setName(string n);
    int getInode();
    char* getPermissions();
    void setPermissions(char p[]);
    void show();
};

#endif // FSOBJECT_H_INCLUDED
