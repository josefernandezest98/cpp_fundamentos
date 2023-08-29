/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: AbsList.h
Descripcion: _________
*/
#ifndef ABSLIST_H_INCLUDED
#define ABSLIST_H_INCLUDED
#include <string>

using namespace std;

class AbsList
{
public:
    AbsList();
    virtual bool add(string elem);
    virtual void clear();
    virtual bool contains(string elem);
    virtual string get(int n);
    virtual bool equals(string elem);
    virtual bool isEmpty();
    virtual bool remove(string elem);
    virtual int size();
    virtual string set(int n,string elem);
    virtual void show();
};

#endif // ABSLIST_H_INCLUDED
