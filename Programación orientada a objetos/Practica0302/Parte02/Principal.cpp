/*
Nombre: Alexandra Denisa Kovacs
Grupo: 2
Nombre del fichero: Principal.cpp
Descripcion: _________
*/
#include "AbsList.h"
#include "ArrList.h"
#include "LinkList.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    AbsList* l01=new ArrList();
    AbsList* l02=new LinkList();

    l01->add("there");
    l01->add("is");
    l01->add("a");
    l01->add("place");
    l01->add("where");

    l02->add("once");
    l02->add("you");
    l02->add("find");
    l02->add("it");

    l01->show();
    l01->remove("where");
    l01->show();
    l01->clear();
    l01->show();


    l02->show();
    l02->size();
    cout<<l02->contains("it");

}
