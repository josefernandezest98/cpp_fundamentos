/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: BinaryFile.cpp
Descripción: _______
*/

#include <iostream>
#include <string>

#include "BinaryFile.h"
#include "Directory.h"

using namespace std;

BinaryFile::BinaryFile(string name,Directory* parent,string commands):File(name,parent)
{
    this->commands=commands;
}

void BinaryFile::ls()
{
    File::ls();
    cout<<"This is a Binary File."<<endl;
}

void BinaryFile::stat()
{
    File::stat();
    cout<<"This is a Binary File."<<endl;
}

void BinaryFile::menu()
{
    int n=0;
    cout<<"Would you like to go up one level? Type 0: "<<endl;
    cout<<"Would you like to execute the file content? Type 1: "<<endl;
    cin>>n;

    switch(n) {
    case 0:
        this->getParent()->menu();
        break;
    case 1:
        cout<<"The process "<<this->getName()<<" is running."<<endl;
        break;
    }
}
