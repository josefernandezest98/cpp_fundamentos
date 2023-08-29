/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Node.h
Descripcion: _________
*/
#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <string>

using namespace std;

class Node
{
private:
    string elem;
    Node* next;
public:
    Node();
    Node(string elem);
    string getElem();
    void setElem(string elem);
    Node* getNext();
    void setNext(Node* next);
};


#endif // NODE_H_INCLUDED
