/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Directory.cpp
Descripción: _______
*/

#include "Directory.h"
#include "FSObject.h"
#include "InodeContainer.h"
#include "TextFile.h"
#include "BinaryFile.h"
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

Directory::Directory(string name, Directory* parent):FSObject(name,parent)
{
    this->numFSOperations=0;
}

void Directory::ls()
{
    if(this->numFSOperations==0) {
        cout<<"The directory "<<this->getName()<<
                " with permissions "<<this->getPermissions()<<
                " is empty."<<endl;

    }else {
        cout<<"The directory "<<this->getName()<<
            " with permissions "<<this->getPermissions()<<
            " contains: "<<endl;
            for(int i=0;i<this->numFSOperations;i++) {
                this->contents[i]->ls();
            }
        }
}

void Directory::stat()
{
    cout<<"Directory: "<<this->getName()<<endl;
    cout<<"Inode: "<<this->getInode()<<endl;
    cout<<"Permissions: "<<this->getPermissions()<<endl;
}

void Directory::freeInode()
{
    for(int i=0;i<this->numFSOperations;i++) {
        this->contents[i]->freeInode();
        //Llamo a freeInode() de la clase File para cada componente.
    }
    InodeContainer::addFreshInode(this->getInode());
    //y libero el inodo ocupado por el propio directorio.
}

bool Directory::addFSObject(FSOperations* d)
{
    if(this->searchFSObject(d->getName())==NULL &&
    this->numFSOperations<maxFSOperations) {
        this->contents[this->numFSOperations]=d;
        this->numFSOperations++;
        return true;
    }else return false;
}

bool Directory::removeFSObject(string name)
{
    if(this->searchFSObject(name)!=NULL) {

        int i=0;
        bool encontrado=false;

        while(i<this->numFSOperations && !encontrado) {
            if(this->contents[i]->getName()==name) {
                encontrado=true;
            }
            i++;
        }//llego al objeto que buscaba.

        this->contents[i-1]->freeInode();
        this->numFSOperations--;

        for(int j=i-1;j<this->numFSOperations;j++) {
            this->contents[j]=this->contents[j+1];
        }
        return encontrado;

    }return false;
}

FSOperations* Directory::searchFSObject(string name)
{
    for(int i=0;i<this->numFSOperations;i++) {
        if(this->contents[i]->getName()==name) {
            return this->contents[i];
        }
    }
    return NULL;
}

void Directory::menu()
{
    int opcion=0;

    while(opcion!=9) {

	cout<<"You are in Directory: "<<this->getName()<<endl;
	cout<<"Chose an option: "<<endl;
	cout<<"0.Go up one level."<<endl;
	cout<<"1.Show Directory Properties(stat)."<<endl;
	cout<<"2.Show Contents(ls)."<<endl;
	cout<<"3.Create a new Directory."<<endl;
	cout<<"4.Create a new TextFile."<<endl;
	cout<<"5.Create a new BinaryFile."<<endl;
	cout<<"6.Remove a Directory(with its contents) or File."<<endl;
	cout<<"7.Select a Directory."<<endl;
	cout<<"8.Select a File."<<endl;
	cout<<"9.Exit."<<endl;

    cin>>opcion;

    switch(opcion) {

        case 0:
            this->getParent()->menu();
            break;

        case 1:
            this->stat();
            break;

        case 2:
            this->ls();
            break;

        case 3:
        {
            string nameDirectory;
            cout<<"Directory name: "<<endl;
            cin>>nameDirectory;

            Directory* d=new Directory(nameDirectory,this);
            if(this->addFSObject(d)) {
                this->ls();
            }else cout<<"The Directory can't be created."<<endl;

        }break;

        case 4:
        {
            string nameTextFile;
            string contentsTextFile;
            cout<<"TextFile name: "<<endl;
            cin>>nameTextFile;
            cout<<"TextFile content: "<<endl;
            cin>>contentsTextFile;

            TextFile* tf=new TextFile(nameTextFile,this,contentsTextFile);
            if(this->addFSObject(tf)) {
                this->ls();
            }else cout<<"The TextFile can't be created."<<endl;

        }break;

        case 5:
        {
            string nameBinaryFile;
            string commandsBinaryFile;
            cout<<"BinaryFile name: "<<endl;
            cin>>nameBinaryFile;
            cout<<"BinaryFile content: "<<endl;
            cin>>commandsBinaryFile;


            BinaryFile* bf=new BinaryFile(nameBinaryFile,this,commandsBinaryFile);
            if(this->addFSObject(bf)) {
                this->ls();
            }else cout<<"The BinaryFile can't be created."<<endl;

        }break;

        case 6:
        {
            string name;
            cout<<"Directory or File name: "<<endl;
            cin>>name;

            if(this->searchFSObject(name)==NULL) {
                cout<<"The Directory or File can´t be found."<<endl;
            }else {
                this->removeFSObject(name);
                this->ls();
                }

        }break;

        case 7:
        {
            string nameD;
            cout<<"Directory name: "<<endl;

            if(this->searchFSObject(nameD)!=NULL &&
                    typeid(searchFSObject(nameD))==typeid(this)) {
                this->searchFSObject(nameD)->menu();
            }else {
                cout<<"Don´t exist a Directory with this name."<<endl;
                }

        }break;

        case 8:
        {
            string nameF;
            cout<<"File name: "<<endl;
            cin>>nameF;

            if(this->searchFSObject(nameF)!=NULL &&
            typeid(searchFSObject(nameF))==typeid(File)) {
                this->searchFSObject(nameF)->menu();
                this->searchFSObject(nameF)->stat();
            }else {
                cout<<"Don´t exist a File with this name."<<endl;
                }

        }break;

        case 9:
            return;

            break;

        }
    }
}

