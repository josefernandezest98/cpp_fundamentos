/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: LinkList.cpp
Descripcion: _________
*/
#include "AbsList.h"
#include "LinkList.h"
#include "Node.h"
#include <string>
#include <iostream>

using namespace std;

LinkList::LinkList():AbsList()
{
    this->head=NULL;
    this->length=0;
}

bool LinkList::add(string elem)
{
    Node* aux=new Node(elem);//Mi nodo nuevo.
    if(this->head==NULL) { //if(this.head.getNext()==null()
        this->head=aux;
    }else { //Si no es vacio.
        Node* aux2=new Node(); //Nodo que lo usare para recorrer la lista.
        aux2=this->head; //Hago que apunte a lo que apunta el nodo head,que es el primero.
        while(aux2->getNext()!=NULL) {
            aux2=aux2->getNext();
        }
        aux2->setNext(aux); //Nodo "aux2"= nodo "aux"
    }
    this->length++;
    return true;
}

void LinkList::clear()
{
    this->head=NULL;
    this->length=0;
}

bool LinkList::contains(string elem)
{
    Node* aux=this->head; //Nodo que me declaro para recorrer la lista.
    while(aux!=NULL){
        if(aux->getElem()==elem){
            return true;
        }aux=aux->getNext();
    }return false;
}

string LinkList::get(int n)
{
    if (n<this->length){
        Node* aux=this->head;
        int i=0;
        while(i<n) { //Se puede hacer un for tambien.
            aux=aux->getNext();
            i++;
        }
        return aux->getElem();
    }else{
        return "";
    }
}

bool LinkList::isEmpty()
{
    return this->length==0;
}

bool LinkList::remove(string elem)
{
    if(this->isEmpty()==false){
        //si esta en el primer nodo:
        while(this->head!=NULL && this->head->getElem()==elem){
            this->length--;
            this->head=this->head->getNext();
        }
        //si no esta en el primer nodo:
        Node* ant=this->head;
        Node* aux=this->head;

        int i=0;
        while(i<this->length) {
            if(aux->getElem()==elem){
                ant->setNext(aux->getNext());
                aux=ant->getNext();
                this->length--;
            }else { //avanzo
                ant=aux;
                aux=aux->getNext();
                i++;
            }
        }return true;
    }return false;
}

int LinkList::size()
{
    return this->length;
}

string LinkList::set(int n, string elem)
{
    if(n<this->length) {
        Node* nuevoNodo=new Node(elem);
        Node* aux=this->head;
        if(n==0) {//solo hay una posicion.
            nuevoNodo->setNext(this->head);
            this->head=nuevoNodo;
        }else {
            Node* ant=this->head;
            for(int i=0;i<n;i++) {
                ant=aux;
                aux=aux->getNext();
            }//llego donde la posicion "n".
            ant->setNext(nuevoNodo);
            nuevoNodo->setNext(aux);
        }return aux->getElem();

    }else {//(n>this.length)
        return "";
    }
}

void LinkList::show()
{
    if(!this->isEmpty()){
        Node* aux=this->head;
        while(aux!=NULL){
            cout<<aux->getElem()<<endl;
            aux=aux->getNext();
        }
    }
}
