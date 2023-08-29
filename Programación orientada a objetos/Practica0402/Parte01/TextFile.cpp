/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: TextFile.cpp
Descripción: _______
*/

#include <iostream>
#include <string>

#include "TextFile.h"
#include "Directory.h"

using namespace std;

TextFile::TextFile(string name,Directory* parent,string content):File(name,parent)
{
    this->content=content;
}

void TextFile::ls()
{
    File::ls();
    cout<<"This is a Text File."<<endl;
}

void TextFile::stat()
{
    File::stat();
    cout<<"This is a Text File."<<endl;
}

 void TextFile::menu()
 {
    int n=0;
    cout<<"Would you like to go up one level? Type 0: "<<endl;
    cout<<"Would you like to show the file content? Type 1: "<<endl;
    cin>>n;

    switch(n) {

    case 0:
        this->getParent()->menu();
        break;
    case 1:
        cout<<this->content<<endl;
        break;
    }
 }
