/*
    Nombre: Alexandra Denisa Kovacs
    Grupo: 2
    Nombre del fichero: Polilinea.cpp_Practica02-01_Parte02
    Descripción:
*/
#include "Punto.H"
#include "Polilinea.h"
#include <iostream>
#include <string>

using namespace std;

Polilinea::Polilinea(string nombre)
{
    this->nombre=nombre;
    this->numPuntos=0;
}

string Polilinea::getNombre()
{
    return this->nombre;
}

void Polilinea::setNombre(string nombre)
{
    this->nombre=nombre;
}

bool Polilinea::contienePunto(Punto* p)
{
    for(int i=0;i<this->numPuntos;i++){
        if(this->puntos[i]->equals(p)){
            return true;
        }
    }return false;
}

bool Polilinea::anyadirPunto(Punto* p)
{
    if(contienePunto(p)||this->numPuntos==MAXPUNTOS){
        return false;
    }else{
        this->puntos[numPuntos]=p; //lo añade al final
        this->numPuntos++;
        return true;
    }
}

bool Polilinea::eliminarPunto(Punto* p)
{
    if(!contienePunto(p)){
        return false;
    }else{
        for(int i=0;i<this->numPuntos;i++){
            if(this->puntos[i]->equals(p)){
                for(int j=i+1;j<this->numPuntos;j++){
                    this->puntos[i]=this->puntos[j];
                }this->numPuntos--;
            }
        }return true;
    }
}

int Polilinea::numeroPuntos()
{
    return this->numPuntos;
}

void Polilinea::mostrarPuntos()
{
    cout<<"Nombre polilinea:"<<this->nombre<<endl;
    cout<<"Puntos que contiene:"<<this->numPuntos<<endl;

    for(int i=0;i<this->numPuntos;i++){
        cout<<"("<<this->puntos[i]->getX()<<","<<this->puntos[i]->getY()<<")"<<endl;
    }
}

bool Polilinea::estanAlineados()
{
    if(this->numPuntos==0||this->numPuntos==1||this->numPuntos==2){
        return true;
    }else{
        int i=2;
        bool b=true;
        while(i<this->numPuntos && b==true){
            if((this->puntos[1]->getX()-this->puntos[0]->getX())
						*(this->puntos[i]->getY()-this->puntos[0]->getY())!=
						(this->puntos[i]->getX()-this->puntos[0]->getX())
						*(this->puntos[1]->getY()-this->puntos[0]->getY())){
                b=false;
            }i++;
        }return b;
    }
}

Punto* Polilinea::puntoMasAlejado()
{
    if(this->numPuntos==0){
        return NULL;
    }else{
        Punto *pMaximo=this->puntos[0];
        for(int i=0;i<this->numPuntos;i++){
            if(this->puntos[i]->norma()>pMaximo->norma()){
                pMaximo=this->puntos[i];
            }
        }return pMaximo;
    }
}

Punto* Polilinea::puntoMasCercano()
{
    if(this->numPuntos==0){
        return NULL;
    }else{
        Punto *pMinimo=this->puntos[0];
        for(int i=0;i<this->numPuntos;i++){
            if(this->puntos[i]->norma()<pMinimo->norma()){
                pMinimo=this->puntos[i];
            }
        }return pMinimo;
    }
}

