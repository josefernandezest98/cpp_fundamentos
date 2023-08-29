/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: Directory.cpp
	Descripcion:
 */
#include "Directory.h"
#include "FSObject.h"
#include "TextFile.h"
#include <iostream>
#include <string>

using namespace std;

Directory::Directory(string n):FSObject(n)
{
    this->numFiles=0;
}

bool Directory::addFile(TextFile* f)
{
    if(this->numFiles<this->MAXFILES && (this->searchFile(f->getName()) == NULL)) {
			this->files[this->numFiles]=f;
			this->numFiles++;
			return true;
		}else {
			return false;
		}
}

bool Directory::removeFile(string s)
{
    for(int i=0;i<this->numFiles;i++) {
        if(this->files[i]->getName()==s) {
            for(int j=i;j<this->numFiles-1;j++) {
                this->files[j]=this->files[j+1];
            }
            this->numFiles--;
            return true;
        }
    }return false;
}

TextFile* Directory::searchFile(string s)
{
    for(int i=0;i<this->numFiles;i++) {
        if(this->files[i]->getName()==s){
            return this->files[i];
        }
    }
    return NULL;
}

void Directory::show()
{
    cout<<"Directory: "<<this->getName()<<endl;
    cout<<"NumFiles: "<<this->numFiles<<endl;
    for(int i=0;i<this->numFiles;i++){
        cout<<"File name: "<<this->files[i]->getName()<<endl;
        cout<<"File inode: "<<this->files[i]->getInode()<<endl;
        cout<<"File permissions: "<<this->files[i]->getPermissions()<<endl;
    }
}
