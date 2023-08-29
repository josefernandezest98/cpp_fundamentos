/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: TextFile.cpp
	Descripcion:
 */
#include "TextFile.h"
#include "FSObject.h"
#include <iostream>
#include <string>

using namespace std;

TextFile::TextFile(string n,string c):FSObject(n)
{
    this->content=c;
}

string TextFile::getContent()
{
    return this->content;
}

void TextFile::setContent(string c)
{
    this->content=c;
}

void TextFile::show()
{
    cout<<"Inode: "<<this->getInode()<<endl;
    cout<<"Name: "<<this->getName()<<endl;
    cout<<"Permissions: "<<this->getPermissions()<<endl;
    cout<<"Content. "<<this->getContent();
}
