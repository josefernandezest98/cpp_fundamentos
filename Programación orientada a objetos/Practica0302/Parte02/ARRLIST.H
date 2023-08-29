/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: ArrList.h
Descripcion: _________
*/
#ifndef ARRLIST_H_INCLUDED
#define ARRLIST_H_INCLUDED
#include "AbsList.h"
#include <string>

using namespace std;

class ArrList:public AbsList
{
private:
    //nos declaramos el tipo string ya que en C++ no existe concretamente.
    int length;
    static const int MAX=1000;
    string data[MAX];

public:
    ArrList();
    bool add(string elem);
    void clear();
    bool contains(string elem);
    string get(int n);
    bool isEmpty();
    bool remove(string elem);
    int size();
    string set(int n,string elem);
    void show();
};

#endif // ARRLIST_H_INCLUDED
