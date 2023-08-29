/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: File.cpp
Descripción: _______
*/

#include "File.h"
#include "InodeContainer.h"
#include "Directory.h"
#include <iostream>
#include <string>

using namespace std;

File::File(string name,Directory* parent):FSObject(name,parent)
{

}

void File::ls()
{
    cout<<"File: "<<this->getName()<<endl;
    cout<<"Inode: "<<this->getInode()<<endl;
    cout<<"Permissions: ";
    for (int i=0;i<9;i++){
        cout<<this->getPermissions()[i];
    }
}

void File::stat()
////Como "ls():void y "stat():void" se comportan igual se pueden llamar entre ellos.
{
    this->ls();
}

void File::freeInode()
//Libera el inodo del fichero correspondiente.
{
    InodeContainer::addFreshInode(this->getInode());
}
