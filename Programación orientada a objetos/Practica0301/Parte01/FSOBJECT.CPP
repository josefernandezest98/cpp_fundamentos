/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: FSObject.cpp
	Descripcion:
 */
#include "FSObject.h"
#include "FileManager.h"
#include <string>
#include <cstring>

using namespace std;

FSObject::FSObject(string c)
{
    this->inode=FileManager::getFreshInode();
    this->name=c;
    for(int i=0;i<9;i=i+3){
	permissions[i]='r';
	permissions[i+1]='w';
	permissions[i+2]='-';
    }
}

string FSObject::getName()
{
    return this->name;
}

void FSObject::setName(string n)
{
    this->name=n;
}

int FSObject::getInode()
{
    return this->inode;
}

char* FSObject::getPermissions()
{
    return this->permissions;
}

void FSObject::setPermissions(char p[])
{
    strcpy(this->permissions, p);
}
void FSObject::show()
{
    //vacio.
}
