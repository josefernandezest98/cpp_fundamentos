/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Node.cpp
Descripcion: _________
*/
#include "Node.h"
#include <string>

using namespace std;

Node::Node()
{
   this->elem="";
   this->next=NULL;
}

Node::Node(string elem)
{
    this->elem=elem;
    this->next=NULL;
}

string Node::getElem()
{
    return this->elem;
}

void Node::setElem(string elem)
{
    this->elem=elem;
}

Node* Node::getNext()
{
    return this->next;
}

void Node::setNext(Node* next)
{
    this->next=next;
}

