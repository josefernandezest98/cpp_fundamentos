/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Root.cpp
Descripción: _______
*/

#include "Root.h"
#include "InodeContainer.h"

using namespace std;

list<int> InodeContainer::container=InodeContainer::getInstance();
//Si lo movemos del fichero "InodeContainer.cpp" a este
//nos aseguramos de que el compilador inicializa primero
//la lista de inodos y luego crea el directorio "Directory* root

Directory* Root::root=Root::getInstance();

Root::Root()
{
   //Vacio.
}

Directory* Root::getInstance()
{
    Directory* d=new Directory("/",NULL);
    d->setParent(d);
    return d;
}

