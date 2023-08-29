/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: ArrList.cpp
Descripcion: _________
*/
#include "ArrList.h"
#include "AbsList.h"
#include <string>
#include <iostream>

using namespace std;

ArrList::ArrList():AbsList()
{
    this->length=0;
}

bool ArrList::add(string elem)
{
    if(this->length<MAX) {
			this->data[this->length]=elem;
			this->length++;
			return true;
		}else {
			return false;
		}
}

void ArrList::clear()
{
    //Deja la lista preparada para alojar MAX nuevos elementos.
    this->length=0;
}

bool ArrList::contains(string elem)
{
    for(int i=0;i<this->length;i++){
        if((this->data[i])==elem){
            return true;
        }
    }return false;
}

string ArrList::get(int n)
{
    if (n<this->length){
        return this->data[n];
    }else{
        return "";
    }
}

bool ArrList::isEmpty()
{
    return this->length==0;
}

bool ArrList::remove(string elem)
{
    string nuevo[MAX];
    //vetor que usare para guardar los elementos que no sean o.
    int i=0; //Lo usare para recorrer el vetor nuevo;
    if(this->contains(elem)==true){
        for(int j=0;j<this->length;j++){
            if(this->data[j]!=elem) {
                nuevo[i]=this->data[j];
                i++;
            }
        }
        this->length=i;
        for(int k=0;k<MAX;k++){
            this->data[k]=nuevo[k];
            }
        return true;
    }return false;
}

int ArrList::size()
{
    return this->length;
}

string ArrList::set(int n, string elem)
{
    string aux;
    if(n<this->length){
        aux=this->data[n];
        this->data[n]=elem;
        return aux;
    }else{
        return "";
    }
}

void ArrList::show()
{
    if(!this->isEmpty()){
        for(int i=0;i<this->length;i++) {
            cout<<this->data[i]<<endl;
        }
    }
}
