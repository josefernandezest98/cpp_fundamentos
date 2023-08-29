/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: FSObjects.cpp
Descripción: _______
*/

#include "FSObject.h"
#include "InodeContainer.h"
#include "Directory.h"
#include <string>

using namespace std;

FSObject::FSObject(string name, Directory* parent)
{
    this->name=name;
    this->inode=InodeContainer::getFreshInode();
    this->parent=parent;
    this->permissions = new char [10];
    this->permissions="rw-rw-rw-";
}

string FSObject::getName()
{
    return this->name;
}

void FSObject::setName(string name)
{
    this->name=name;
}

Directory* FSObject::getParent()
{
    return this->parent;
}

void FSObject::setParent(Directory* parent)
{
    this->parent = parent;
}

int FSObject::getInode()
{
    return this->inode;
}

char* FSObject::getPermissions()
{
    return this->permissions;
}

void FSObject::setPermissions(char* permissions)
{
    this->permissions=permissions;
}
