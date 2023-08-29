/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Permissions.h
Descripción: _______
*/
#ifndef PERMISSIONS_H_INCLUDED
#define PERMISSIONS_H_INCLUDED

class Permissions{
public:
    virtual char* getPermissions()=0;
	virtual void setPermissions(char* permissions)=0;
};

#endif // PERMISSIONS_H_INCLUDED
