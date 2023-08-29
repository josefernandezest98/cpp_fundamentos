/*
	Nombre: Alexandra Denisa Kovacs
	Grupo: 2
	Nombre del fichero: FileManager.h
	Descripcion:
 */
#ifndef FILEMANAGER_H_INCLUDED
#define FILEMANAGER_H_INCLUDED
#include "Directory.h"
#include "TextFile.h"
#include <string>


using namespace std;

class FileManager
{
private:
    static const int MAXDIRECTORIES;
    static int lastInode;
    static int numDirectories;
    static Directory* directories[];

public:
    static int getFreshInode();
    static bool addDirectory(Directory* d);
    static bool removeDirectory(string d);
    static Directory* searchDirectory(string s);
    static void menu();
    static void menuDirectory(Directory* d);
    static void menuFile(TextFile* f,Directory* d);
};


#endif // FILEMANAGER_H_INCLUDED
