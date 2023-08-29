/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: InodeContainer.java
Descripci�n: _______
*/
#include "InodeContainer.h"
#include <iostream>

using namespace std;

InodeContainer::InodeContainer()
{
    //Vacio.
}

list<int> InodeContainer::getInstance()
//M�todo privado porque solo queremos que se ejecute una vez para
//crear la coleccion de inodos que se almacenaran el el atributo container.
{
    list<int> li;
    for(int i=0;i<maxInodes;i++){
        li.push_back(i);
    }return li;
}

int InodeContainer::getFreshInode()
//M�todo que coge un elemento de la lista,lo elimina y lo devuelve.
{
    int i=container.front();
    container.pop_front();
    return i;
}

void InodeContainer::addFreshInode(int i)
//M�todo que se encarga de volver a colocar el inodo correspondiente
//en �container: List<int>�.
{
    container.push_back(i);
}
