/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: LinkList.h
Descripcion: _________
*/
#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
#include "AbsList.h"
#include "Node.h"
#include <string>

using namespace std;

class LinkList:public AbsList
{
private:
    Node* head;
    int length;
public:
    LinkList();
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

#endif // LINKLIST_H_INCLUDED
