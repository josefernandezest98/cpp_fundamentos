/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: FileManager.cpp
	Descripcion:
 */
#include "FileManager.h"
#include "Directory.h"
#include "TextFile.h"
#include <iostream>
#include <string>

using namespace std;


const int FileManager::MAXDIRECTORIES=32768;
int FileManager::lastInode=0;
int FileManager::numDirectories=0;
Directory* FileManager::directories[MAXDIRECTORIES];

int FileManager::getFreshInode()
{
    lastInode++;
    return lastInode-1;
}

bool FileManager::addDirectory(Directory* d)
{
    if(numDirectories<MAXDIRECTORIES && (searchDirectory(d->getName())==NULL)) {
        directories[numDirectories]=d;
        numDirectories++;
        return true;
    }else return false;
}

bool FileManager::removeDirectory(string d)
{
    for(int i=0;i<numDirectories;i++) {
        if(directories[i]->getName()==d) {
            for(int j=i;j<numDirectories;j++) {
                directories[j]=directories[j+1];
            }
            numDirectories--;
            return true;
        }
    }return false;
}

Directory* FileManager::searchDirectory(string s)
{
    for(int i=0;i<numDirectories;i++) {
        if(directories[i]->getName()==s) {
				return directories[i];
			}
		}return NULL;
}

void FileManager::menu()
{
    int n;
    cout<<"Choose an option:"<<endl;
    cout<<"0.Exit."<<endl;
    cout<<"1.Show directories."<<endl;
    cout<<"2.Create a directory."<<endl;
    cout<<"3.Remove a directory."<<endl;
    cout<<"4.Select a directory."<<endl;
    cin>>n;

    switch(n){
    case 0:{
        //vacio.
        }break;
    case 1:{
        cout<<"Option 1:"<<endl;
        for(int i=0;i<numDirectories;i++){
            cout<<"Directory name:"<<endl;
            directories[i]->getName();
        }
        menu();
        }break;
    case 2:{
        cout<<"Option 2:"<<endl;
        string c1;
        cout<<"Name of the new directory:"<<endl;
        cin>>c1;

        Directory* d1=new Directory(c1);
        if(addDirectory(d1)==true){
            cout<<"The directory has been created."<<endl;
        }else{
        cout<<"Error, the directory can't be created."<<endl;
        }
        menu();
        }break;
    case 3:{
        cout<<"Option 3:"<<endl;
        string c2;
        cout<<"Name of the directory you want to remove it: "<<endl;
        cin>>c2;

        if(removeDirectory(c2)==true){
            cout<<"The directory has been deleted."<<endl;
        }else{
            cout<<"Error, the directory can't be delate."<<endl;
        }
        menu();
        }break;
    case 4:{
        cout<<"Option 4:"<<endl;
        string c3;
        cout<<"Name of the directory you want to select:"<<endl;
        cin>>c3;

        if(searchDirectory(c3)==NULL){
            cout<<"Error,the directory not found."<<endl;
        }else{
            menuDirectory(searchDirectory(c3));
        }
        menu();
        }break;
    default:{
        cout<<"Error,this option doesn't exist."<<endl;
        menu();
        }break;
    }

}

void FileManager::menuDirectory(Directory* d)
{
    int m;
    cout<<"Choose an option:"<<endl;
    cout<<"0.Exit."<<endl;
    cout<<"1.Show files."<<endl;
    cout<<"2.Create a file."<<endl;
    cout<<"3.Remove a file."<<endl;
    cout<<"4.Select a file."<<endl;
    cin>>m;

    switch(m){
    case 0:{
        //vacio.
        }break;
    case 1:{
        cout<<"Option 1:"<<endl;
        d->show();
        menuDirectory(d);
        }break;
    case 2:{
        cout<<"Option 2:"<<endl;
        string c4,content1;
        cout<<"Name of the new file:"<<endl;
        cin>>c4;
        cout<<"Write the content of the file:"<<endl;
        cin>>content1;

        TextFile* f=new TextFile(c4,content1);
        if(d->addFile(f)==true){
            cout<<"The file has been created."<<endl;
        }else{
            cout<<"Error,the file can't be created"<<endl;
        }
        menuDirectory(d);
        }break;
    case 3:{
        cout<<"Option 3:"<<endl;
        string c6;
        cout<<"Name of the file you want to remove it:"<<endl;
        cin>>c6;

        if(d->removeFile(c6)==true){
            cout<<"The file has been delated."<<endl;
        }else{
            cout<<"Error, the file can't be removed."<<endl;
        }
        menuDirectory(d);
        }break;
    case 4:{
        cout<<"Option 4:"<<endl;
        string c7;
        cout<<"Name of the file you want to select:"<<endl;
        cin>>c7;

        if(d->searchFile(c7)==NULL){
            cout<<"Error, the file not found."<<endl;
        }else{
            menuFile(d->searchFile(c7),d);
        }
        menuDirectory(d);
        }break;
    default:{
        cout<<"Error,this option doesn't exist."<<endl;
        menuDirectory(d);
        }break;
    }
}

void FileManager::menuFile(TextFile* f,Directory* d)
{
    int o;
    cout<<"Choose an option:"<<endl;
    cout<<"0.Exit."<<endl;
    cout<<"1.Show text."<<endl;
    cout<<"2.Edit text."<<endl;
    cin>>o;

    switch(o){
    case 0:{
        //vacio.
        }break;
    case 1:{
        cout<<"Option 1:"<<endl;
        cout<<f->getContent();
        menuFile(f,d);
        }break;
    case 2:{
        cout<<"Option 2:"<<endl;
        string c8;
        cout<<"Write a new text:"<<endl;
        cin>>c8;
        f->setContent(c8);
        menuFile(f,d);
        }break;
    default:{
        cout<<"Error,this option doesn't exist."<<endl;
        menuFile(f,d);
        }break;
    }
}
