/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Inode.h
Descripción: _______
*/
#ifndef INODE_H_INCLUDED
#define INODE_H_INCLUDED

using namespace std;

class Inode{
public:
    virtual int getInode()=0;
	virtual void freeInode()=0;
};

#endif // INODE_H_INCLUDED
